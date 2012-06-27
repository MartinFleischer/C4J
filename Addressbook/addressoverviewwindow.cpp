#include "addressoverviewwindow.h"
#include "ui_addressoverviewwindow.h"

AddressOverviewWindow::AddressOverviewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddressOverviewWindow)
{
    ui->setupUi(this);

    model = new TableModel(this);
    connect(ui->addAdressPushButton,SIGNAL(clicked()),this,SLOT(addEntry()));

    ui->AddressesTableView->setModel(model);
}

AddressOverviewWindow::~AddressOverviewWindow()
{
    delete ui;
}

void AddressOverviewWindow::addEntry()
{
    AddDialog aDialog;

    if (aDialog.exec()) {
        QString firstName = aDialog.getFirstName();
        QString lastName = aDialog.getLastName();
        QString address = aDialog.getAddress();
        QString city = aDialog.getCity();
        QString zipCode = aDialog.getZipCode();

        addEntry(firstName,lastName,address,city,zipCode);
    }
}

void AddressOverviewWindow::addEntry(QString firstName,QString lastName,QString address,QString city,QString zipCode)
{
    QList< AddressItem > list = model->getList();
    AddressItem addressItem= AddressItem(firstName,lastName,address,city,zipCode);

    if (!list.contains(addressItem)) {
        model->insertRows(0, 1, QModelIndex());

        QModelIndex index = model->index(0, 0, QModelIndex());
        model->setData(index, firstName, Qt::EditRole);
        index = model->index(0, 1, QModelIndex());
        model->setData(index, lastName, Qt::EditRole);
        index = model->index(0, 2, QModelIndex());
        model->setData(index, address, Qt::EditRole);
        index = model->index(0, 3, QModelIndex());
        model->setData(index, city, Qt::EditRole);
        index = model->index(0, 4, QModelIndex());
        model->setData(index, zipCode, Qt::EditRole);
    } else {
        QMessageBox::information(this, tr("Duplicate Name"),
                                 tr("The adress already exists."));
    }
}

