// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_tau_h_ACLiC_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_tau.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxTau(void *p = nullptr);
   static void *newArray_dbxTau(Long_t size, void *p);
   static void delete_dbxTau(void *p);
   static void deleteArray_dbxTau(void *p);
   static void destruct_dbxTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxTau*)
   {
      ::dbxTau *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxTau >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxTau", ::dbxTau::Class_Version(), "dbx_tau.h", 6,
                  typeid(::dbxTau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxTau::Dictionary, isa_proxy, 4,
                  sizeof(::dbxTau) );
      instance.SetNew(&new_dbxTau);
      instance.SetNewArray(&newArray_dbxTau);
      instance.SetDelete(&delete_dbxTau);
      instance.SetDeleteArray(&deleteArray_dbxTau);
      instance.SetDestructor(&destruct_dbxTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxTau*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxTau*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxTau*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxTau::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxTau::Class_Name()
{
   return "dbxTau";
}

//______________________________________________________________________________
const char *dbxTau::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTau*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxTau::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTau*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxTau::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTau*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxTau::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTau*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxTau::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxTau.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxTau::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxTau::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxTau(void *p) {
      return  p ? new(p) ::dbxTau : new ::dbxTau;
   }
   static void *newArray_dbxTau(Long_t nElements, void *p) {
      return p ? new(p) ::dbxTau[nElements] : new ::dbxTau[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxTau(void *p) {
      delete (static_cast<::dbxTau*>(p));
   }
   static void deleteArray_dbxTau(void *p) {
      delete [] (static_cast<::dbxTau*>(p));
   }
   static void destruct_dbxTau(void *p) {
      typedef ::dbxTau current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxTau

namespace {
  void TriggerDictionaryInitialization_dbx_tau_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_tau.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/seloneko/miniconda3/envs/root-env/include",
"/home/seloneko/miniconda3/envs/root-env/etc/",
"/home/seloneko/miniconda3/envs/root-env/etc//cling",
"/home/seloneko/miniconda3/envs/root-env/etc//cling/plugins/include",
"/home/seloneko/miniconda3/envs/root-env/include/",
"/home/seloneko/miniconda3/envs/root-env/include",
"/home/seloneko/miniconda3/envs/root-env/include/",
"/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "dbx_tau_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_tau.h")))  dbxTau;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_tau_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_tau.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxTau", payloadCode, "@",
"dbxTau::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_tau_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_tau_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_tau_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_tau_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_tau_h_ACLiC_dict_Impl();
}
