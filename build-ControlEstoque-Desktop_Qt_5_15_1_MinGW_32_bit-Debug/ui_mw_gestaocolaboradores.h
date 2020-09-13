/********************************************************************************
** Form generated from reading UI file 'mw_gestaocolaboradores.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTAOCOLABORADORES_H
#define UI_MW_GESTAOCOLABORADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_mw_gestaoColaboradores
{
public:

    void setupUi(QDialog *mw_gestaoColaboradores)
    {
        if (mw_gestaoColaboradores->objectName().isEmpty())
            mw_gestaoColaboradores->setObjectName(QString::fromUtf8("mw_gestaoColaboradores"));
        mw_gestaoColaboradores->resize(400, 300);

        retranslateUi(mw_gestaoColaboradores);

        QMetaObject::connectSlotsByName(mw_gestaoColaboradores);
    } // setupUi

    void retranslateUi(QDialog *mw_gestaoColaboradores)
    {
        mw_gestaoColaboradores->setWindowTitle(QCoreApplication::translate("mw_gestaoColaboradores", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_gestaoColaboradores: public Ui_mw_gestaoColaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTAOCOLABORADORES_H
