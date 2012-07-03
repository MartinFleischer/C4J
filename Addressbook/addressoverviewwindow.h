#ifndef ADDRESSOVERVIEWWINDOW_H
#define ADDRESSOVERVIEWWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "tablemodel.h"
#include "adddialog.h"
#include "addressitem.h"
#include <QSortFilterProxyModel>
#include <ui_adddialog.h>
#include <QIODevice>



namespace Ui {
class AddressOverviewWindow;
}

class AddressOverviewWindow : public QMainWindow
{
    Q_OBJECT
    
    public:
        AddressOverviewWindow(QWidget *parent = 0);
        ~AddressOverviewWindow();

    public slots:
        void addEntry();
        void addEntry(QString firstName,QString lastName,QString address,QString city,QString zipCode);
        void editEntry();
        void removeEntry();
        void filterColumnSelected();
        void filterAdresses();       
        void openFile();
        void saveFile();

    private:
        void writeToFile(QString fileName);
        void readFromFile(QString fileName);
        Ui::AddressOverviewWindow *ui;
        TableModel* model;
        QSortFilterProxyModel* proxyModel;
        int selectedFilterColumn;
};

#endif // ADDRESSOVERVIEWWINDOW_H
