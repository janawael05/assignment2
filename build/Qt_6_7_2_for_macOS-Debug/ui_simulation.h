/********************************************************************************
** Form generated from reading UI file 'simulation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATION_H
#define UI_SIMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Simulation
{
public:

    void setupUi(QDialog *Simulation)
    {
        if (Simulation->objectName().isEmpty())
            Simulation->setObjectName("Simulation");
        Simulation->resize(400, 300);

        retranslateUi(Simulation);

        QMetaObject::connectSlotsByName(Simulation);
    } // setupUi

    void retranslateUi(QDialog *Simulation)
    {
        Simulation->setWindowTitle(QCoreApplication::translate("Simulation", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Simulation: public Ui_Simulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATION_H
