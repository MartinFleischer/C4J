/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created: Tue Jul 3 18:35:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lastNameLineEdit;
    QLabel *addressLabel;
    QLineEdit *firstNameLineEdit;
    QLineEdit *zipCodelineEdit;
    QLabel *firstNameLabel;
    QLabel *zipCodeLabel;
    QLineEdit *addressLineEdit;
    QLabel *lastNameLabel;
    QLabel *cityLabel;
    QLineEdit *cityLineEdit;
    QDialogButtonBox *addAddressButtonBox;
    QLabel *addAddressLable;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QString::fromUtf8("AddDialog"));
        AddDialog->resize(400, 260);
        AddDialog->setMinimumSize(QSize(400, 260));
        AddDialog->setMaximumSize(QSize(400, 260));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        AddDialog->setFont(font);
        AddDialog->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(AddDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lastNameLineEdit = new QLineEdit(AddDialog);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        gridLayout->addWidget(lastNameLineEdit, 2, 1, 1, 1);

        addressLabel = new QLabel(AddDialog);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        gridLayout->addWidget(addressLabel, 3, 0, 1, 1);

        firstNameLineEdit = new QLineEdit(AddDialog);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        gridLayout->addWidget(firstNameLineEdit, 1, 1, 1, 1);

        zipCodelineEdit = new QLineEdit(AddDialog);
        zipCodelineEdit->setObjectName(QString::fromUtf8("zipCodelineEdit"));

        gridLayout->addWidget(zipCodelineEdit, 5, 1, 1, 1);

        firstNameLabel = new QLabel(AddDialog);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));

        gridLayout->addWidget(firstNameLabel, 1, 0, 1, 1);

        zipCodeLabel = new QLabel(AddDialog);
        zipCodeLabel->setObjectName(QString::fromUtf8("zipCodeLabel"));

        gridLayout->addWidget(zipCodeLabel, 5, 0, 1, 1);

        addressLineEdit = new QLineEdit(AddDialog);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        gridLayout->addWidget(addressLineEdit, 3, 1, 1, 1);

        lastNameLabel = new QLabel(AddDialog);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));

        gridLayout->addWidget(lastNameLabel, 2, 0, 1, 1);

        cityLabel = new QLabel(AddDialog);
        cityLabel->setObjectName(QString::fromUtf8("cityLabel"));

        gridLayout->addWidget(cityLabel, 4, 0, 1, 1);

        cityLineEdit = new QLineEdit(AddDialog);
        cityLineEdit->setObjectName(QString::fromUtf8("cityLineEdit"));

        gridLayout->addWidget(cityLineEdit, 4, 1, 1, 1);

        addAddressButtonBox = new QDialogButtonBox(AddDialog);
        addAddressButtonBox->setObjectName(QString::fromUtf8("addAddressButtonBox"));
        addAddressButtonBox->setOrientation(Qt::Horizontal);
        addAddressButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(addAddressButtonBox, 6, 0, 1, 2);

        addAddressLable = new QLabel(AddDialog);
        addAddressLable->setObjectName(QString::fromUtf8("addAddressLable"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        addAddressLable->setFont(font1);

        gridLayout->addWidget(addAddressLable, 0, 0, 1, 2);


        retranslateUi(AddDialog);
        QObject::connect(addAddressButtonBox, SIGNAL(accepted()), AddDialog, SLOT(accept()));
        QObject::connect(addAddressButtonBox, SIGNAL(rejected()), AddDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QApplication::translate("AddDialog", "Add Address", 0, QApplication::UnicodeUTF8));
        addressLabel->setText(QApplication::translate("AddDialog", "Address:", 0, QApplication::UnicodeUTF8));
        firstNameLabel->setText(QApplication::translate("AddDialog", "First Name:", 0, QApplication::UnicodeUTF8));
        zipCodeLabel->setText(QApplication::translate("AddDialog", "ZipCode", 0, QApplication::UnicodeUTF8));
        lastNameLabel->setText(QApplication::translate("AddDialog", "Last Name:", 0, QApplication::UnicodeUTF8));
        cityLabel->setText(QApplication::translate("AddDialog", "City:", 0, QApplication::UnicodeUTF8));
        addAddressLable->setText(QApplication::translate("AddDialog", "Add Address", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
