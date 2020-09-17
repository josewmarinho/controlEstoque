#include "mw_gestaocolaboradores.h"
#include "ui_mw_gestaocolaboradores.h"
#include <QMessageBox>
#include <QtSql>

#include "funcoes_globais.h"

mw_gestaoColaboradores::mw_gestaoColaboradores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_gestaoColaboradores)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o banco de dados");
    }

    ui->cb_acesso_novocolab->addItem("A");
    ui->cb_acesso_novocolab->addItem("B");
    ui->cb_ge_acesso->addItem("A");
    ui->cb_ge_acesso->addItem("B");
    ui->txt_nome_novocolab->setFocus();

    ui->tabWidget->setCurrentIndex(0);

    ui->tw_ge_listacolab->setColumnCount(2);
    ui->tw_ge_listacolab->setColumnWidth(0,160);
    ui->tw_ge_listacolab->setColumnWidth(1,160);
    QStringList cabecalhos={"ID","Nome"};
    ui->tw_ge_listacolab->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_ge_listacolab->setStyleSheet("QTableView {selection-background-color:red}");
    ui->tw_ge_listacolab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_ge_listacolab->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_ge_listacolab->verticalHeader()->setVisible(false);
}

mw_gestaoColaboradores::~mw_gestaoColaboradores()
{
    delete ui;
}

void mw_gestaoColaboradores::on_btn_novo_novocolab_clicked()
{
    ui->txt_nome_novocolab->clear();
    ui->txt_username_novocolab->clear();
    ui->txt_senha_novocolab->clear();
    ui->txt_senha_novocolab->clear();
    ui->cb_acesso_novocolab->setCurrentIndex(0);
    ui->txt_nome_novocolab->setFocus();
}

void mw_gestaoColaboradores::on_btn_gravar_novocolab_clicked()
{
    QString nome=ui->txt_nome_novocolab->text();
    QString username=ui->txt_username_novocolab->text();
    QString senha=ui->txt_senha_novocolab->text();
    QString telefone=ui->txt_fone_novocolab->text();
    QString acesso=ui->cb_acesso_novocolab->currentText();

    QSqlQuery query;
    query.prepare("insert into tb_colaboradores (nome_colab,username_colab,senha_colab,fone_colab,acesso_colab) values"
                      "('"+nome+"','"+username+"','"+senha+"','"+telefone+"','"+acesso+"')");
    if(!query.exec()){
        QMessageBox::critical(this,"ERRO","Erro ao inserir novo colaborador!");
    }else{
        QMessageBox::information(this,"GRAVADO","Colaborador gravado com sucesso!");
        ui->txt_nome_novocolab->clear();
        ui->txt_username_novocolab->clear();
        ui->txt_senha_novocolab->clear();
        ui->txt_fone_novocolab->clear();
        ui->cb_acesso_novocolab->setCurrentIndex(0);
        ui->txt_nome_novocolab->setFocus();
    }
}

void mw_gestaoColaboradores::on_btn_cancelar_novocolab_clicked()
{

}

void mw_gestaoColaboradores::on_tabWidget_currentChanged(int index)
{
    if(index==1){
        ui->tw_ge_listacolab->clearContents();
        ui->tw_ge_listacolab->setRowCount(0);
        //funcoes_globais::removerLinhas(ui->tw_ge_listacolab);
        int contlinhas=0;
        QSqlQuery query;
        query.prepare("select id_colab,nome_colab from tb_colaboradores order by id_colab");
        if(query.exec()){
            while(query.next()){
                ui->tw_ge_listacolab->insertRow(contlinhas);
                ui->tw_ge_listacolab->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_ge_listacolab->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_ge_listacolab->setRowHeight(contlinhas,20);
                contlinhas++;
            }
        }else{
            QMessageBox::warning(this,"ERRO","Erro ao listar colaboradores !");
        }
    }
}

void mw_gestaoColaboradores::on_tw_ge_listacolab_itemSelectionChanged()
{
    int id=ui->tw_ge_listacolab->item(ui->tw_ge_listacolab->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_colaboradores where id_colab="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_ge_nome->setText(query.value(1).toString());
        ui->txt_ge_username->setText(query.value(2).toString());
        ui->txt_ge_senha->setText(query.value(3).toString());
        ui->txt_ge_telefone->setText(query.value(4).toString());
        ui->cb_acesso_novocolab->setCurrentText(query.value(5).toString());
    }
}

void mw_gestaoColaboradores::on_btn_ge_filtrar_clicked()
{
    QString busca;
    ui->tw_ge_listacolab->clearContents();
    ui->tw_ge_listacolab->setRowCount(0);
    //funcoes_globais::removerLinhas(ui->tw_ge_listacolab);
    if(ui->txt_ge_filtro->text()==""){
        if(ui->rb_ge_idcolab->isChecked()){
            busca="select id_colab,nome_colab from tb_colaboradores order by id_colab";
        }else{
            busca="select id_colab,nome_colab from tb_colaboradores order by nome_colab";
        }
    }else{
        if(ui->rb_ge_idcolab->isChecked()){
            busca="select id_colab,nome_colab from tb_colaboradores where id_colab="+ui->txt_ge_filtro->text()+" order by id_colab";
        }else{
            busca="select id_colab,nome_colab from tb_colaboradores where nome_colab like '%"+ui->txt_ge_filtro->text()+"%' order by nome_colab";
        }
    }
    int contlinhas = 0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec()){
        while(query.next()){
            ui->tw_ge_listacolab->insertRow(contlinhas);
            ui->tw_ge_listacolab->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_ge_listacolab->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_ge_listacolab->setRowHeight(contlinhas,20);
            contlinhas++;
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao filtrar colaborador");
    }
    ui->txt_ge_filtro->clear();
    ui->txt_ge_filtro->setFocus();
}

void mw_gestaoColaboradores::on_btn_ge_gravar_clicked()
{
    if(ui->tw_ge_listacolab->currentRow()==-1){
        QMessageBox::warning(this,"ERRO","Selecione um colaborador");
        return;
    }
    QString id=ui->tw_ge_listacolab->item(ui->tw_ge_listacolab->currentRow(),0)->text();
    QSqlQuery query;
    QString nome=ui->txt_ge_nome->text();
    QString username=ui->txt_ge_username->text();
    QString senha=ui->txt_ge_senha->text();
    QString fone=ui->txt_ge_telefone->text();
    QString acesso=ui->cb_ge_acesso->currentText();

    query.prepare("update tb_colaboradores set nome_colab='"+nome+"',username_colab='"+username+"',senha_colab='"+senha+"',fone_colab='"+fone+"',acesso_colab='"+acesso+"' where id_colab="+id);
    if(query.exec()){
        int linha=ui->tw_ge_listacolab->currentRow();
        ui->tw_ge_listacolab->item(linha,1)->setText(nome);
        QMessageBox::information(this,"ATUALIZADO","Colaborador atualizado com sucesso!");
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao atualizado Colaborador!");
    }
}

void mw_gestaoColaboradores::on_btn_ge_excluir_clicked()
{
    if(ui->tw_ge_listacolab->currentRow()==-1){
        QMessageBox::warning(this,"ERRO","Selecione um colaborador");
        return;
    }
    QMessageBox::StandardButton opc=QMessageBox::question(this,"Exclusão","Confirma a exclusão do colaborador?",QMessageBox::Yes|QMessageBox::No);
    if(opc==QMessageBox::Yes){
        int linha=ui->tw_ge_listacolab->currentRow();
        QString id=ui->tw_ge_listacolab->item(linha,0)->text();
        QSqlQuery query;
        query.prepare("delete from tb_colaboradores where id_colab="+id);
        if(query.exec()){
            ui->tw_ge_listacolab->removeRow(linha);
            QMessageBox::information(this,"DELETADO","Colaborador deletado com sucesso!");
        }else{
            QMessageBox::warning(this,"ERRO","Erro ao deletar colaborador");
        }
    }
}
