// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_photon_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_photon.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxPhoton(void *p = nullptr);
   static void *newArray_dbxPhoton(Long_t size, void *p);
   static void delete_dbxPhoton(void *p);
   static void deleteArray_dbxPhoton(void *p);
   static void destruct_dbxPhoton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxPhoton*)
   {
      ::dbxPhoton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxPhoton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxPhoton", ::dbxPhoton::Class_Version(), "dbx_photon.h", 6,
                  typeid(::dbxPhoton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxPhoton::Dictionary, isa_proxy, 4,
                  sizeof(::dbxPhoton) );
      instance.SetNew(&new_dbxPhoton);
      instance.SetNewArray(&newArray_dbxPhoton);
      instance.SetDelete(&delete_dbxPhoton);
      instance.SetDeleteArray(&deleteArray_dbxPhoton);
      instance.SetDestructor(&destruct_dbxPhoton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxPhoton*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxPhoton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxPhoton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxPhoton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxPhoton::Class_Name()
{
   return "dbxPhoton";
}

//______________________________________________________________________________
const char *dbxPhoton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxPhoton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxPhoton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxPhoton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxPhoton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxPhoton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxPhoton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxPhoton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxPhoton::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxPhoton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxPhoton::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxPhoton::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxPhoton(void *p) {
      return  p ? new(p) ::dbxPhoton : new ::dbxPhoton;
   }
   static void *newArray_dbxPhoton(Long_t nElements, void *p) {
      return p ? new(p) ::dbxPhoton[nElements] : new ::dbxPhoton[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxPhoton(void *p) {
      delete (static_cast<::dbxPhoton*>(p));
   }
   static void deleteArray_dbxPhoton(void *p) {
      delete [] (static_cast<::dbxPhoton*>(p));
   }
   static void destruct_dbxPhoton(void *p) {
      typedef ::dbxPhoton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxPhoton

namespace {
  void TriggerDictionaryInitialization_dbx_photon_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_photon.h",
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
#line 1 "dbx_photon_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_photon.h")))  dbxPhoton;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_photon_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_photon.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxPhoton", payloadCode, "@",
"dbxPhoton::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_photon_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_photon_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_photon_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_photon_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_photon_h_ACLiC_dict_Impl();
}
