#include "mw_principal.h"
#include "ui_mw_principal.h"
#include <QMessageBox>
#include "mw_logar.h"
#include "mw_novavenda.h"
#include "mw_gestaocolaboradores.h"
#include "mw_gestaoestoque.h"
#include "mw_gestaovendas.h"

int mw_principal::id_colab;
QString mw_principal::nome_colab;
QString mw_principal::acesso_colab;
QString mw_principal::username_colab;
bool mw_principal::logado;

mw_principal::mw_principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mw_principal)
{
    ui->setupUi(this);



    logado=false;
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


void mw_principal::on_btn_bloquear_clicked()
{
    if(!logado){
        mw_logar f_logar;
        f_logar.exec();
        if(logado){
            ui->btn_bloquear->setIcon(*cadAberto);
            ui->lb_nome->setText(nome_colab);
        }
    }else{
        logado=false;
        ui->btn_bloquear->setIcon(cadFechado);
        ui->lb_nome->setText("Sem Colaborador");
    }
}

void mw_principal::on_pushButton_2_clicked()
{
    if(logado){
        mw_novavenda f_novavenda;
        f_novavenda.exec();
   }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado");
    }
}

void mw_principal::on_actionEstoque_triggered()
{
    if(logado){
        if(acesso_colab=="A"){
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
    if(logado){
        if(acesso_colab=="A"){
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
    if(logado){
        if(acesso_colab=="A"){
        mw_gestaoVendas f_gestaoVendas;
        f_gestaoVendas.exec();
        }else{
            QMessageBox::information(this,"ACESSO","Acesso não permitido!");
        }
    }else{
        QMessageBox::information(this,"LOGIN","Não existe colaborador logado!");
    }
}
