/****************************************************************************
** Meta object code from reading C++ file 'mw_gestaoestoque.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ControlEstoque/mw_gestaoestoque.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mw_gestaoestoque.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mw_gestaoEstoque_t {
    QByteArrayData data[13];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mw_gestaoEstoque_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mw_gestaoEstoque_t qt_meta_stringdata_mw_gestaoEstoque = {
    {
QT_MOC_LITERAL(0, 0, 16), // "mw_gestaoEstoque"
QT_MOC_LITERAL(1, 17, 26), // "on_btn_novoproduto_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 32), // "on_btn_gravarnovoproduto_clicked"
QT_MOC_LITERAL(4, 78, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(5, 106, 5), // "index"
QT_MOC_LITERAL(6, 112, 38), // "on_tw_ge_produtos_itemSelecti..."
QT_MOC_LITERAL(7, 151, 24), // "on_btn_ge_gravar_clicked"
QT_MOC_LITERAL(8, 176, 25), // "on_btn_ge_excluir_clicked"
QT_MOC_LITERAL(9, 202, 25), // "on_btn_ge_filtrar_clicked"
QT_MOC_LITERAL(10, 228, 29), // "on_txt_porcevenda_textChanged"
QT_MOC_LITERAL(11, 258, 4), // "arg1"
QT_MOC_LITERAL(12, 263, 32) // "on_txt_ge_porcevenda_textChanged"

    },
    "mw_gestaoEstoque\0on_btn_novoproduto_clicked\0"
    "\0on_btn_gravarnovoproduto_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_tw_ge_produtos_itemSelectionChanged\0"
    "on_btn_ge_gravar_clicked\0"
    "on_btn_ge_excluir_clicked\0"
    "on_btn_ge_filtrar_clicked\0"
    "on_txt_porcevenda_textChanged\0arg1\0"
    "on_txt_ge_porcevenda_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mw_gestaoEstoque[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void mw_gestaoEstoque::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mw_gestaoEstoque *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_novoproduto_clicked(); break;
        case 1: _t->on_btn_gravarnovoproduto_clicked(); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_tw_ge_produtos_itemSelectionChanged(); break;
        case 4: _t->on_btn_ge_gravar_clicked(); break;
        case 5: _t->on_btn_ge_excluir_clicked(); break;
        case 6: _t->on_btn_ge_filtrar_clicked(); break;
        case 7: _t->on_txt_porcevenda_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_txt_ge_porcevenda_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mw_gestaoEstoque::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mw_gestaoEstoque.data,
    qt_meta_data_mw_gestaoEstoque,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mw_gestaoEstoque::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mw_gestaoEstoque::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mw_gestaoEstoque.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mw_gestaoEstoque::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
