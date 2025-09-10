// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_truth_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_truth.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxTruth(void *p = nullptr);
   static void *newArray_dbxTruth(Long_t size, void *p);
   static void delete_dbxTruth(void *p);
   static void deleteArray_dbxTruth(void *p);
   static void destruct_dbxTruth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxTruth*)
   {
      ::dbxTruth *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxTruth >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxTruth", ::dbxTruth::Class_Version(), "dbx_truth.h", 6,
                  typeid(::dbxTruth), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxTruth::Dictionary, isa_proxy, 4,
                  sizeof(::dbxTruth) );
      instance.SetNew(&new_dbxTruth);
      instance.SetNewArray(&newArray_dbxTruth);
      instance.SetDelete(&delete_dbxTruth);
      instance.SetDeleteArray(&deleteArray_dbxTruth);
      instance.SetDestructor(&destruct_dbxTruth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxTruth*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxTruth*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxTruth*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxTruth::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxTruth::Class_Name()
{
   return "dbxTruth";
}

//______________________________________________________________________________
const char *dbxTruth::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTruth*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxTruth::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTruth*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxTruth::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTruth*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxTruth::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTruth*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxTruth::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxTruth.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxTruth::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxTruth::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxTruth(void *p) {
      return  p ? new(p) ::dbxTruth : new ::dbxTruth;
   }
   static void *newArray_dbxTruth(Long_t nElements, void *p) {
      return p ? new(p) ::dbxTruth[nElements] : new ::dbxTruth[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxTruth(void *p) {
      delete (static_cast<::dbxTruth*>(p));
   }
   static void deleteArray_dbxTruth(void *p) {
      delete [] (static_cast<::dbxTruth*>(p));
   }
   static void destruct_dbxTruth(void *p) {
      typedef ::dbxTruth current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxTruth

namespace {
  void TriggerDictionaryInitialization_dbx_truth_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_truth.h",
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
#line 1 "dbx_truth_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_truth.h")))  dbxTruth;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_truth_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_truth.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxTruth", payloadCode, "@",
"dbxTruth::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_truth_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_truth_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_truth_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_truth_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_truth_h_ACLiC_dict_Impl();
}
