#include "mw_editarprodutovenda.h"
#include "ui_mw_editarprodutovenda.h"
#include "mw_novavenda.h"

mw_editarprodutovenda::mw_editarprodutovenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_editarprodutovenda)
{
    ui->setupUi(this);
    ui->txt_edita_produto->setText(mw_novavenda::g_prod);
    ui->txt_edita_quantidade->setText(mw_novavenda::g_qtde);
    ui->txt_edita_precoUnitario->setText(mw_novavenda::g_valuni);
}

mw_editarprodutovenda::~mw_editarprodutovenda()
{
    delete ui;
}

void mw_editarprodutovenda::on_btn_edita_confirma_clicked()
{
    QString aux;

    mw_novavenda::alterou=true;
    mw_novavenda::g_qtde=ui->txt_edita_quantidade->text();

    aux=ui->txt_edita_precoUnitario->text();
    std::replace(aux.begin(),aux.end(),',','.');
    mw_novavenda::g_valuni=aux;

    mw_novavenda::g_valtotal=QString::number(ui->txt_edita_quantidade->text().toDouble()*aux.toDouble());
    close();
}

void mw_editarprodutovenda::on_btn_edita_cancela_clicked()
{
    mw_novavenda::alterou=false;
    close();
}
