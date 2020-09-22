#include "mw_novavenda.h"
#include "ui_mw_novavenda.h"
#include <QMessageBox>
#include <mw_editarprodutovenda.h>
#include "mw_principal.h"
#include "variaveis_globais.h"

QString mw_novavenda::g_idpord;
QString mw_novavenda::g_prod;
QString mw_novavenda::g_qtde;
QString mw_novavenda::g_valuni;
QString mw_novavenda::g_valtotal;
bool mw_novavenda::alterou;

mw_novavenda::mw_novavenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_novavenda)
{
    ui->setupUi(this);

    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");
    }

    ui->tw_listaprodutos->setColumnCount(5);
    ui->tw_listaprodutos->setColumnWidth(0,100);
    ui->tw_listaprodutos->setColumnWidth(1,150);
    ui->tw_listaprodutos->setColumnWidth(2,90);
    ui->tw_listaprodutos->setColumnWidth(3,70);
    ui->tw_listaprodutos->setColumnWidth(4,70);
    QStringList cabecalhos={"Código","Produto","Valor Un.","Qtde","Total"};
    ui->tw_listaprodutos->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_listaprodutos->setStyleSheet("QTableView{selection-background-color:green;}");
    ui->tw_listaprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_listaprodutos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaprodutos->verticalHeader()->setVisible(false);


    ui->tw_listapesquisar->setColumnCount(3);
    ui->tw_listapesquisar->setColumnWidth(0,100);
    ui->tw_listapesquisar->setColumnWidth(1,150);
    ui->tw_listapesquisar->setColumnWidth(2,50);
    QStringList header={"Código","Produto","Qtde"};
    ui->tw_listapesquisar->setHorizontalHeaderLabels(header);
    ui->tw_listapesquisar->setStyleSheet("QTableView{selection-background-color:red;}");
    ui->tw_listapesquisar->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_listapesquisar->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listapesquisar->verticalHeader()->setVisible(false);

    ui->txt_codproduto->setFocus();
    contlinhas=0;
}

mw_novavenda::~mw_novavenda()
{
    delete ui;
}

void mw_novavenda::on_txt_codproduto_returnPressed()
{
    QSqlQuery query;
    QString id=ui->txt_codproduto->text();
    double valtot;
    contlinhas=0;
    query.prepare("select id_produto,produto,valor_venda from tb_produtos where id_produto="+id);
    if(query.exec()){
        query.first();
        if(query.value(0).toString()!=""){
            ui->tw_listaprodutos->insertRow(contlinhas);
            ui->tw_listaprodutos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,3,new QTableWidgetItem(ui->txt_qtde->text()));
            valtot=ui->txt_qtde->text().toDouble()*query.value(2).toDouble();
            ui->tw_listaprodutos->setItem(contlinhas,4,new QTableWidgetItem(QString::number(valtot)));
            ui->tw_listaprodutos->setRowHeight(contlinhas,20);
            contlinhas++;

            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));

            resetaCampos();
        }else{
            QMessageBox::warning(this,"ERRO","Produto não encontrado!");
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao inserir novo produto!");
    }
}

void mw_novavenda::resetaCampos(){
    ui->txt_codproduto->clear();
    ui->txt_qtde->setText("1");
    ui->txt_codproduto->setFocus();
}

void mw_novavenda::removerLinhas(QTableWidget *tw){
    while (tw->rowCount()>0) {
       tw->removeRow(0);
    }
}

double mw_novavenda::calculaTotal(QTableWidget *tw, int coluna){
    int totallinhas;
    double total = 0.0;  

    totallinhas=tw->rowCount();
    for(int i=0;i<totallinhas;i++){
        total+=tw->item(i,coluna)->text().toDouble();
    }
    return total;
}

double mw_novavenda::calculaTroco(){
    QString trocototal = ui->txt_valorrecebido->text();
    return trocototal.toDouble();
}



void mw_novavenda::on_btn_excluirproduto_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1){
        QMessageBox::StandardButton opc=QMessageBox::question(this,"Exclusão?","Confirma exclusão do produto?",QMessageBox::Yes|QMessageBox::No);
        if(opc==QMessageBox::Yes){
           ui->tw_listaprodutos->removeRow(ui->tw_listaprodutos->currentRow());
           ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));
           contlinhas--;
        }
    }else{
        QMessageBox::warning(this,"ERRO","Selecione um produto primeiro");
    }
}

void mw_novavenda::on_btn_editarproduto_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1){
        int linha=ui->tw_listaprodutos->currentRow();

        g_idpord=ui->tw_listaprodutos->item(linha,0)->text();
        g_prod=ui->tw_listaprodutos->item(linha,1)->text();
        g_valuni=ui->tw_listaprodutos->item(linha,2)->text();
        g_qtde=ui->tw_listaprodutos->item(linha,3)->text();

        mw_editarprodutovenda f_editarprodutovenda;
        f_editarprodutovenda.exec();

        if(alterou){
            ui->tw_listaprodutos->item(linha,2)->setText(g_valuni);
            ui->tw_listaprodutos->item(linha,3)->setText(g_qtde);
            ui->tw_listaprodutos->item(linha,4)->setText(g_valtotal);
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));
        }
    }
}

void mw_novavenda::on_btn_finalizarvenda_clicked()
{
    if(ui->tw_listaprodutos->rowCount()>0){
            int idVenda;
            int qtdeEstoque;
            int qtdeNovo;
            QString msgFimVenda;
            double total=calculaTotal(ui->tw_listaprodutos,4);
            //QString data=QDate::currentDate().toString("yyy-MM-dd");
            QString data=QDate::currentDate().toString("dd/MM/yyyy");
            QString hora=QTime::currentTime().toString("hh:mm:ss");
            QSqlQuery query;
            query.prepare("insert into tb_vendas (data_venda,hora_venda,id_colaborador,valor_total,id_tipo_pagamento) values ('"+data+"','"+hora+"',"+QString::number(variaveis_globais::id_colab)+","+QString::number(total)+",1)");
            if(!query.exec()){
                QMessageBox::warning(this,"ERRO","Erro registrar nova venda.");
            }else{
                query.prepare("select id_venda from tb_vendas order by id_venda desc limit 1");
                query.exec();
                query.first();
                idVenda=query.value(0).toInt();
                msgFimVenda="ID Venda: "+QString::number(idVenda)+"\nValor total: R$"+QString::number(total);

                int totalLinhas=ui->tw_listaprodutos->rowCount();
                int linha=0;
                while(linha<totalLinhas){
                    QString id = ui->tw_listaprodutos->item(linha,0)->text();
                    QString prod=ui->tw_listaprodutos->item(linha,1)->text();
                    QString qtde=ui->tw_listaprodutos->item(linha,3)->text();
                    QString valUn=ui->tw_listaprodutos->item(linha,2)->text();
                    QString valTot=ui->tw_listaprodutos->item(linha,4)->text();
                    query.prepare("select qtde_estoque from tb_produtos where id_produto="+id);
                    query.exec();
                    query.first();
    //                qDebug() << query.lastError().text();
                    qtdeEstoque = query.value(0).toInt();
    //                qDebug() << qtdeEstoque;
                    qtdeNovo = qtdeEstoque - qtde.toInt();
                    query.prepare("update tb_produtos set qtde_estoque="+QString::number(qtdeNovo)+" where id_produto="+id);
                    query.exec();
                    query.prepare("insert into tb_produtosVendas(id_venda,produto,qtde,valor_un,valor_total, id_produto) values("+QString::number(idVenda)+",'"+prod+"',"+qtde+","+valUn+","+valTot+","+id+")");
                    query.exec();
                    linha++;
                }

                QMessageBox::information(this,"Venda Concluída",msgFimVenda);
                resetaCampos();
                removerLinhas(ui->tw_listaprodutos);
                ui->lb_totalvenda->setText("R$ 0.00");
            }

        }else{
            QMessageBox::warning(this,"ERRO","Não existem produtos nessa venda!\nPrimeiro adicione um produto.");
        }
}

void mw_novavenda::on_pushButton_4_clicked()
{
    QSqlQuery query;
    QString id=ui->txt_codproduto->text();
    double valtot;
    contlinhas=0;
    query.prepare("select id_produto,produto,valor_venda from tb_produtos where id_produto="+id);
    if(query.exec()){
        query.first();
        if(query.value(0).toString()!=""){
            ui->tw_listaprodutos->insertRow(contlinhas);
            ui->tw_listaprodutos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,3,new QTableWidgetItem(ui->txt_qtde->text()));
            valtot=ui->txt_qtde->text().toDouble()*query.value(2).toDouble();
            ui->tw_listaprodutos->setItem(contlinhas,4,new QTableWidgetItem(QString::number(valtot)));
            ui->tw_listaprodutos->setRowHeight(contlinhas,20);
            contlinhas++;

            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));

            resetaCampos();
        }else{
            QMessageBox::warning(this,"ERRO","Produto não encontrado!");
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao inserir novo produto!");
    }
}

void mw_novavenda::on_btn_pesquisar_clicked()
{
    QString busca;
    ui->tw_listapesquisar->clearContents();
    ui->tw_listapesquisar->setRowCount(0);
    //funcoes_globais::removerLinhas(ui->tw_ge_produtos);
    if(ui->txt_nomebusca->text()==""){
        if(ui->rb_nomebusca->isChecked()){
            busca="select id_produto,produto,qtde_estoque from tb_produtos order by produto";
        }else{
            busca="select id_produto,produto,qtde_estoque from tb_produtos order by id_produto";
        }
    }else{
        if(ui->rb_nomebusca->isChecked()){
            busca="select id_produto,produto,qtde_estoque from tb_produtos where produto like '%"+ui->txt_nomebusca->text()+"%' order by produto";
        }else{
            busca="select id_produto,produto,qtde_estoque from tb_produtos where id_produto="+ui->txt_nomebusca->text()+" order by id_produto";
        }
    }
    int contlinhas=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec()){
        while(query.next()){
            ui->tw_listapesquisar->insertRow(contlinhas);
            ui->tw_listapesquisar->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listapesquisar->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listapesquisar->setItem(contlinhas,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_listapesquisar->setRowHeight(contlinhas,20);
            contlinhas++;
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao filtrar produto");
    }
    ui->txt_nomebusca->clear();
}

void mw_novavenda::on_txt_valorrecebido_returnPressed()
{
    double total=calculaTotal(ui->tw_listaprodutos,4);
    ui->lb_troco->setText("R$ "+QString::number(calculaTroco()-total));
}
