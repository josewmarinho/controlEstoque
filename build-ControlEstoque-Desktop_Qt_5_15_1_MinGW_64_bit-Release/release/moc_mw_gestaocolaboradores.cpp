/****************************************************************************
** Meta object code from reading C++ file 'mw_gestaocolaboradores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ControlEstoque/mw_gestaocolaboradores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mw_gestaocolaboradores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mw_gestaoColaboradores_t {
    QByteArrayData data[11];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mw_gestaoColaboradores_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mw_gestaoColaboradores_t qt_meta_stringdata_mw_gestaoColaboradores = {
    {
QT_MOC_LITERAL(0, 0, 22), // "mw_gestaoColaboradores"
QT_MOC_LITERAL(1, 23, 29), // "on_btn_novo_novocolab_clicked"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 31), // "on_btn_gravar_novocolab_clicked"
QT_MOC_LITERAL(4, 86, 33), // "on_btn_cancelar_novocolab_cli..."
QT_MOC_LITERAL(5, 120, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(6, 148, 5), // "index"
QT_MOC_LITERAL(7, 154, 40), // "on_tw_ge_listacolab_itemSelec..."
QT_MOC_LITERAL(8, 195, 25), // "on_btn_ge_filtrar_clicked"
QT_MOC_LITERAL(9, 221, 24), // "on_btn_ge_gravar_clicked"
QT_MOC_LITERAL(10, 246, 25) // "on_btn_ge_excluir_clicked"

    },
    "mw_gestaoColaboradores\0"
    "on_btn_novo_novocolab_clicked\0\0"
    "on_btn_gravar_novocolab_clicked\0"
    "on_btn_cancelar_novocolab_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_tw_ge_listacolab_itemSelectionChanged\0"
    "on_btn_ge_filtrar_clicked\0"
    "on_btn_ge_gravar_clicked\0"
    "on_btn_ge_excluir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mw_gestaoColaboradores[] = {

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
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mw_gestaoColaboradores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mw_gestaoColaboradores *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_novo_novocolab_clicked(); break;
        case 1: _t->on_btn_gravar_novocolab_clicked(); break;
        case 2: _t->on_btn_cancelar_novocolab_clicked(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_tw_ge_listacolab_itemSelectionChanged(); break;
        case 5: _t->on_btn_ge_filtrar_clicked(); break;
        case 6: _t->on_btn_ge_gravar_clicked(); break;
        case 7: _t->on_btn_ge_excluir_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mw_gestaoColaboradores::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_mw_gestaoColaboradores.data,
    qt_meta_data_mw_gestaoColaboradores,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mw_gestaoColaboradores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mw_gestaoColaboradores::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mw_gestaoColaboradores.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mw_gestaoColaboradores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
