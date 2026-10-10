/********************************************************************************
** Form generated from reading UI file 'FrameView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEVIEW_H
#define UI_FRAMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace QGBA {

class Ui_FrameView
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *magnification;
    QLabel *label_2;
    QCheckBox *freeze;
    QHBoxLayout *horizontalLayout;
    QFrame *backdrop;
    QLabel *label;
    QScrollArea *compositedArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *compositedView;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *disableScanline;
    QListWidget *queue;
    QPushButton *exportButton;
    QPushButton *reset;

    void setupUi(QWidget *QGBA__FrameView)
    {
        if (QGBA__FrameView->objectName().isEmpty())
            QGBA__FrameView->setObjectName("QGBA__FrameView");
        QGBA__FrameView->resize(869, 875);
        gridLayout = new QGridLayout(QGBA__FrameView);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        magnification = new QSpinBox(QGBA__FrameView);
        magnification->setObjectName("magnification");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(magnification->sizePolicy().hasHeightForWidth());
        magnification->setSizePolicy(sizePolicy);
        magnification->setSuffix(QString::fromUtf8("\303\227"));
        magnification->setMinimum(1);
        magnification->setMaximum(8);

        horizontalLayout_4->addWidget(magnification);

        label_2 = new QLabel(QGBA__FrameView);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        freeze = new QCheckBox(QGBA__FrameView);
        freeze->setObjectName("freeze");

        gridLayout->addWidget(freeze, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backdrop = new QFrame(QGBA__FrameView);
        backdrop->setObjectName("backdrop");
        sizePolicy.setHeightForWidth(backdrop->sizePolicy().hasHeightForWidth());
        backdrop->setSizePolicy(sizePolicy);
        backdrop->setMinimumSize(QSize(32, 32));
        backdrop->setAutoFillBackground(true);
        backdrop->setFrameShape(QFrame::StyledPanel);
        backdrop->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(backdrop);

        label = new QLabel(QGBA__FrameView);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        compositedArea = new QScrollArea(QGBA__FrameView);
        compositedArea->setObjectName("compositedArea");
        compositedArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 567, 382));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        compositedView = new QLabel(scrollAreaWidgetContents_2);
        compositedView->setObjectName("compositedView");

        verticalLayout_2->addWidget(compositedView);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        compositedArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(compositedArea, 0, 1, 9, 1);

        disableScanline = new QCheckBox(QGBA__FrameView);
        disableScanline->setObjectName("disableScanline");

        gridLayout->addWidget(disableScanline, 2, 0, 1, 1);

        queue = new QListWidget(QGBA__FrameView);
        queue->setObjectName("queue");

        gridLayout->addWidget(queue, 5, 0, 2, 1);

        exportButton = new QPushButton(QGBA__FrameView);
        exportButton->setObjectName("exportButton");
        exportButton->setEnabled(false);

        gridLayout->addWidget(exportButton, 8, 0, 1, 1);

        reset = new QPushButton(QGBA__FrameView);
        reset->setObjectName("reset");

        gridLayout->addWidget(reset, 7, 0, 1, 1);

        gridLayout->setRowStretch(5, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(QGBA__FrameView);

        QMetaObject::connectSlotsByName(QGBA__FrameView);
    } // setupUi

    void retranslateUi(QWidget *QGBA__FrameView)
    {
        QGBA__FrameView->setWindowTitle(QCoreApplication::translate("QGBA::FrameView", "Inspect frame", nullptr));
        label_2->setText(QCoreApplication::translate("QGBA::FrameView", "Magnification", nullptr));
        freeze->setText(QCoreApplication::translate("QGBA::FrameView", "Freeze frame", nullptr));
        label->setText(QCoreApplication::translate("QGBA::FrameView", "Backdrop color", nullptr));
        compositedView->setText(QString());
        disableScanline->setText(QCoreApplication::translate("QGBA::FrameView", "Disable scanline effects", nullptr));
        exportButton->setText(QCoreApplication::translate("QGBA::FrameView", "Export", nullptr));
        reset->setText(QCoreApplication::translate("QGBA::FrameView", "Reset", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class FrameView: public Ui_FrameView {};
} // namespace Ui
} // namespace QGBA

#endif // UI_FRAMEVIEW_H
