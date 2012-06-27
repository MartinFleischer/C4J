#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
}

AddDialog::~AddDialog()
{
    delete ui;
}
QString AddDialog::getFirstName(){
    return ui->firstNameLineEdit->text();
}

QString AddDialog::getLastName(){
    return ui->lastNameLineEdit->text();
}

QString AddDialog::getAddress(){
    return ui->addressLineEdit->text();
}

QString AddDialog::getCity(){
    return ui->cityLineEdit->text();
}

QString AddDialog::getZipCode(){
    return ui->zipCodelineEdit->text();
}
