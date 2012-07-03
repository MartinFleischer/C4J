#ifndef ADDRESSITEM_H
#define ADDRESSITEM_H

#include <QtCore>

class AddressItem
{
public:
    AddressItem();
    AddressItem(QString& firstName,QString& lastName,QString& adress,QString& city,QString& zipCode);

    QString m_firstName;
    QString m_lastName;
    QString m_address;
    QString m_city;
    QString m_zipCode;

    bool operator==(const AddressItem& rhs);
};

#endif // ADDRESSITEM_H
