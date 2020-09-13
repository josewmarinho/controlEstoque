#include "mw_gestaocolaboradores.h"
#include "ui_mw_gestaocolaboradores.h"

mw_gestaoColaboradores::mw_gestaoColaboradores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_gestaoColaboradores)
{
    ui->setupUi(this);
}

mw_gestaoColaboradores::~mw_gestaoColaboradores()
{
    delete ui;
}
