

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Mar 11 17:11:35 2014
 */
/* Compiler settings for SoBrowserActionBHO.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SoBrowserActionBHO_i_h__
#define __SoBrowserActionBHO_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICSoBABHO_FWD_DEFINED__
#define __ICSoBABHO_FWD_DEFINED__
typedef interface ICSoBABHO ICSoBABHO;
#endif 	/* __ICSoBABHO_FWD_DEFINED__ */


#ifndef __CSoBABHO_FWD_DEFINED__
#define __CSoBABHO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSoBABHO CSoBABHO;
#else
typedef struct CSoBABHO CSoBABHO;
#endif /* __cplusplus */

#endif 	/* __CSoBABHO_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICSoBABHO_INTERFACE_DEFINED__
#define __ICSoBABHO_INTERFACE_DEFINED__

/* interface ICSoBABHO */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICSoBABHO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72C52942-80E4-4704-A053-635AC0428115")
    ICSoBABHO : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICSoBABHOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICSoBABHO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICSoBABHO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICSoBABHO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICSoBABHO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICSoBABHO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICSoBABHO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICSoBABHO * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ICSoBABHOVtbl;

    interface ICSoBABHO
    {
        CONST_VTBL struct ICSoBABHOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSoBABHO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSoBABHO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSoBABHO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSoBABHO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICSoBABHO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICSoBABHO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICSoBABHO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSoBABHO_INTERFACE_DEFINED__ */



#ifndef __SoBrowserActionBHOLib_LIBRARY_DEFINED__
#define __SoBrowserActionBHOLib_LIBRARY_DEFINED__

/* library SoBrowserActionBHOLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SoBrowserActionBHOLib;

EXTERN_C const CLSID CLSID_CSoBABHO;

#ifdef __cplusplus

class DECLSPEC_UUID("C1A74118-CCA4-4E9D-928D-88385ECD2382")
CSoBABHO;
#endif
#endif /* __SoBrowserActionBHOLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


