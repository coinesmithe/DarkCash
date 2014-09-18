/****************************************************************************
** Meta object code from reading C++ file 'httpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/httpsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_httpsocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   23,   11,   11, 0x0a,
      49,   43,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_httpsocket[] = {
    "httpsocket\0\0finished()\0url\0getUrl(QString)\0"
    "reply\0replyFinished(QNetworkReply*)\0"
};

void httpsocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        httpsocket *_t = static_cast<httpsocket *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->getUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData httpsocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject httpsocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_httpsocket,
      qt_meta_data_httpsocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &httpsocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *httpsocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *httpsocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_httpsocket))
        return static_cast<void*>(const_cast< httpsocket*>(this));
    return QObject::qt_metacast(_clname);
}

int httpsocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void httpsocket::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
