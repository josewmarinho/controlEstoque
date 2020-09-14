#ifndef MW_EDITARPRODUTOVENDA_H
#define MW_EDITARPRODUTOVENDA_H

#include <QDialog>

namespace Ui {
class mw_editarprodutovenda;
}

class mw_editarprodutovenda : public QDialog
{
    Q_OBJECT

public:
    explicit mw_editarprodutovenda(QWidget *parent = nullptr);
    ~mw_editarprodutovenda();

private slots:
    void on_btn_edita_confirma_clicked();

    void on_btn_edita_cancela_clicked();

private:
    Ui::mw_editarprodutovenda *ui;
};

#endif // MW_EDITARPRODUTOVENDA_H
