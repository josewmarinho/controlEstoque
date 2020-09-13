#ifndef MW_NOVAVENDA_H
#define MW_NOVAVENDA_H

#include <QDialog>

namespace Ui {
class mw_novavenda;
}

class mw_novavenda : public QDialog
{
    Q_OBJECT

public:
    explicit mw_novavenda(QWidget *parent = nullptr);
    ~mw_novavenda();

private:
    Ui::mw_novavenda *ui;
};

#endif // MW_NOVAVENDA_H
