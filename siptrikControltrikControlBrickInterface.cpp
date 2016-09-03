/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 */

#include "sipAPItrikControl.h"

#line 12 "BrickInterface.sip"
		#include <brickInterface.h>
#line 12 "./siptrikControltrikControlBrickInterface.cpp"

#line 13 "DisplayInterface.sip"
		#include <displayInterface.h>
#line 16 "./siptrikControltrikControlBrickInterface.cpp"
#line 31 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 19 "./siptrikControltrikControlBrickInterface.cpp"
#line 16 "DisplayWidgetInterface.sip"
		#include <displayWidgetInterface.h>
#line 22 "./siptrikControltrikControlBrickInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./siptrikControltrikControlBrickInterface.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 28 "./siptrikControltrikControlBrickInterface.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 31 "./siptrikControltrikControlBrickInterface.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 34 "./siptrikControltrikControlBrickInterface.cpp"
#line 269 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 37 "./siptrikControltrikControlBrickInterface.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 40 "./siptrikControltrikControlBrickInterface.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "./siptrikControltrikControlBrickInterface.cpp"
#line 30 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "./siptrikControltrikControlBrickInterface.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 49 "./siptrikControltrikControlBrickInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 52 "./siptrikControltrikControlBrickInterface.cpp"
#line 30 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 55 "./siptrikControltrikControlBrickInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 58 "./siptrikControltrikControlBrickInterface.cpp"


extern "C" {static PyObject *meth_trikControl_BrickInterface_graphicsWidget(PyObject *, PyObject *);}
static PyObject *meth_trikControl_BrickInterface_graphicsWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::BrickInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_BrickInterface, &sipCpp))
        {
            trikControl::DisplayWidgetInterface*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BrickInterface, sipName_graphicsWidget);
                return NULL;
            }

            sipRes = sipCpp->graphicsWidget();

            return sipConvertFromType(sipRes,sipType_trikControl_DisplayWidgetInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BrickInterface, sipName_graphicsWidget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_BrickInterface_playSound(PyObject *, PyObject *);}
static PyObject *meth_trikControl_BrickInterface_playSound(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        trikControl::BrickInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_trikControl_BrickInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BrickInterface, sipName_playSound);
                return NULL;
            }

            sipCpp->playSound(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BrickInterface, sipName_playSound, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_BrickInterface_display(PyObject *, PyObject *);}
static PyObject *meth_trikControl_BrickInterface_display(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::BrickInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_BrickInterface, &sipCpp))
        {
            trikControl::DisplayInterface*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_BrickInterface, sipName_display);
                return NULL;
            }

            sipRes = sipCpp->display();

            return sipConvertFromType(sipRes,sipType_trikControl_DisplayInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BrickInterface, sipName_display, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_trikControl_BrickInterface(void *, int);}
static void release_trikControl_BrickInterface(void *sipCppV,int)
{
    trikControl::BrickInterface *sipCpp = reinterpret_cast<trikControl::BrickInterface *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_trikControl_BrickInterface(sipSimpleWrapper *);}
static void dealloc_trikControl_BrickInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_trikControl_BrickInterface(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_trikControl_BrickInterface[] = {{141, 0, 1}};


static PyMethodDef methods_trikControl_BrickInterface[] = {
    {SIP_MLNAME_CAST(sipName_display), meth_trikControl_BrickInterface_display, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_graphicsWidget), meth_trikControl_BrickInterface_graphicsWidget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_playSound), meth_trikControl_BrickInterface_playSound, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_trikControl_trikControl_BrickInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_trikControl__BrickInterface,
        {0}
    },
    {
        sipNameNr_BrickInterface,
        {0, 255, 0},
        3, methods_trikControl_BrickInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_trikControl_BrickInterface,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_trikControl_BrickInterface,
    0,
    0,
    0,
    release_trikControl_BrickInterface,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &trikControl::BrickInterface::staticMetaObject,
    0,
    0
};