#include "addressoverviewwindow.h"
#include "ui_addressoverviewwindow.h"


AddressOverviewWindow::AddressOverviewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddressOverviewWindow)
{
    ui->setupUi(this);

    ui->filterComboBox->addItem(QString("First Name"));
    ui->filterComboBox->addItem(QString("Last Name"));
    ui->filterComboBox->addItem(QString("Address"));
    ui->filterComboBox->addItem(QString("City"));
    ui->filterComboBox->addItem(QString("Zip Code"));

    ui->loadPushButton->setToolTip(tr("Load contacts from a file"));
    ui->savePushButton->setToolTip(tr("Save contacts to a file"));

    model = new TableModel(this);
    proxyModel = new QSortFilterProxyModel(model);
    proxyModel->setSourceModel(model);
    proxyModel->setFilterRegExp(QRegExp(QString(), Qt::CaseInsensitive, QRegExp::FixedString));
    proxyModel->setFilterKeyColumn(1);
    ui->AddressesTableView->setModel(proxyModel);

    connect(ui->addAdressPushButton,SIGNAL(clicked()),this,SLOT(addEntry()));
    connect(ui->filterComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(filterColumnSelected()));
    connect(ui->filterLineEdit,SIGNAL(textChanged(QString)),this,SLOT(filterAdresses()));
    connect(ui->removePushButton,SIGNAL(clicked()),this,SLOT(removeEntry()));
    connect(ui->editPushButton,SIGNAL(clicked()),this,SLOT(editEntry()));
    connect(ui->savePushButton,SIGNAL(clicked()),this,SLOT(saveFile()));
    connect(ui->loadPushButton,SIGNAL(clicked()),this,SLOT(openFile()));



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
    AddressItem* addressItem= new AddressItem(firstName,lastName,address,city,zipCode);

    if (!list.contains(*addressItem)) {
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

        QTableView *temp = static_cast<QTableView*>(ui->AddressesTableView);
        proxyModel->sort(temp->horizontalHeader()->sortIndicatorSection());

    } else {
        QMessageBox::information(this, tr("Duplicate Name"),
                                 tr("The adress already exists."));
    }
}

void AddressOverviewWindow::editEntry()
{
    QTableView *temp = static_cast<QTableView*>(ui->AddressesTableView);
    QSortFilterProxyModel *proxy = static_cast<QSortFilterProxyModel*>(temp->model());
    QItemSelectionModel *selectionModel = temp->selectionModel();
    QModelIndexList indexes = selectionModel->selectedRows();
    QModelIndex index, i;
    QString firstName;
    QString lastName;
    QString address;
    QString city;
    QString zipCode;
    int row = -1;

    foreach (index, indexes) {
        row = proxy->mapToSource(index).row();
        i = model->index(row, 0, QModelIndex());
        QVariant varFirstName = model->data(i, Qt::DisplayRole);
        firstName = varFirstName.toString();

        i = model->index(row, 1, QModelIndex());
        QVariant varLastName = model->data(i, Qt::DisplayRole);
        lastName = varLastName.toString();

        i = model->index(row, 2, QModelIndex());
        QVariant varAddr = model->data(i, Qt::DisplayRole);
        address = varAddr.toString();

        i = model->index(row, 3, QModelIndex());
        QVariant varCity = model->data(i, Qt::DisplayRole);
        city = varCity.toString();

        i = model->index(row, 4, QModelIndex());
        QVariant varZip = model->data(i, Qt::DisplayRole);
        zipCode = varZip.toString();
    }
    if(row != -1){
        AddDialog aDialog;
        aDialog.ui->addAddressLable->setText(QString("Edit Address"));
        aDialog.setWindowTitle(QString("Edit Address"));

        aDialog.ui->firstNameLineEdit->setText(firstName);
        aDialog.ui->lastNameLineEdit->setText(lastName);
        aDialog.ui->addressLineEdit->setText(address);
        aDialog.ui->cityLineEdit->setText(city);
        aDialog.ui->zipCodelineEdit->setText(zipCode);

        if (aDialog.exec()) {
            QList< AddressItem > list = model->getList();

            firstName = aDialog.getFirstName();
            lastName = aDialog.getLastName();
            address = aDialog.getAddress();
            city = aDialog.getCity();
            zipCode = aDialog.getZipCode();
            AddressItem* addressItem= new AddressItem(firstName,lastName,address,city,zipCode);

            if (!list.contains(*addressItem)) {

                QModelIndex index = model->index(0, 0, QModelIndex());
                model->setData(index, aDialog.getFirstName(), Qt::EditRole);
                index = model->index(0, 1, QModelIndex());
                model->setData(index, aDialog.getLastName(), Qt::EditRole);
                index = model->index(0, 2, QModelIndex());
                model->setData(index, aDialog.getAddress(), Qt::EditRole);
                index = model->index(0, 3, QModelIndex());
                model->setData(index, aDialog.getCity(), Qt::EditRole);
                index = model->index(0, 4, QModelIndex());
                model->setData(index, aDialog.getZipCode(), Qt::EditRole);

                QTableView *temp = static_cast<QTableView*>(ui->AddressesTableView);
                proxyModel->sort(temp->horizontalHeader()->sortIndicatorSection());

            }else {
                QMessageBox::information(this, tr("Duplicate Name"),
                                         tr("The adress already exists."));
            }
        }
    }
}

void AddressOverviewWindow::removeEntry()
{
    QTableView *temp = static_cast<QTableView*>(ui->AddressesTableView);
    QSortFilterProxyModel *proxy = static_cast<QSortFilterProxyModel*>(temp->model());
    QItemSelectionModel *selectionModel = temp->selectionModel();
    QModelIndexList indexes = selectionModel->selectedRows();
    QModelIndex index;

    foreach (index, indexes) {
        int row = proxy->mapToSource(index).row();
        model->removeRows(row, 1, QModelIndex());
    }
}

void AddressOverviewWindow::filterColumnSelected(){
    proxyModel->setFilterKeyColumn(ui->filterComboBox->currentIndex());
}

void AddressOverviewWindow::filterAdresses(){
    proxyModel->setFilterRegExp(QRegExp(QString(ui->filterLineEdit->text()), Qt::CaseInsensitive, QRegExp::FixedString));
}

void AddressOverviewWindow::writeToFile(QString fileName) {

    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QList< AddressItem > contacts = model->getList();
    QDataStream out(&file);
    out << contacts;
}

void AddressOverviewWindow::readFromFile(QString fileName) {

    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
                                 file.errorString());
        return;
    }

    QList< AddressItem > contacts = model->getList();
    QDataStream in(&file);
    in >> contacts;

    if (contacts.isEmpty()) {
        QMessageBox::information(this, tr("No contacts in file"),
                                 tr("The file you are attempting to open contains no contacts."));
    } else {
        for (int i=0; i<contacts.size(); ++i) {
            AddressItem aI = contacts.at(i);
            addEntry(aI.m_firstName,aI.m_lastName,aI.m_address,aI.m_city,aI.m_zipCode);
        }
    }
}

void AddressOverviewWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty()) {
        this->readFromFile(fileName);
    }
}

void AddressOverviewWindow::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this);
    if (!fileName.isEmpty()) {
        this->writeToFile(fileName);
    }
}


