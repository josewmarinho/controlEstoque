#ifndef MW_GESTAOVENDAS_H
#define MW_GESTAOVENDAS_H

#include <QDialog>

namespace Ui {
class mw_gestaoVendas;
}

class mw_gestaoVendas : public QDialog
{
    Q_OBJECT

public:
    explicit mw_gestaoVendas(QWidget *parent = nullptr);
    ~mw_gestaoVendas();

private:
    Ui::mw_gestaoVendas *ui;
};

#endif // MW_GESTAOVENDAS_H
