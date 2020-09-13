#ifndef MW_GESTAOCOLABORADORES_H
#define MW_GESTAOCOLABORADORES_H

#include <QDialog>

namespace Ui {
class mw_gestaoColaboradores;
}

class mw_gestaoColaboradores : public QDialog
{
    Q_OBJECT

public:
    explicit mw_gestaoColaboradores(QWidget *parent = nullptr);
    ~mw_gestaoColaboradores();

private:
    Ui::mw_gestaoColaboradores *ui;
};

#endif // MW_GESTAOCOLABORADORES_H
