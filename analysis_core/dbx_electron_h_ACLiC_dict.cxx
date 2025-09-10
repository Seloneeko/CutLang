// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_electron_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_electron.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxElectron(void *p = nullptr);
   static void *newArray_dbxElectron(Long_t size, void *p);
   static void delete_dbxElectron(void *p);
   static void deleteArray_dbxElectron(void *p);
   static void destruct_dbxElectron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxElectron*)
   {
      ::dbxElectron *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxElectron >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxElectron", ::dbxElectron::Class_Version(), "dbx_electron.h", 6,
                  typeid(::dbxElectron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxElectron::Dictionary, isa_proxy, 4,
                  sizeof(::dbxElectron) );
      instance.SetNew(&new_dbxElectron);
      instance.SetNewArray(&newArray_dbxElectron);
      instance.SetDelete(&delete_dbxElectron);
      instance.SetDeleteArray(&deleteArray_dbxElectron);
      instance.SetDestructor(&destruct_dbxElectron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxElectron*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxElectron*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxElectron*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxElectron::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxElectron::Class_Name()
{
   return "dbxElectron";
}

//______________________________________________________________________________
const char *dbxElectron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxElectron*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxElectron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxElectron*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxElectron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxElectron*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxElectron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxElectron*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxElectron::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxElectron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxElectron::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxElectron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxElectron(void *p) {
      return  p ? new(p) ::dbxElectron : new ::dbxElectron;
   }
   static void *newArray_dbxElectron(Long_t nElements, void *p) {
      return p ? new(p) ::dbxElectron[nElements] : new ::dbxElectron[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxElectron(void *p) {
      delete (static_cast<::dbxElectron*>(p));
   }
   static void deleteArray_dbxElectron(void *p) {
      delete [] (static_cast<::dbxElectron*>(p));
   }
   static void destruct_dbxElectron(void *p) {
      typedef ::dbxElectron current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxElectron

namespace {
  void TriggerDictionaryInitialization_dbx_electron_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_electron.h",
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
#line 1 "dbx_electron_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_electron.h")))  dbxElectron;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_electron_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_electron.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxElectron", payloadCode, "@",
"dbxElectron::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_electron_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_electron_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_electron_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_electron_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_electron_h_ACLiC_dict_Impl();
}
