/********************************************************************************
** Form generated from reading UI file 'ADCT_GUI.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADCT_GUI_H
#define UI_ADCT_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ADCT_GUI
{
public:
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *frame;
    QPushButton *pushButton_5;

    void setupUi(QDialog *ADCT_GUI)
    {
        if (ADCT_GUI->objectName().isEmpty())
            ADCT_GUI->setObjectName(QString::fromUtf8("ADCT_GUI"));
        ADCT_GUI->setWindowModality(Qt::ApplicationModal);
        ADCT_GUI->resize(662, 625);
        ADCT_GUI->setMinimumSize(QSize(662, 625));
        ADCT_GUI->setMaximumSize(QSize(662, 625));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(1, 32, 52, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(180, 180, 180, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(3, 103, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        QBrush brush4(QColor(78, 78, 78, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush5(QColor(98, 98, 98, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        QBrush brush6(QColor(75, 75, 75, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QBrush brush7(QColor(73, 73, 73, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QBrush brush8(QColor(44, 44, 44, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush8);
        ADCT_GUI->setPalette(palette);
        ADCT_GUI->setSizeGripEnabled(true);
        ADCT_GUI->setModal(true);
        tableView = new QTableView(ADCT_GUI);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(11, 30, 638, 563));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(638, 563));
        tableView->setMaximumSize(QSize(638, 562));
        QPalette palette1;
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        QBrush brush10(QColor(1, 58, 91, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        tableView->setPalette(palette1);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setFrameShadow(QFrame::Raised);
        tableView->setEditTriggers(QAbstractItemView::SelectedClicked);
        tableView->setDragDropOverwriteMode(false);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setShowGrid(true);
        tableView->setWordWrap(false);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setDefaultSectionSize(90);
        tableView->horizontalHeader()->setMinimumSectionSize(90);
        tableView->horizontalHeader()->setStretchLastSection(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(90);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setMinimumSectionSize(90);
        tableView->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(ADCT_GUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 6, 221, 20));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(ADCT_GUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(88, 3, 111, 26));
        pushButton_2 = new QPushButton(ADCT_GUI);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 3, 121, 26));
        label_2 = new QLabel(ADCT_GUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(408, 600, 241, 21));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        listWidget = new QListWidget(ADCT_GUI);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(11, 30, 638, 563));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        listWidget->setPalette(palette2);
        pushButton_3 = new QPushButton(ADCT_GUI);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 597, 99, 26));
        pushButton_4 = new QPushButton(ADCT_GUI);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(8, 597, 121, 26));
        frame = new QFrame(ADCT_GUI);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 30, 661, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(540, 530, 106, 26));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        listWidget->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        tableView->raise();
        frame->raise();

        retranslateUi(ADCT_GUI);
        QObject::connect(pushButton, SIGNAL(clicked()), ADCT_GUI, SLOT(generadorMesAnterior()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ADCT_GUI, SLOT(generadorMesSiguiente()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), ADCT_GUI, SLOT(regresarADias()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), ADCT_GUI, SLOT(nuevoEvento()));
        QObject::connect(tableView, SIGNAL(clicked(QModelIndex)), ADCT_GUI, SLOT(despliegueEventos(QModelIndex)));
        QObject::connect(pushButton_5, SIGNAL(clicked()), ADCT_GUI, SLOT(backToEventos()));

        QMetaObject::connectSlotsByName(ADCT_GUI);
    } // setupUi

    void retranslateUi(QDialog *ADCT_GUI)
    {
        ADCT_GUI->setWindowTitle(QApplication::translate("ADCT_GUI", "ADCT_GUI", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ADCT_GUI", "Mes anterior", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ADCT_GUI", "Mes siguiente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("ADCT_GUI", "Regresar", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ADCT_GUI", "Nuevo Evento", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ADCT_GUI", "Regresar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ADCT_GUI: public Ui_ADCT_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADCT_GUI_H
