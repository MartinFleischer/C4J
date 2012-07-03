/****************************************************************************
** Meta object code from reading C++ file 'addressoverviewwindow.h'
**
** Created: Tue Jul 3 18:55:04 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Addressbook/addressoverviewwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressoverviewwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddressOverviewWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      74,   34,   22,   22, 0x0a,
     124,   22,   22,   22, 0x0a,
     136,   22,   22,   22, 0x0a,
     150,   22,   22,   22, 0x0a,
     173,   22,   22,   22, 0x0a,
     190,   22,   22,   22, 0x0a,
     201,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddressOverviewWindow[] = {
    "AddressOverviewWindow\0\0addEntry()\0"
    "firstName,lastName,address,city,zipCode\0"
    "addEntry(QString,QString,QString,QString,QString)\0"
    "editEntry()\0removeEntry()\0"
    "filterColumnSelected()\0filterAdresses()\0"
    "openFile()\0saveFile()\0"
};

void AddressOverviewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddressOverviewWindow *_t = static_cast<AddressOverviewWindow *>(_o);
        switch (_id) {
        case 0: _t->addEntry(); break;
        case 1: _t->addEntry((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 2: _t->editEntry(); break;
        case 3: _t->removeEntry(); break;
        case 4: _t->filterColumnSelected(); break;
        case 5: _t->filterAdresses(); break;
        case 6: _t->openFile(); break;
        case 7: _t->saveFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddressOverviewWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddressOverviewWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddressOverviewWindow,
      qt_meta_data_AddressOverviewWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddressOverviewWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddressOverviewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddressOverviewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddressOverviewWindow))
        return static_cast<void*>(const_cast< AddressOverviewWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddressOverviewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
