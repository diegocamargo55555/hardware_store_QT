/****************************************************************************
** Meta object code from reading C++ file 'gpu_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loja_hardware/gpu_window.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpu_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSGPU_windowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGPU_windowENDCLASS = QtMocHelpers::stringData(
    "GPU_window",
    "on_pushButton_gpu_clicked",
    "",
    "on_pushButton_gpu2_clicked",
    "on_pushButton_gpu3_clicked",
    "on_pushButton_gpu4_clicked",
    "on_pushButton_gpu5_clicked",
    "on_pushButton_gpu6_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGPU_windowENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[27];
    char stringdata5[27];
    char stringdata6[27];
    char stringdata7[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGPU_windowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGPU_windowENDCLASS_t qt_meta_stringdata_CLASSGPU_windowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "GPU_window"
        QT_MOC_LITERAL(11, 25),  // "on_pushButton_gpu_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 26),  // "on_pushButton_gpu2_clicked"
        QT_MOC_LITERAL(65, 26),  // "on_pushButton_gpu3_clicked"
        QT_MOC_LITERAL(92, 26),  // "on_pushButton_gpu4_clicked"
        QT_MOC_LITERAL(119, 26),  // "on_pushButton_gpu5_clicked"
        QT_MOC_LITERAL(146, 26)   // "on_pushButton_gpu6_clicked"
    },
    "GPU_window",
    "on_pushButton_gpu_clicked",
    "",
    "on_pushButton_gpu2_clicked",
    "on_pushButton_gpu3_clicked",
    "on_pushButton_gpu4_clicked",
    "on_pushButton_gpu5_clicked",
    "on_pushButton_gpu6_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGPU_windowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GPU_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSGPU_windowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGPU_windowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGPU_windowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GPU_window, std::true_type>,
        // method 'on_pushButton_gpu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_gpu2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_gpu3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_gpu4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_gpu5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_gpu6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GPU_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPU_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_gpu_clicked(); break;
        case 1: _t->on_pushButton_gpu2_clicked(); break;
        case 2: _t->on_pushButton_gpu3_clicked(); break;
        case 3: _t->on_pushButton_gpu4_clicked(); break;
        case 4: _t->on_pushButton_gpu5_clicked(); break;
        case 5: _t->on_pushButton_gpu6_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GPU_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPU_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGPU_windowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GPU_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
