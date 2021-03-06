/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 */

#include "sipAPItrikControl.h"

#line 10 "LineSensorInterface.sip"
		#include <lineSensorInterface.h>
#line 12 "./siptrikControltrikControlLineSensorInterface.cpp"

#line 101 "/usr/share/sip/PyQt4//QtCore/qvector.sip"
#include <qvector.h>
#line 16 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 26 "/usr/share/sip/PyQt4//QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 19 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 368 "/usr/share/sip/PyQt4//QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 22 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 351 "/usr/share/sip/PyQt4//QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 29 "/usr/share/sip/PyQt4//QtCore/qobject.sip"
#include <qobject.h>
#line 28 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 265 "/usr/share/sip/PyQt4//QtCore/qvariant.sip"
#include <qvariant.h>
#line 31 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 28 "/usr/share/sip/PyQt4//QtCore/qlist.sip"
#include <qlist.h>
#line 34 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 32 "/usr/share/sip/PyQt4//QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 37 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 26 "/usr/share/sip/PyQt4//QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 40 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 115 "/usr/share/sip/PyQt4//QtCore/qlist.sip"
#include <qlist.h>
#line 43 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 26 "/usr/share/sip/PyQt4//QtCore/qthread.sip"
#include <qthread.h>
#line 46 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 27 "/usr/share/sip/PyQt4//QtCore/qstring.sip"
#include <qstring.h>
#line 49 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 26 "/usr/share/sip/PyQt4//QtCore/qregexp.sip"
#include <qregexp.h>
#line 52 "./siptrikControltrikControlLineSensorInterface.cpp"
#line 26 "/usr/share/sip/PyQt4//QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 55 "./siptrikControltrikControlLineSensorInterface.cpp"


extern "C" {static PyObject *meth_trikControl_LineSensorInterface_init(PyObject *, PyObject *);}
static PyObject *meth_trikControl_LineSensorInterface_init(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        bool a0;
        trikControl::LineSensorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_trikControl_LineSensorInterface, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_LineSensorInterface, sipName_init);
                return NULL;
            }

            sipCpp->init(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LineSensorInterface, sipName_init, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_LineSensorInterface_detect(PyObject *, PyObject *);}
static PyObject *meth_trikControl_LineSensorInterface_detect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::LineSensorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_LineSensorInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_LineSensorInterface, sipName_detect);
                return NULL;
            }

            sipCpp->detect();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LineSensorInterface, sipName_detect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_LineSensorInterface_read(PyObject *, PyObject *);}
static PyObject *meth_trikControl_LineSensorInterface_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::LineSensorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_LineSensorInterface, &sipCpp))
        {
            QVector<int>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_LineSensorInterface, sipName_read);
                return NULL;
            }

            sipRes = new QVector<int>(sipCpp->read());

            return sipConvertFromNewType(sipRes,sipType_QVector_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LineSensorInterface, sipName_read, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_LineSensorInterface_stop(PyObject *, PyObject *);}
static PyObject *meth_trikControl_LineSensorInterface_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::LineSensorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_LineSensorInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_LineSensorInterface, sipName_stop);
                return NULL;
            }

            sipCpp->stop();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LineSensorInterface, sipName_stop, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_LineSensorInterface_getDetectParameters(PyObject *, PyObject *);}
static PyObject *meth_trikControl_LineSensorInterface_getDetectParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const trikControl::LineSensorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_LineSensorInterface, &sipCpp))
        {
            QVector<int>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_LineSensorInterface, sipName_getDetectParameters);
                return NULL;
            }

            sipRes = new QVector<int>(sipCpp->getDetectParameters());

            return sipConvertFromNewType(sipRes,sipType_QVector_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_LineSensorInterface, sipName_getDetectParameters, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_trikControl_LineSensorInterface(void *, int);}
static void release_trikControl_LineSensorInterface(void *sipCppV,int)
{
    trikControl::LineSensorInterface *sipCpp = reinterpret_cast<trikControl::LineSensorInterface *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_trikControl_LineSensorInterface(sipSimpleWrapper *);}
static void dealloc_trikControl_LineSensorInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_trikControl_LineSensorInterface(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_trikControl_LineSensorInterface[] = {{141, 0, 1}};


static PyMethodDef methods_trikControl_LineSensorInterface[] = {
    {SIP_MLNAME_CAST(sipName_detect), meth_trikControl_LineSensorInterface_detect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getDetectParameters), meth_trikControl_LineSensorInterface_getDetectParameters, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_init), meth_trikControl_LineSensorInterface_init, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_read), meth_trikControl_LineSensorInterface_read, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stop), meth_trikControl_LineSensorInterface_stop, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_trikControl_trikControl_LineSensorInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_trikControl__LineSensorInterface,
        {0}
    },
    {
        sipNameNr_LineSensorInterface,
        {0, 255, 0},
        5, methods_trikControl_LineSensorInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_trikControl_LineSensorInterface,
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
    dealloc_trikControl_LineSensorInterface,
    0,
    0,
    0,
    release_trikControl_LineSensorInterface,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &trikControl::LineSensorInterface::staticMetaObject,
    0,
    0
};
