#ifndef MW_GESTAOVENDAS_H
#define MW_GESTAOVENDAS_H

#include <QDialog>
#include "Conexao.h"

namespace Ui {
class mw_gestaoVendas;
}

class mw_gestaoVendas : public QDialog
{
    Q_OBJECT

public:
    explicit mw_gestaoVendas(QWidget *parent = nullptr);
    ~mw_gestaoVendas();
    Conexao con;

private slots:
    void on_tw_listaVendas_itemSelectionChanged();

    void on_btn_filtrar_clicked();

    void on_btn_relatorioPDF_clicked();


//    void on_btn_filtrar_2_clicked();

private:
    Ui::mw_gestaoVendas *ui;
};

#endif // MW_GESTAOVENDAS_H
