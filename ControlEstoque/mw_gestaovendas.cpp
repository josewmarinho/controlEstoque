#include "mw_gestaovendas.h"
#include "ui_mw_gestaovendas.h"

mw_gestaoVendas::mw_gestaoVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_gestaoVendas)
{
    ui->setupUi(this);
}

mw_gestaoVendas::~mw_gestaoVendas()
{
    delete ui;
}
