#include "mw_logar.h"
#include "ui_mw_logar.h"
#include <QMessageBox>
#include "mw_principal.h"
#include "variaveis_globais.h"


mw_logar::mw_logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_logar)
{
    ui->setupUi(this);
    logado=false;
}

mw_logar::~mw_logar()
{
    delete ui;
}

void mw_logar::on_btn_logar_clicked()
{
    if(!con.abrir()){
        QMessageBox::warning(this,"Erro","Erro ao abrir o banco de dados");
    }else{
        QString username,senha;
        username=ui->txt_username->text();
        senha=ui->txt_senha->text();
        QSqlQuery query;
        // query.prepare("select * from tb_colaboradores where username_colab='"+username+"'and senha_colab='"+senha+"'");
        query.prepare("SELECT * FROM tb_colaboradores WHERE username_colab = :username AND senha_colab = :senha");
        query.bindValue(":username", username);
        query.bindValue(":senha", senha);
        if(query.exec()){
             query.first();
             if(query.value(1).toString()!=""){
                 variaveis_globais::logado=true;
                 variaveis_globais::nome_colab=query.value(1).toString();
                 variaveis_globais::id_colab=query.value(0).toInt();
                 variaveis_globais::acesso_colab=query.value(5).toString();
                 con.fechar();
                 close();
             }else{
                 QMessageBox::warning(this,"Erro","Colaborador não encontrado!");
             }
        }else{
            QMessageBox::warning(this,"Erro","Falha no Login!!");
        }
    }
    //LOGIN
    con.fechar();
}

void mw_logar::on_btn_cancelar_clicked()
{
    logado=false;
    close();
}
