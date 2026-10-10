/********************************************************************************
** Form generated from reading UI file 'CheatsView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEATSVIEW_H
#define UI_CHEATSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace QGBA {

class Ui_CheatsView
{
public:
    QGridLayout *gridLayout;
    QTreeView *cheatList;
    QPushButton *addSet;
    QPushButton *load;
    QPushButton *save;
    QPushButton *remove;
    QFrame *line;
    QPlainTextEdit *codeEntry;
    QPushButton *add;
    QGroupBox *typeBox;
    QVBoxLayout *typeLayout;

    void setupUi(QWidget *QGBA__CheatsView)
    {
        if (QGBA__CheatsView->objectName().isEmpty())
            QGBA__CheatsView->setObjectName("QGBA__CheatsView");
        QGBA__CheatsView->resize(520, 455);
        gridLayout = new QGridLayout(QGBA__CheatsView);
        gridLayout->setObjectName("gridLayout");
        cheatList = new QTreeView(QGBA__CheatsView);
        cheatList->setObjectName("cheatList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cheatList->sizePolicy().hasHeightForWidth());
        cheatList->setSizePolicy(sizePolicy);
        cheatList->setDefaultDropAction(Qt::MoveAction);
        cheatList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        cheatList->setHeaderHidden(true);

        gridLayout->addWidget(cheatList, 0, 0, 7, 1);

        addSet = new QPushButton(QGBA__CheatsView);
        addSet->setObjectName("addSet");

        gridLayout->addWidget(addSet, 0, 1, 1, 2);

        load = new QPushButton(QGBA__CheatsView);
        load->setObjectName("load");

        gridLayout->addWidget(load, 1, 1, 1, 1);

        save = new QPushButton(QGBA__CheatsView);
        save->setObjectName("save");

        gridLayout->addWidget(save, 1, 2, 1, 1);

        remove = new QPushButton(QGBA__CheatsView);
        remove->setObjectName("remove");

        gridLayout->addWidget(remove, 2, 1, 1, 2);

        line = new QFrame(QGBA__CheatsView);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 3, 1, 1, 2);

        codeEntry = new QPlainTextEdit(QGBA__CheatsView);
        codeEntry->setObjectName("codeEntry");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(codeEntry->sizePolicy().hasHeightForWidth());
        codeEntry->setSizePolicy(sizePolicy1);
        codeEntry->setTabChangesFocus(true);
        codeEntry->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout->addWidget(codeEntry, 4, 1, 1, 2);

        add = new QPushButton(QGBA__CheatsView);
        add->setObjectName("add");

        gridLayout->addWidget(add, 5, 1, 1, 2);

        typeBox = new QGroupBox(QGBA__CheatsView);
        typeBox->setObjectName("typeBox");
        typeLayout = new QVBoxLayout(typeBox);
        typeLayout->setObjectName("typeLayout");

        gridLayout->addWidget(typeBox, 6, 1, 1, 2);

        gridLayout->setRowStretch(4, 1);
        gridLayout->setColumnStretch(0, 4);
        QWidget::setTabOrder(addSet, load);
        QWidget::setTabOrder(load, save);
        QWidget::setTabOrder(save, remove);
        QWidget::setTabOrder(remove, codeEntry);
        QWidget::setTabOrder(codeEntry, add);

        retranslateUi(QGBA__CheatsView);

        QMetaObject::connectSlotsByName(QGBA__CheatsView);
    } // setupUi

    void retranslateUi(QWidget *QGBA__CheatsView)
    {
        QGBA__CheatsView->setWindowTitle(QCoreApplication::translate("QGBA::CheatsView", "Cheats", nullptr));
        addSet->setText(QCoreApplication::translate("QGBA::CheatsView", "Add New Code", nullptr));
        load->setText(QCoreApplication::translate("QGBA::CheatsView", "Load", nullptr));
        save->setText(QCoreApplication::translate("QGBA::CheatsView", "Save", nullptr));
        remove->setText(QCoreApplication::translate("QGBA::CheatsView", "Remove", nullptr));
        codeEntry->setPlaceholderText(QCoreApplication::translate("QGBA::CheatsView", "Enter codes here...", nullptr));
        add->setText(QCoreApplication::translate("QGBA::CheatsView", "Add Lines", nullptr));
        typeBox->setTitle(QCoreApplication::translate("QGBA::CheatsView", "Code type", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class CheatsView: public Ui_CheatsView {};
} // namespace Ui
} // namespace QGBA

#endif // UI_CHEATSVIEW_H
