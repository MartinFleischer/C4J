#ifndef ADDRESSITEM_H
#define ADDRESSITEM_H

#include <QtCore>
#include <QIODevice>

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
inline QDataStream& operator<<(QDataStream & out, const AddressItem & item ){
    out << item.m_firstName;
    return out;
}

inline QDataStream& operator>>(QDataStream & in, AddressItem & item){
    in >> item.m_firstName;
    return in;
}

#endif // ADDRESSITEM_H
