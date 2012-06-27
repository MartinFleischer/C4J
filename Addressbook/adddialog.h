#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>

namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddDialog(QWidget *parent = 0);
    ~AddDialog();
    QString getFirstName();
    QString getLastName();
    QString getAddress();
    QString getCity();
    QString getZipCode();
    
private:
    Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
