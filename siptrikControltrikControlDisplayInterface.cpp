/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 */

#include "sipAPItrikControl.h"

#line 13 "DisplayInterface.sip"
		#include <displayInterface.h>
#line 12 "./siptrikControltrikControlDisplayInterface.cpp"

#line 31 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "./siptrikControltrikControlDisplayInterface.cpp"
#line 16 "DisplayWidgetInterface.sip"
		#include <displayWidgetInterface.h>
#line 19 "./siptrikControltrikControlDisplayInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 22 "./siptrikControltrikControlDisplayInterface.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./siptrikControltrikControlDisplayInterface.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 28 "./siptrikControltrikControlDisplayInterface.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 31 "./siptrikControltrikControlDisplayInterface.cpp"
#line 269 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 34 "./siptrikControltrikControlDisplayInterface.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 37 "./siptrikControltrikControlDisplayInterface.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 40 "./siptrikControltrikControlDisplayInterface.cpp"
#line 30 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "./siptrikControltrikControlDisplayInterface.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "./siptrikControltrikControlDisplayInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 49 "./siptrikControltrikControlDisplayInterface.cpp"
#line 30 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 52 "./siptrikControltrikControlDisplayInterface.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 55 "./siptrikControltrikControlDisplayInterface.cpp"


extern "C" {static PyObject *meth_trikControl_DisplayInterface_graphicsWidget(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_graphicsWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            trikControl::DisplayWidgetInterface*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_graphicsWidget);
                return NULL;
            }

            sipRes = &sipCpp->graphicsWidget();

            return sipConvertFromType(sipRes,sipType_trikControl_DisplayWidgetInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_graphicsWidget, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_showImage(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_showImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_showImage);
                return NULL;
            }

            sipCpp->showImage(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_showImage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_addLabel(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_addLabel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        int a2;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1ii", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, sipType_QString,&a0, &a0State, &a1, &a2))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_addLabel);
                return NULL;
            }

            sipCpp->addLabel(*a0,a1,a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_addLabel, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_removeLabels(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_removeLabels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_removeLabels);
                return NULL;
            }

            sipCpp->removeLabels();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_removeLabels, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_setPainterColor(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_setPainterColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_setPainterColor);
                return NULL;
            }

            sipCpp->setPainterColor(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_setPainterColor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_setPainterWidth(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_setPainterWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_setPainterWidth);
                return NULL;
            }

            sipCpp->setPainterWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_setPainterWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_drawLine(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_drawLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biiii", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0, &a1, &a2, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_drawLine);
                return NULL;
            }

            sipCpp->drawLine(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_drawLine, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_drawPoint(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_drawPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        int a1;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_drawPoint);
                return NULL;
            }

            sipCpp->drawPoint(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_drawPoint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_drawRect(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_drawRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        bool a4 = 0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biiii|b", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0, &a1, &a2, &a3, &a4))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_drawRect);
                return NULL;
            }

            sipCpp->drawRect(a0,a1,a2,a3,a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_drawRect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_drawEllipse(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_drawEllipse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        bool a4 = 0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biiii|b", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0, &a1, &a2, &a3, &a4))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_drawEllipse);
                return NULL;
            }

            sipCpp->drawEllipse(a0,a1,a2,a3,a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_drawEllipse, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_drawArc(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_drawArc(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        int a4;
        int a5;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biiiiii", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, &a0, &a1, &a2, &a3, &a4, &a5))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_drawArc);
                return NULL;
            }

            sipCpp->drawArc(a0,a1,a2,a3,a4,a5);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_drawArc, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_setBackground(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_setBackground(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_setBackground);
                return NULL;
            }

            sipCpp->setBackground(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_setBackground, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_hide(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_hide);
                return NULL;
            }

            sipCpp->hide();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_hide, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_clear(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_clear);
                return NULL;
            }

            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_clear, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_reset(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_reset);
                return NULL;
            }

            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_reset, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_trikControl_DisplayInterface_redraw(PyObject *, PyObject *);}
static PyObject *meth_trikControl_DisplayInterface_redraw(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        trikControl::DisplayInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_trikControl_DisplayInterface, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_DisplayInterface, sipName_redraw);
                return NULL;
            }

            sipCpp->redraw();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DisplayInterface, sipName_redraw, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_trikControl_DisplayInterface(void *, int);}
static void release_trikControl_DisplayInterface(void *sipCppV,int)
{
    trikControl::DisplayInterface *sipCpp = reinterpret_cast<trikControl::DisplayInterface *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_trikControl_DisplayInterface(sipSimpleWrapper *);}
static void dealloc_trikControl_DisplayInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_trikControl_DisplayInterface(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_trikControl_DisplayInterface[] = {{141, 0, 1}};


static PyMethodDef methods_trikControl_DisplayInterface[] = {
    {SIP_MLNAME_CAST(sipName_addLabel), meth_trikControl_DisplayInterface_addLabel, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_trikControl_DisplayInterface_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drawArc), meth_trikControl_DisplayInterface_drawArc, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drawEllipse), meth_trikControl_DisplayInterface_drawEllipse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drawLine), meth_trikControl_DisplayInterface_drawLine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drawPoint), meth_trikControl_DisplayInterface_drawPoint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_drawRect), meth_trikControl_DisplayInterface_drawRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_graphicsWidget), meth_trikControl_DisplayInterface_graphicsWidget, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hide), meth_trikControl_DisplayInterface_hide, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_redraw), meth_trikControl_DisplayInterface_redraw, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeLabels), meth_trikControl_DisplayInterface_removeLabels, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_reset), meth_trikControl_DisplayInterface_reset, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBackground), meth_trikControl_DisplayInterface_setBackground, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPainterColor), meth_trikControl_DisplayInterface_setPainterColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPainterWidth), meth_trikControl_DisplayInterface_setPainterWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_showImage), meth_trikControl_DisplayInterface_showImage, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_trikControl_trikControl_DisplayInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_trikControl__DisplayInterface,
        {0}
    },
    {
        sipNameNr_DisplayInterface,
        {0, 255, 0},
        16, methods_trikControl_DisplayInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_trikControl_DisplayInterface,
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
    dealloc_trikControl_DisplayInterface,
    0,
    0,
    0,
    release_trikControl_DisplayInterface,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &trikControl::DisplayInterface::staticMetaObject,
    0,
    0
};
