#include "tablemodel.h"

TableModel::TableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}

TableModel::TableModel(QList< AddressItem > addresses, QObject *parent)
    : QAbstractTableModel(parent)
{
    m_listOflistOfAddressItems=addresses;
}

int TableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_listOflistOfAddressItems.size();
}

int TableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 5;
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_listOflistOfAddressItems.size() || index.row() < 0)
        return QVariant();

    if (role == Qt::DisplayRole) {
        AddressItem address = m_listOflistOfAddressItems.at(index.row());

        if (index.column() == 0)
            return address.m_firstName;
        else if (index.column() == 1)
            return address.m_lastName;
        else if (index.column() == 2)
            return address.m_address;
        else if (index.column() == 3)
            return address.m_city;
        else if (index.column() == 4)
            return address.m_zipCode;
    }
    return QVariant();
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("First Name");

        case 1:
            return tr("Last Name");
        case 2:
            return tr("Address");

        case 3:
            return tr("City");
        case 4:
            return tr("Zip Code");

        default:
            return QVariant();
        }
    }
    return QVariant();
}

bool TableModel::insertRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row=0; row < rows; row++) {
        AddressItem adressItem= AddressItem();
        m_listOflistOfAddressItems.insert(position, adressItem);
    }

    endInsertRows();
    return true;
}

bool TableModel::removeRows(int position, int rows, const QModelIndex &index)
{
    Q_UNUSED(index);
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for (int row=0; row < rows; ++row) {
        m_listOflistOfAddressItems.removeAt(position);
    }

    endRemoveRows();
    return true;
}

bool TableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (index.isValid() && role == Qt::EditRole) {
        int row = index.row();

        AddressItem ai = m_listOflistOfAddressItems.value(row);

        if (index.column() == 0)
            ai.m_firstName = value.toString();
        else if (index.column() == 1)
            ai.m_lastName = value.toString();
        else if (index.column() == 2)
            ai.m_address = value.toString();
        else if (index.column() == 3)
            ai.m_city = value.toString();
        else if (index.column() == 4)
            ai.m_zipCode = value.toString();
        else
            return false;

        m_listOflistOfAddressItems.replace(row, ai);
        emit(dataChanged(index, index));

        return true;
    }

    return false;
}

Qt::ItemFlags TableModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::ItemIsEnabled;

    return QAbstractTableModel::flags(index) | Qt::ItemIsEditable;
}

QList< AddressItem > TableModel::getList()
{
    return m_listOflistOfAddressItems;
}
