#ifndef ADDRESSOVERVIEWWINDOW_H
#define ADDRESSOVERVIEWWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "tablemodel.h"
#include "adddialog.h"
#include "addressitem.h"

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
//        void editEntry();
//        void removeEntry();

    private:
        Ui::AddressOverviewWindow *ui;
        TableModel* model;
};

#endif // ADDRESSOVERVIEWWINDOW_H
