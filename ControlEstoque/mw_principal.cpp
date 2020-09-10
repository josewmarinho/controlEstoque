#include "mw_principal.h"
#include "ui_mw_principal.h"
#include <QMessageBox>
#include "mw_logar.h"

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
        logado=f_logar.getLogado();
        nome_colab=f_logar.getNome();
        acesso_colab=f_logar.getAcesso();
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
