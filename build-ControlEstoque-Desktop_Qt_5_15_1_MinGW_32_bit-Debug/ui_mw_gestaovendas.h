/********************************************************************************
** Form generated from reading UI file 'mw_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTAOVENDAS_H
#define UI_MW_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_mw_gestaoVendas
{
public:

    void setupUi(QDialog *mw_gestaoVendas)
    {
        if (mw_gestaoVendas->objectName().isEmpty())
            mw_gestaoVendas->setObjectName(QString::fromUtf8("mw_gestaoVendas"));
        mw_gestaoVendas->resize(400, 300);

        retranslateUi(mw_gestaoVendas);

        QMetaObject::connectSlotsByName(mw_gestaoVendas);
    } // setupUi

    void retranslateUi(QDialog *mw_gestaoVendas)
    {
        mw_gestaoVendas->setWindowTitle(QCoreApplication::translate("mw_gestaoVendas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_gestaoVendas: public Ui_mw_gestaoVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTAOVENDAS_H
