/********************************************************************************
** Form generated from reading UI file 'PaletteView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PALETTEVIEW_H
#define UI_PALETTEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Swatch.h"

namespace QGBA {

class Ui_PaletteView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGBA::Swatch *bgGrid;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QGBA::Swatch *objGrid;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QGBA::Swatch *selected;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *r;
    QLabel *g;
    QLabel *b;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_12;
    QLabel *value;
    QLabel *hexcode;
    QLabel *index;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *exportBG;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *exportOBJ;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *QGBA__PaletteView)
    {
        if (QGBA__PaletteView->objectName().isEmpty())
            QGBA__PaletteView->setObjectName("QGBA__PaletteView");
        QGBA__PaletteView->resize(500, 397);
        verticalLayout = new QVBoxLayout(QGBA__PaletteView);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        groupBox = new QGroupBox(QGBA__PaletteView);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        bgGrid = new QGBA::Swatch(groupBox);
        bgGrid->setObjectName("bgGrid");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bgGrid->sizePolicy().hasHeightForWidth());
        bgGrid->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(bgGrid);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox_2 = new QGroupBox(QGBA__PaletteView);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        objGrid = new QGBA::Swatch(groupBox_2);
        objGrid->setObjectName("objGrid");
        sizePolicy1.setHeightForWidth(objGrid->sizePolicy().hasHeightForWidth());
        objGrid->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(objGrid);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(QGBA__PaletteView);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        selected = new QGBA::Swatch(groupBox_3);
        selected->setObjectName("selected");
        sizePolicy.setHeightForWidth(selected->sizePolicy().hasHeightForWidth());
        selected->setSizePolicy(sizePolicy);
        selected->setMinimumSize(QSize(64, 64));

        horizontalLayout_4->addWidget(selected);

        line_3 = new QFrame(groupBox_3);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_4->addWidget(line_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        verticalLayout_9->addWidget(label_4);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");

        verticalLayout_9->addWidget(label_5);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName("label_6");

        verticalLayout_9->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(8, -1, -1, -1);
        r = new QLabel(groupBox_3);
        r->setObjectName("r");
        r->setText(QString::fromUtf8("0x00 (00)"));
        r->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(r);

        g = new QLabel(groupBox_3);
        g->setObjectName("g");
        g->setText(QString::fromUtf8("0x00 (00)"));
        g->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(g);

        b = new QLabel(groupBox_3);
        b->setObjectName("b");
        b->setText(QString::fromUtf8("0x00 (00)"));
        b->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_10->addWidget(b);


        horizontalLayout_4->addLayout(verticalLayout_10);

        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_4->addWidget(line_4);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");

        verticalLayout_11->addWidget(label_14);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");

        verticalLayout_11->addWidget(label_15);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");

        verticalLayout_11->addWidget(label_16);


        horizontalLayout_4->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(8, -1, -1, -1);
        value = new QLabel(groupBox_3);
        value->setObjectName("value");
        value->setText(QString::fromUtf8("0x0000"));
        value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        value->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_12->addWidget(value);

        hexcode = new QLabel(groupBox_3);
        hexcode->setObjectName("hexcode");
        hexcode->setText(QString::fromUtf8("#000000"));
        hexcode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hexcode->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_12->addWidget(hexcode);

        index = new QLabel(groupBox_3);
        index->setObjectName("index");
        index->setText(QString::fromUtf8("0x000 (000)"));
        index->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        index->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_12->addWidget(index);


        horizontalLayout_4->addLayout(verticalLayout_12);


        verticalLayout->addWidget(groupBox_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        exportBG = new QPushButton(QGBA__PaletteView);
        exportBG->setObjectName("exportBG");

        horizontalLayout_3->addWidget(exportBG);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        exportOBJ = new QPushButton(QGBA__PaletteView);
        exportOBJ->setObjectName("exportOBJ");

        horizontalLayout_3->addWidget(exportOBJ);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(QGBA__PaletteView);

        QMetaObject::connectSlotsByName(QGBA__PaletteView);
    } // setupUi

    void retranslateUi(QWidget *QGBA__PaletteView)
    {
        QGBA__PaletteView->setWindowTitle(QCoreApplication::translate("QGBA::PaletteView", "Palette", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QGBA::PaletteView", "Background", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QGBA::PaletteView", "Objects", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QGBA::PaletteView", "Selection", nullptr));
        label_4->setText(QCoreApplication::translate("QGBA::PaletteView", "Red", nullptr));
        label_5->setText(QCoreApplication::translate("QGBA::PaletteView", "Green", nullptr));
        label_6->setText(QCoreApplication::translate("QGBA::PaletteView", "Blue", nullptr));
        label_14->setText(QCoreApplication::translate("QGBA::PaletteView", "16-bit value", nullptr));
        label_15->setText(QCoreApplication::translate("QGBA::PaletteView", "Hex code", nullptr));
        label_16->setText(QCoreApplication::translate("QGBA::PaletteView", "Palette index", nullptr));
        exportBG->setText(QCoreApplication::translate("QGBA::PaletteView", "Export BG", nullptr));
        exportOBJ->setText(QCoreApplication::translate("QGBA::PaletteView", "Export OBJ", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class PaletteView: public Ui_PaletteView {};
} // namespace Ui
} // namespace QGBA

#endif // UI_PALETTEVIEW_H
