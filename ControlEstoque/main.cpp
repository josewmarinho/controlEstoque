#include "mw_principal.h"
#include "mw_logar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mw_principal w;
    w.show();
    return a.exec();
}
