#include "mw_gestaoestoque.h"
#include "ui_mw_gestaoestoque.h"
#include <QtSql>
#include "funcoes_globais.h"

mw_gestaoEstoque::mw_gestaoEstoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_gestaoEstoque)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o banco de dados");
    }else{
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){

        }else{
            QMessageBox::warning(this,"ERRO","Erro ao listar produtos");
        }
    }
    ui->tw_ge_produtos->setColumnCount(2);
    ui->tabWidget->setCurrentIndex(0);
}

mw_gestaoEstoque::~mw_gestaoEstoque()
{
    delete ui;
    con.fechar();
}

void mw_gestaoEstoque::on_btn_novoproduto_clicked()
{
    ui->txt_codigoproduto->clear();
    ui->txt_descricaoproduto->clear();
    ui->txt_qtdeestoque->clear();
    ui->txt_porcevenda->clear();
    ui->txt_valorcompra->clear();
    ui->txt_fornecedor->clear();
    ui->txt_codigoproduto->setFocus();
}

void mw_gestaoEstoque::on_btn_gravarnovoproduto_clicked()
{
    QString aux;
    QString codigo=ui->txt_codigoproduto->text();
    QString produto=ui->txt_descricaoproduto->text();
    QString fornecedor=ui->txt_fornecedor->text();
    QString quantidade=ui->txt_qtdeestoque->text();

    aux=ui->txt_valorcompra->text();
    std::replace(aux.begin(),aux.end(),',','.');
    QString valcompra=aux;
    double valCompra = aux.toDouble();
    aux=ui->txt_porcevenda->text();
    std::replace(aux.begin(),aux.end(),',','.');
    QString porcevenda=aux;
    double porceVenda = aux.toDouble();
    float valor_final = (valCompra + (valCompra * porceVenda/100));
    QSqlQuery query;
    query.prepare("insert into tb_produtos (id_produto,produto,id_fornecedor,qtde_estoque,valor_compra,valor_venda,porce_produto) values"
                      "("+QString::number(codigo.toInt())+",'"+produto+"',"+QString::number(fornecedor.toInt())+","+QString::number(quantidade.toInt())+","+QString::number(valcompra.toFloat())+","+QString::number(valor_final)+","+QString::number(porcevenda.toFloat())+")");
    if(!query.exec()){
        QMessageBox::warning(this,"ERRO","Erro ao inserir produto!");
    }else{
        QMessageBox::information(this,"GRAVADO","Produto inserido com sucesso!");
        ui->txt_codigoproduto->clear();
        ui->txt_descricaoproduto->clear();
        ui->txt_qtdeestoque->clear();
        ui->txt_porcevenda->clear();
        ui->txt_valorcompra->clear();
        ui->txt_fornecedor->clear();
        ui->txt_codigoproduto->setFocus();
    }
}

void mw_gestaoEstoque::on_tabWidget_currentChanged(int index)
{
    if(index==1){
        ui->tw_ge_produtos->clearContents();
        ui->tw_ge_produtos->setRowCount(0);
        //funcoes_globais::removerLinhas(ui->tw_ge_produtos);
        int contlinhas=0;
        //Remover os produtos do TW
        QSqlQuery query;
        query.prepare("select id_produto,produto from tb_produtos order by produto");
        if(query.exec()){
            while(query.next()){
                ui->tw_ge_produtos->insertRow(contlinhas);
                ui->tw_ge_produtos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_ge_produtos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_ge_produtos->setRowHeight(contlinhas,20);
                contlinhas++;
            }
            ui->tw_ge_produtos->setColumnWidth(0,150);
            ui->tw_ge_produtos->setColumnWidth(1,150);
            QStringList cabecalhos={"Código","Produto"};
            ui->tw_ge_produtos->setHorizontalHeaderLabels(cabecalhos);
            ui->tw_ge_produtos->setStyleSheet("QTableView {selection-background-color:red}");
            ui->tw_ge_produtos->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tw_ge_produtos->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tw_ge_produtos->verticalHeader()->setVisible(false);
        }else{
            QMessageBox::warning(this,"ERRO","Erro ao listar produtos!");
        }
    }
}


void mw_gestaoEstoque::on_tw_ge_produtos_itemSelectionChanged()
{
    int id=ui->tw_ge_produtos->item(ui->tw_ge_produtos->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produtos where id_produto="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_ge_codigoproduto->setText(query.value(0).toString());
        ui->txt_ge_produto->setText(query.value(1).toString());
        ui->txt_ge_fornecedor->setText(query.value(2).toString());
        ui->txt_ge_qtde->setText(query.value(3).toString());
        ui->txt_ge_valorcompra->setText(query.value(4).toString());
        ui->lb_ge_valorvenda->setText("R$ "+query.value(5).toString());
        ui->txt_ge_porcevenda->setText(query.value(6).toString());
    }
}

void mw_gestaoEstoque::on_btn_ge_gravar_clicked()
{
    if(ui->txt_ge_codigoproduto->text()==""){
        QMessageBox::warning(this,"ERRO","Primeiro selecione um registro");
    }else{
        int id=ui->tw_ge_produtos->item(ui->tw_ge_produtos->currentRow(),0)->text().toInt();
        QString aux;
        QString prod=ui->txt_ge_produto->text();
        QString forn=ui->txt_ge_fornecedor->text();
        QString qtde=ui->txt_ge_qtde->text();

        aux=ui->txt_ge_valorcompra->text();
        std::replace(aux.begin(),aux.end(),',','.');
        QString valcompra=aux;
        double valCompra = aux.toDouble();
        aux=ui->txt_ge_porcevenda->text();
        std::replace(aux.begin(),aux.end(),',','.');
        QString porcevenda=aux;
        double porceVenda = aux.toDouble();
        float valor_final = (valCompra + (valCompra * porceVenda/100));

        QSqlQuery query;
        query.prepare("update tb_produtos set id_produto="+QString::number(id)+",produto='"+prod+"',id_fornecedor="+QString::number(forn.toInt())+",qtde_estoque="+QString::number(qtde.toInt())+",valor_compra="+QString::number(valcompra.toDouble())+",valor_venda="+QString::number(valor_final)+",porce_produto="+QString::number(porcevenda.toFloat())+" where id_produto="+QString::number(id));
        if(query.exec()){
            int linha=ui->tw_ge_produtos->currentRow();
            ui->tw_ge_produtos->item(linha,0)->setText(ui->txt_ge_codigoproduto->text());
            ui->tw_ge_produtos->item(linha,1)->setText(prod);
            QMessageBox::information(this,"ATUALIZADO","Produto atualizado com sucesso!");
        }else{
            QMessageBox::warning(this,"ERRO","Erro ao atualizado produto!");
        }
    }
}

void mw_gestaoEstoque::on_btn_ge_excluir_clicked()
{
    if(ui->txt_ge_codigoproduto->text()==""){
        QMessageBox::warning(this,"ERRO","Primeiro selecione um registro");
    }else{
        QMessageBox::StandardButton opc=QMessageBox::question(this,"Exclusão","Confirma a exclusão do produto?",QMessageBox::Yes|QMessageBox::No);
        if(opc==QMessageBox::Yes){
            int linha=ui->tw_ge_produtos->currentRow();
            int id=ui->tw_ge_produtos->item(linha,0)->text().toInt();
            QSqlQuery query;
            query.prepare("delete from tb_produtos where id_produto="+QString::number(id));
            if(query.exec()){
                ui->tw_ge_produtos->removeRow(linha);
                QMessageBox::information(this,"DELETADO","Produto deletado com sucesso!");
            }else{
                QMessageBox::warning(this,"ERRO","Erro ao deletar produto");
            }
        }
    }
}

void mw_gestaoEstoque::on_btn_ge_filtrar_clicked()
{
    QString busca;
    ui->tw_ge_produtos->clearContents();
    ui->tw_ge_produtos->setRowCount(0);
    //funcoes_globais::removerLinhas(ui->tw_ge_produtos);
    if(ui->txt_ge_filtrar->text()==""){
        if(ui->rb_ge_codigo->isChecked()){
            busca="select id_produto,produto from tb_produtos order by id_produto";
        }else{
            busca="select id_produto,produto from tb_produtos order by produto";
        }
    }else{
        if(ui->rb_ge_codigo->isChecked()){
            busca="select id_produto,produto from tb_produtos where id_produto="+ui->txt_ge_filtrar->text()+" order by id_produto";
        }else{
            busca="select id_produto,produto from tb_produtos where produto like '%"+ui->txt_ge_filtrar->text()+"%' order by produto";
        }
    }
    int contlinhas=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec()){
        while(query.next()){
            ui->tw_ge_produtos->insertRow(contlinhas);
            ui->tw_ge_produtos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_ge_produtos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_ge_produtos->setRowHeight(contlinhas,20);
            contlinhas++;
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao filtrar produto");
    }
    ui->txt_ge_filtrar->clear();
    ui->txt_ge_filtrar->setFocus();
}


void mw_gestaoEstoque::on_txt_porcevenda_textChanged(const QString &arg1)
{
    QString aux=ui->txt_porcevenda->text();
    std::replace(aux.begin(),aux.end(),',','.');
    double porcevenda=aux.toDouble();
    qDebug() << porcevenda;
    aux=ui->txt_valorcompra->text();
    std::replace(aux.begin(),aux.end(),',','.');
    double valcompra = aux.toDouble();
    double valor_porce = (valcompra * (porcevenda/100));
    double valor_final = valcompra + valor_porce;
    ui->lb_valorvenda->setText("R$ "+QString::number(valor_final));
}

void mw_gestaoEstoque::on_txt_ge_porcevenda_textChanged(const QString &arg1)
{
    QString aux=ui->txt_ge_porcevenda->text();
    std::replace(aux.begin(),aux.end(),',','.');
    double porcevenda=aux.toDouble();
    qDebug() << porcevenda;
    aux=ui->txt_ge_valorcompra->text();
    std::replace(aux.begin(),aux.end(),',','.');
    double valcompra = aux.toDouble();
    double valor_porce = (valcompra * (porcevenda/100));
    double valor_final = valcompra + valor_porce;
    ui->lb_ge_valorvenda->setText("R$ "+QString::number(valor_final));
}
