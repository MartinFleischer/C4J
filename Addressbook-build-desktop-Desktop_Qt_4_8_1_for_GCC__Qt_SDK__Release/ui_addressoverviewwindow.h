/********************************************************************************
** Form generated from reading UI file 'addressoverviewwindow.ui'
**
** Created: Tue Jul 3 18:35:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSOVERVIEWWINDOW_H
#define UI_ADDRESSOVERVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressOverviewWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *filterLabel;
    QLineEdit *filterLineEdit;
    QComboBox *filterComboBox;
    QLabel *adressesTableViewLabel;
    QTableView *AddressesTableView;
    QWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addAdressPushButton;
    QPushButton *removePushButton;
    QPushButton *editPushButton;
    QPushButton *loadPushButton;
    QPushButton *savePushButton;
    QMenuBar *menuBar;
    QMenu *menuAddressbook;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressOverviewWindow)
    {
        if (AddressOverviewWindow->objectName().isEmpty())
            AddressOverviewWindow->setObjectName(QString::fromUtf8("AddressOverviewWindow"));
        AddressOverviewWindow->resize(856, 559);
        AddressOverviewWindow->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(AddressOverviewWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        filterLabel = new QLabel(centralWidget);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));

        gridLayout->addWidget(filterLabel, 0, 0, 1, 1);

        filterLineEdit = new QLineEdit(centralWidget);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));

        gridLayout->addWidget(filterLineEdit, 0, 1, 1, 1);

        filterComboBox = new QComboBox(centralWidget);
        filterComboBox->setObjectName(QString::fromUtf8("filterComboBox"));

        gridLayout->addWidget(filterComboBox, 0, 2, 1, 1);

        adressesTableViewLabel = new QLabel(centralWidget);
        adressesTableViewLabel->setObjectName(QString::fromUtf8("adressesTableViewLabel"));
        adressesTableViewLabel->setScaledContents(false);
        adressesTableViewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(adressesTableViewLabel, 1, 0, 1, 1);

        AddressesTableView = new QTableView(centralWidget);
        AddressesTableView->setObjectName(QString::fromUtf8("AddressesTableView"));
        AddressesTableView->setAlternatingRowColors(true);
        AddressesTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        AddressesTableView->setSortingEnabled(true);
        AddressesTableView->setCornerButtonEnabled(true);
        AddressesTableView->horizontalHeader()->setStretchLastSection(true);
        AddressesTableView->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(AddressesTableView, 1, 1, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 92, 202));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addAdressPushButton = new QPushButton(layoutWidget);
        addAdressPushButton->setObjectName(QString::fromUtf8("addAdressPushButton"));

        verticalLayout->addWidget(addAdressPushButton);

        removePushButton = new QPushButton(layoutWidget);
        removePushButton->setObjectName(QString::fromUtf8("removePushButton"));

        verticalLayout->addWidget(removePushButton);

        editPushButton = new QPushButton(layoutWidget);
        editPushButton->setObjectName(QString::fromUtf8("editPushButton"));

        verticalLayout->addWidget(editPushButton);

        loadPushButton = new QPushButton(layoutWidget);
        loadPushButton->setObjectName(QString::fromUtf8("loadPushButton"));

        verticalLayout->addWidget(loadPushButton);

        savePushButton = new QPushButton(layoutWidget);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        verticalLayout->addWidget(savePushButton);


        gridLayout->addWidget(widget, 1, 2, 1, 1);

        AddressOverviewWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddressOverviewWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 856, 22));
        menuAddressbook = new QMenu(menuBar);
        menuAddressbook->setObjectName(QString::fromUtf8("menuAddressbook"));
        AddressOverviewWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddressOverviewWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AddressOverviewWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AddressOverviewWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AddressOverviewWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAddressbook->menuAction());

        retranslateUi(AddressOverviewWindow);

        QMetaObject::connectSlotsByName(AddressOverviewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddressOverviewWindow)
    {
        AddressOverviewWindow->setWindowTitle(QApplication::translate("AddressOverviewWindow", "AddressOverviewWindow", 0, QApplication::UnicodeUTF8));
        filterLabel->setText(QApplication::translate("AddressOverviewWindow", "Filter:", 0, QApplication::UnicodeUTF8));
        adressesTableViewLabel->setText(QApplication::translate("AddressOverviewWindow", "Addresses", 0, QApplication::UnicodeUTF8));
        addAdressPushButton->setText(QApplication::translate("AddressOverviewWindow", "Add", 0, QApplication::UnicodeUTF8));
        removePushButton->setText(QApplication::translate("AddressOverviewWindow", "Remove", 0, QApplication::UnicodeUTF8));
        editPushButton->setText(QApplication::translate("AddressOverviewWindow", "Edit", 0, QApplication::UnicodeUTF8));
        loadPushButton->setText(QApplication::translate("AddressOverviewWindow", "Load...", 0, QApplication::UnicodeUTF8));
        savePushButton->setText(QApplication::translate("AddressOverviewWindow", "Save...", 0, QApplication::UnicodeUTF8));
        menuAddressbook->setTitle(QApplication::translate("AddressOverviewWindow", "Addressbook", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddressOverviewWindow: public Ui_AddressOverviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSOVERVIEWWINDOW_H
