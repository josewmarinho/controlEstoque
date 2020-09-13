#include "mw_novavenda.h"
#include "ui_mw_novavenda.h"

mw_novavenda::mw_novavenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_novavenda)
{
    ui->setupUi(this);
}

mw_novavenda::~mw_novavenda()
{
    delete ui;
}
