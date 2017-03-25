/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 */

#include "sipAPItrikControl.h"

#line 10 "MailboxFactory.sip"
		#include <mailboxFactory.h>
#line 12 "./siptrikControltrikNetworkMailboxFactory.cpp"

#line 16 "MailboxInterface.sip"
		#include <mailboxInterface.h>
#line 16 "./siptrikControltrikNetworkMailboxFactory.cpp"


extern "C" {static PyObject *meth_trikNetwork_MailboxFactory_create(PyObject *, PyObject *);}
static PyObject *meth_trikNetwork_MailboxFactory_create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            trikNetwork::MailboxInterface*sipRes;

            sipRes = trikNetwork::MailboxFactory::create(a0);

            return sipConvertFromType(sipRes,sipType_trikNetwork_MailboxInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MailboxFactory, sipName_create, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_trikNetwork_MailboxFactory(void *, int);}
static void release_trikNetwork_MailboxFactory(void *sipCppV,int)
{
    delete reinterpret_cast<trikNetwork::MailboxFactory *>(sipCppV);
}


extern "C" {static void assign_trikNetwork_MailboxFactory(void *, SIP_SSIZE_T, const void *);}
static void assign_trikNetwork_MailboxFactory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<trikNetwork::MailboxFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast<const trikNetwork::MailboxFactory *>(sipSrc);
}


extern "C" {static void *array_trikNetwork_MailboxFactory(SIP_SSIZE_T);}
static void *array_trikNetwork_MailboxFactory(SIP_SSIZE_T sipNrElem)
{
    return new trikNetwork::MailboxFactory[sipNrElem];
}


extern "C" {static void *copy_trikNetwork_MailboxFactory(const void *, SIP_SSIZE_T);}
static void *copy_trikNetwork_MailboxFactory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new trikNetwork::MailboxFactory(reinterpret_cast<const trikNetwork::MailboxFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_trikNetwork_MailboxFactory(sipSimpleWrapper *);}
static void dealloc_trikNetwork_MailboxFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_trikNetwork_MailboxFactory(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_trikNetwork_MailboxFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_trikNetwork_MailboxFactory(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    trikNetwork::MailboxFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new trikNetwork::MailboxFactory();

            return sipCpp;
        }
    }

    {
        const trikNetwork::MailboxFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_trikNetwork_MailboxFactory, &a0))
        {
            sipCpp = new trikNetwork::MailboxFactory(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_trikNetwork_MailboxFactory[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_trikNetwork_MailboxFactory_create, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_trikControl_trikNetwork_MailboxFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_trikNetwork__MailboxFactory,
        {0}
    },
    {
        sipNameNr_MailboxFactory,
        {19, 255, 0},
        1, methods_trikNetwork_MailboxFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_trikNetwork_MailboxFactory,
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
    dealloc_trikNetwork_MailboxFactory,
    assign_trikNetwork_MailboxFactory,
    array_trikNetwork_MailboxFactory,
    copy_trikNetwork_MailboxFactory,
    release_trikNetwork_MailboxFactory,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
