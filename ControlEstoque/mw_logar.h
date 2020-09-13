#ifndef MW_LOGAR_H
#define MW_LOGAR_H

#include "Conexao.h"
#include <QDialog>

namespace Ui {
class mw_logar;
}

class mw_logar : public QDialog
{
    Q_OBJECT

public:
    explicit mw_logar(QWidget *parent = nullptr);
    ~mw_logar();
    bool logado;
    Conexao con;
    QString nome,acesso;
    int id;

private slots:
    void on_btn_logar_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::mw_logar *ui;
};

#endif // MW_LOGAR_H
