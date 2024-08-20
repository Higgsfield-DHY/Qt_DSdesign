/****************************************************************************
** Meta object code from reading C++ file 'tlwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tlwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tlwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTLWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTLWindowENDCLASS = QtMocHelpers::stringData(
    "TLWindow",
    "TL_back",
    "",
    "treeUpdate",
    "on_actBack_triggered",
    "on_actTableInsert_triggered",
    "on_actTreeInsert_triggered",
    "on_actTableDelete_triggered",
    "on_actTreeDelete_triggered",
    "on_actToTree_triggered",
    "updateTableView",
    "updateTreeView",
    "treeToolActivate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTLWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TLWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTLWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTLWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTLWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TLWindow, std::true_type>,
        // method 'TL_back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'treeUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actBack_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actTableInsert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actTreeInsert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actTableDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actTreeDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actToTree_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTableView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTreeView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'treeToolActivate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TLWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TL_back(); break;
        case 1: _t->treeUpdate(); break;
        case 2: _t->on_actBack_triggered(); break;
        case 3: _t->on_actTableInsert_triggered(); break;
        case 4: _t->on_actTreeInsert_triggered(); break;
        case 5: _t->on_actTableDelete_triggered(); break;
        case 6: _t->on_actTreeDelete_triggered(); break;
        case 7: _t->on_actToTree_triggered(); break;
        case 8: _t->updateTableView(); break;
        case 9: _t->updateTreeView(); break;
        case 10: _t->treeToolActivate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TLWindow::*)();
            if (_t _q_method = &TLWindow::TL_back; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TLWindow::*)();
            if (_t _q_method = &TLWindow::treeUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *TLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTLWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TLWindow::TL_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TLWindow::treeUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
