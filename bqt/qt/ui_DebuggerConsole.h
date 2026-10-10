/********************************************************************************
** Form generated from reading UI file 'DebuggerConsole.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGERCONSOLE_H
#define UI_DEBUGGERCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "HistoryLineEdit.h"
#include "LogWidget.h"

namespace QGBA {

class Ui_DebuggerConsole
{
public:
    QGridLayout *gridLayout;
    QGBA::LogWidget *log;
    QGBA::HistoryLineEdit *prompt;
    QPushButton *breakpoint;
    QPushButton *doContinue;

    void setupUi(QWidget *QGBA__DebuggerConsole)
    {
        if (QGBA__DebuggerConsole->objectName().isEmpty())
            QGBA__DebuggerConsole->setObjectName("QGBA__DebuggerConsole");
        QGBA__DebuggerConsole->resize(480, 500);
        gridLayout = new QGridLayout(QGBA__DebuggerConsole);
        gridLayout->setObjectName("gridLayout");
        log = new QGBA::LogWidget(QGBA__DebuggerConsole);
        log->setObjectName("log");
        log->setReadOnly(true);

        gridLayout->addWidget(log, 0, 0, 1, 3);

        prompt = new QGBA::HistoryLineEdit(QGBA__DebuggerConsole);
        prompt->setObjectName("prompt");

        gridLayout->addWidget(prompt, 1, 0, 1, 1);

        breakpoint = new QPushButton(QGBA__DebuggerConsole);
        breakpoint->setObjectName("breakpoint");

        gridLayout->addWidget(breakpoint, 1, 1, 1, 1);

        doContinue = new QPushButton(QGBA__DebuggerConsole);
        doContinue->setObjectName("doContinue");
        doContinue->setEnabled(false);

        gridLayout->addWidget(doContinue, 1, 2, 1, 1);


        retranslateUi(QGBA__DebuggerConsole);

        QMetaObject::connectSlotsByName(QGBA__DebuggerConsole);
    } // setupUi

    void retranslateUi(QWidget *QGBA__DebuggerConsole)
    {
        QGBA__DebuggerConsole->setWindowTitle(QCoreApplication::translate("QGBA::DebuggerConsole", "Debugger", nullptr));
        prompt->setPlaceholderText(QCoreApplication::translate("QGBA::DebuggerConsole", "Enter command (try `help` for more info)", nullptr));
        breakpoint->setText(QCoreApplication::translate("QGBA::DebuggerConsole", "Break", nullptr));
        doContinue->setText(QCoreApplication::translate("QGBA::DebuggerConsole", "Continue", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class DebuggerConsole: public Ui_DebuggerConsole {};
} // namespace Ui
} // namespace QGBA

#endif // UI_DEBUGGERCONSOLE_H
