#include "mw_principal.h"
#include "ui_mw_principal.h"
#include <QMessageBox>
#include "mw_logar.h"
#include "mw_novavenda.h"
#include "mw_gestaocolaboradores.h"
#include "mw_gestaoestoque.h"
#include "mw_gestaovendas.h"
#include "variaveis_globais.h"
#include "Conexao.h"
#include <cstdlib>
#include "mw_novavenda.h"
#include "ui_mw_novavenda.h"
#include <QMessageBox>
#include <mw_editarprodutovenda.h>
#include "mw_principal.h"
#include "variaveis_globais.h"


int variaveis_globais::id_colab;
QString variaveis_globais::nome_colab;
QString variaveis_globais::acesso_colab;
QString variaveis_globais::username_colab;
bool variaveis_globais::logado;

mw_principal::mw_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mw_principal)
{

    ui->setupUi(this);

    variaveis_globais::logado=false;
    cadFechado.addFile(":/imagens/imgs/cadeadofechado.png");
    cadAberto->addFile(":/imagens/imgs/cadeadoaberto.png");

    ui->btn_bloquear->setText("");
    ui->btn_bloquear->setIcon(cadFechado);
    ui->statusbar->addWidget(ui->btn_bloquear);
    ui->statusbar->addWidget(ui->lb_nome);

}

mw_principal::~mw_principal()
{
    delete ui;
}

void mw_principal::fechar()
{
    exit(0);
}


void mw_principal::on_btn_bloquear_clicked()
{
    if(!variaveis_globais::logado){
        mw_logar f_logar;
        f_logar.exec();
        if(variaveis_globais::logado){
            ui->btn_bloquear->setIcon(*cadAberto);
            ui->lb_nome->setText(variaveis_globais::nome_colab);
        }
    }else{
        variaveis_globais::logado=false;
        ui->btn_bloquear->setIcon(cadFechado);
        ui->lb_nome->setText("Sem Colaborador");
    }
}

void mw_principal::on_pushButton_2_clicked()
{
    if(variaveis_globais::logado){

        Conexao con;
        if(!con.abrir()){
            QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");
        }else{
            QSqlQuery query("select * from tb_produtos where qtde_estoque < 10");
            if(query.next()){
                QMessageBox::information(this,"AVISO","Existe(m) produto(s) com a quantidade menor que 10!");
            }
            con.fechar();
        }
        mw_novavenda f_novavenda;
        f_novavenda.exec();
   }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado");
    }
}

void mw_principal::on_actionEstoque_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
        mw_gestaoEstoque f_gestaoEstoque;
        f_gestaoEstoque.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}

void mw_principal::on_actionColaboradores_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
        mw_gestaoColaboradores f_gestaoColaboradores;
        f_gestaoColaboradores.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}

void mw_principal::on_actionVendas_triggered()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
        mw_gestaoVendas f_gestaoVendas;
        f_gestaoVendas.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}


void mw_principal::on_pushButton_3_clicked()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
        mw_gestaoEstoque f_gestaoEstoque;
        f_gestaoEstoque.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}

void mw_principal::on_pushButton_4_clicked()
{
    if(variaveis_globais::logado){
        if(variaveis_globais::acesso_colab=="A"){
        mw_gestaoVendas f_gestaoVendas;
        f_gestaoVendas.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}

void mw_principal::on_pushButton_5_clicked()
{
    fechar();
}


void mw_principal::on_actionSair_triggered()
{
    fechar();
}

void mw_principal::on_actionSobre_triggered()
{

}
