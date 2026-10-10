/********************************************************************************
** Form generated from reading UI file 'TileView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILEVIEW_H
#define UI_TILEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "AssetTile.h"
#include "TilePainter.h"

namespace QGBA {

class Ui_TileView
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QSpinBox *paletteId;
    QLabel *label_3;
    QCheckBox *palette256;
    QFrame *line;
    QSpinBox *magnification;
    QLabel *label_2;
    QSpinBox *tilesPerRow;
    QLabel *label;
    QCheckBox *tileFit;
    QGBA::AssetTile *tile;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *tilesBg;
    QRadioButton *tilesObj;
    QRadioButton *tilesBoth;
    QGridLayout *gridLayout_2;
    QPushButton *copyOne;
    QPushButton *exportOne;
    QPushButton *copyAll;
    QPushButton *exportAll;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGBA::TilePainter *tiles;
    QButtonGroup *tilesSelector;

    void setupUi(QWidget *QGBA__TileView)
    {
        if (QGBA__TileView->objectName().isEmpty())
            QGBA__TileView->setObjectName("QGBA__TileView");
        QGBA__TileView->resize(680, 450);
        gridLayout = new QGridLayout(QGBA__TileView);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(QGBA__TileView);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        paletteId = new QSpinBox(groupBox_2);
        paletteId->setObjectName("paletteId");
        paletteId->setMaximum(15);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, paletteId);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, label_3);

        palette256 = new QCheckBox(groupBox_2);
        palette256->setObjectName("palette256");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::SpanningRole, palette256);

        line = new QFrame(groupBox_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::SpanningRole, line);

        magnification = new QSpinBox(groupBox_2);
        magnification->setObjectName("magnification");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(magnification->sizePolicy().hasHeightForWidth());
        magnification->setSizePolicy(sizePolicy);
        magnification->setSuffix(QString::fromUtf8("\303\227"));
        magnification->setMinimum(1);
        magnification->setMaximum(8);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, magnification);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, label_2);

        tilesPerRow = new QSpinBox(groupBox_2);
        tilesPerRow->setObjectName("tilesPerRow");
        tilesPerRow->setEnabled(false);
        tilesPerRow->setMinimum(1);
        tilesPerRow->setMaximum(64);
        tilesPerRow->setValue(32);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, tilesPerRow);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, label);

        tileFit = new QCheckBox(groupBox_2);
        tileFit->setObjectName("tileFit");
        tileFit->setChecked(true);

        formLayout_2->setWidget(5, QFormLayout::ItemRole::SpanningRole, tileFit);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        tile = new QGBA::AssetTile(QGBA__TileView);
        tile->setObjectName("tile");

        gridLayout->addWidget(tile, 0, 1, 2, 1);

        groupBox = new QGroupBox(QGBA__TileView);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tilesBg = new QRadioButton(groupBox);
        tilesSelector = new QButtonGroup(QGBA__TileView);
        tilesSelector->setObjectName("tilesSelector");
        tilesSelector->addButton(tilesBg);
        tilesBg->setObjectName("tilesBg");

        verticalLayout_2->addWidget(tilesBg);

        tilesObj = new QRadioButton(groupBox);
        tilesSelector->addButton(tilesObj);
        tilesObj->setObjectName("tilesObj");

        verticalLayout_2->addWidget(tilesObj);

        tilesBoth = new QRadioButton(groupBox);
        tilesSelector->addButton(tilesBoth);
        tilesBoth->setObjectName("tilesBoth");
        tilesBoth->setChecked(true);

        verticalLayout_2->addWidget(tilesBoth);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        copyOne = new QPushButton(QGBA__TileView);
        copyOne->setObjectName("copyOne");

        gridLayout_2->addWidget(copyOne, 0, 0, 1, 1);

        exportOne = new QPushButton(QGBA__TileView);
        exportOne->setObjectName("exportOne");

        gridLayout_2->addWidget(exportOne, 1, 0, 1, 1);

        copyAll = new QPushButton(QGBA__TileView);
        copyAll->setObjectName("copyAll");

        gridLayout_2->addWidget(copyAll, 0, 1, 1, 1);

        exportAll = new QPushButton(QGBA__TileView);
        exportAll->setObjectName("exportAll");

        gridLayout_2->addWidget(exportAll, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 2);

        scrollArea = new QScrollArea(QGBA__TileView);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 441, 768));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tiles = new QGBA::TilePainter(scrollAreaWidgetContents);
        tiles->setObjectName("tiles");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tiles->sizePolicy().hasHeightForWidth());
        tiles->setSizePolicy(sizePolicy3);
        tiles->setMinimumSize(QSize(256, 768));

        verticalLayout->addWidget(tiles);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 2, 4, 1);

        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(2, 1);
        QWidget::setTabOrder(paletteId, palette256);
        QWidget::setTabOrder(palette256, magnification);
        QWidget::setTabOrder(magnification, tilesPerRow);
        QWidget::setTabOrder(tilesPerRow, tileFit);
        QWidget::setTabOrder(tileFit, tilesBg);
        QWidget::setTabOrder(tilesBg, tilesObj);
        QWidget::setTabOrder(tilesObj, tilesBoth);
        QWidget::setTabOrder(tilesBoth, copyOne);
        QWidget::setTabOrder(copyOne, copyAll);
        QWidget::setTabOrder(copyAll, exportOne);
        QWidget::setTabOrder(exportOne, exportAll);
        QWidget::setTabOrder(exportAll, scrollArea);

        retranslateUi(QGBA__TileView);
        QObject::connect(tileFit, &QCheckBox::toggled, tilesPerRow, &QSpinBox::setDisabled);
        QObject::connect(magnification, SIGNAL(valueChanged(int)), tiles, SLOT(setTileMagnification(int)));
        QObject::connect(palette256, &QCheckBox::toggled, paletteId, &QSpinBox::setDisabled);

        QMetaObject::connectSlotsByName(QGBA__TileView);
    } // setupUi

    void retranslateUi(QWidget *QGBA__TileView)
    {
        QGBA__TileView->setWindowTitle(QCoreApplication::translate("QGBA::TileView", "Tiles", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("QGBA::TileView", "Palette", nullptr));
        palette256->setText(QCoreApplication::translate("QGBA::TileView", "256 colors", nullptr));
        label_2->setText(QCoreApplication::translate("QGBA::TileView", "Magnification", nullptr));
        label->setText(QCoreApplication::translate("QGBA::TileView", "Tiles per row", nullptr));
        tileFit->setText(QCoreApplication::translate("QGBA::TileView", "Fit to window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QGBA::TileView", "Displayed tiles", nullptr));
        tilesBg->setText(QCoreApplication::translate("QGBA::TileView", "Only BG tiles", nullptr));
        tilesObj->setText(QCoreApplication::translate("QGBA::TileView", "Only OBJ tiles", nullptr));
        tilesBoth->setText(QCoreApplication::translate("QGBA::TileView", "Both", nullptr));
        copyOne->setText(QCoreApplication::translate("QGBA::TileView", "Copy Selected", nullptr));
        exportOne->setText(QCoreApplication::translate("QGBA::TileView", "Export Selected", nullptr));
        copyAll->setText(QCoreApplication::translate("QGBA::TileView", "Copy All", nullptr));
        exportAll->setText(QCoreApplication::translate("QGBA::TileView", "Export All", nullptr));
    } // retranslateUi

};

} // namespace QGBA

namespace QGBA {
namespace Ui {
    class TileView: public Ui_TileView {};
} // namespace Ui
} // namespace QGBA

#endif // UI_TILEVIEW_H
