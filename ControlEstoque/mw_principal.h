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
    bool logado;
    QString nome_colab,acesso_colab;


private slots:
    void on_btn_bloquear_clicked();

private:
    Ui::mw_principal *ui;
};
#endif // MW_PRINCIPAL_H
