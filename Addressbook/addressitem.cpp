#include "addressitem.h"

AddressItem::AddressItem()
    :m_firstName(QString()),m_lastName(QString()),m_address(QString()),m_city(QString()),m_zipCode(QString())
{
}
AddressItem::AddressItem(QString& firstName,QString& lastName,QString& address,QString& city,QString& zipCode)
    :m_firstName(firstName),m_lastName(lastName),m_address(address),m_city(city),m_zipCode(zipCode)
{
}

bool AddressItem::operator==(const AddressItem& rhs){
    if(m_firstName == rhs.m_firstName && m_lastName == rhs.m_lastName && m_address == rhs.m_address && m_city == rhs.m_city && m_zipCode == rhs.m_zipCode)
        return true;
    return false;
}

