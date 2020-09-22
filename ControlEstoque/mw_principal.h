#ifndef MW_PRINCIPAL_H
#define MW_PRINCIPAL_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class mw_principal; }
QT_END_NAMESPACE

class mw_principal : public QMainWindow
{
    Q_OBJECT

public:
    mw_principal(QWidget *parent = nullptr);
    ~mw_principal();
    QIcon cadFechado;
    QIcon *cadAberto=new QIcon();
    void fechar();



private slots:
    void on_btn_bloquear_clicked();

    void on_pushButton_2_clicked();

    void on_actionEstoque_triggered();

    void on_actionColaboradores_triggered();

    void on_actionVendas_triggered();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_actionSair_triggered();

    void on_actionSobre_triggered();

private:
    Ui::mw_principal *ui;
};
#endif // MW_PRINCIPAL_H
