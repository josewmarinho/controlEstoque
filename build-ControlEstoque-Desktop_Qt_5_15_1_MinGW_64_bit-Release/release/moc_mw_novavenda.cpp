/****************************************************************************
** Meta object code from reading C++ file 'mw_novavenda.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ControlEstoque/mw_novavenda.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mw_novavenda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mw_novavenda_t {
    QByteArrayData data[12];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mw_novavenda_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mw_novavenda_t qt_meta_stringdata_mw_novavenda = {
    {
QT_MOC_LITERAL(0, 0, 12), // "mw_novavenda"
QT_MOC_LITERAL(1, 13, 31), // "on_txt_codproduto_returnPressed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 29), // "on_btn_excluirproduto_clicked"
QT_MOC_LITERAL(4, 76, 28), // "on_btn_editarproduto_clicked"
QT_MOC_LITERAL(5, 105, 29), // "on_btn_finalizarvenda_clicked"
QT_MOC_LITERAL(6, 135, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 159, 24), // "on_btn_pesquisar_clicked"
QT_MOC_LITERAL(8, 184, 34), // "on_txt_valorrecebido_returnPr..."
QT_MOC_LITERAL(9, 219, 37), // "on_tw_listaprodutos_cellDoubl..."
QT_MOC_LITERAL(10, 257, 3), // "row"
QT_MOC_LITERAL(11, 261, 6) // "column"

    },
    "mw_novavenda\0on_txt_codproduto_returnPressed\0"
    "\0on_btn_excluirproduto_clicked\0"
    "on_btn_editarproduto_clicked\0"
    "on_btn_finalizarvenda_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_btn_pesquisar_clicked\0"
    "on_txt_valorrecebido_returnPressed\0"
    "on_tw_listaprodutos_cellDoubleClicked\0"
    "row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mw_novavenda[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

       0        // eod
};

void mw_novavenda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mw_novavenda *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_txt_codproduto_returnPressed(); break;
        case 1: _t->on_btn_excluirproduto_clicked(); break;
        case 2: _t->on_btn_editarproduto_clicked(); break;
        case 3: _t->on_btn_finalizarvenda_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_btn_pesquisar_clicked(); break;
        case 6: _t->on_txt_valorrecebido_returnPressed(); break;
        case 7: _t->on_tw_listaprodutos_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mw_novavenda::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mw_novavenda.data,
    qt_meta_data_mw_novavenda,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mw_novavenda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mw_novavenda::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mw_novavenda.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mw_novavenda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
