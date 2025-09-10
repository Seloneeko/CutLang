// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_muon_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_muon.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxMuon(void *p = nullptr);
   static void *newArray_dbxMuon(Long_t size, void *p);
   static void delete_dbxMuon(void *p);
   static void deleteArray_dbxMuon(void *p);
   static void destruct_dbxMuon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxMuon*)
   {
      ::dbxMuon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxMuon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxMuon", ::dbxMuon::Class_Version(), "dbx_muon.h", 6,
                  typeid(::dbxMuon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxMuon::Dictionary, isa_proxy, 4,
                  sizeof(::dbxMuon) );
      instance.SetNew(&new_dbxMuon);
      instance.SetNewArray(&newArray_dbxMuon);
      instance.SetDelete(&delete_dbxMuon);
      instance.SetDeleteArray(&deleteArray_dbxMuon);
      instance.SetDestructor(&destruct_dbxMuon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxMuon*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxMuon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxMuon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxMuon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxMuon::Class_Name()
{
   return "dbxMuon";
}

//______________________________________________________________________________
const char *dbxMuon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxMuon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxMuon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxMuon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxMuon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxMuon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxMuon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxMuon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxMuon::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxMuon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxMuon::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxMuon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxMuon(void *p) {
      return  p ? new(p) ::dbxMuon : new ::dbxMuon;
   }
   static void *newArray_dbxMuon(Long_t nElements, void *p) {
      return p ? new(p) ::dbxMuon[nElements] : new ::dbxMuon[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxMuon(void *p) {
      delete (static_cast<::dbxMuon*>(p));
   }
   static void deleteArray_dbxMuon(void *p) {
      delete [] (static_cast<::dbxMuon*>(p));
   }
   static void destruct_dbxMuon(void *p) {
      typedef ::dbxMuon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxMuon

namespace {
  void TriggerDictionaryInitialization_dbx_muon_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_muon.h",
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
#line 1 "dbx_muon_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_muon.h")))  dbxMuon;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_muon_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_muon.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxMuon", payloadCode, "@",
"dbxMuon::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_muon_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_muon_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_muon_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_muon_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_muon_h_ACLiC_dict_Impl();
}
