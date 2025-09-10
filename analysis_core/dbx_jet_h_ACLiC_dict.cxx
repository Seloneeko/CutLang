// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_jet_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_jet.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxJet(void *p = nullptr);
   static void *newArray_dbxJet(Long_t size, void *p);
   static void delete_dbxJet(void *p);
   static void deleteArray_dbxJet(void *p);
   static void destruct_dbxJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxJet*)
   {
      ::dbxJet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxJet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxJet", ::dbxJet::Class_Version(), "dbx_jet.h", 6,
                  typeid(::dbxJet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxJet::Dictionary, isa_proxy, 4,
                  sizeof(::dbxJet) );
      instance.SetNew(&new_dbxJet);
      instance.SetNewArray(&newArray_dbxJet);
      instance.SetDelete(&delete_dbxJet);
      instance.SetDeleteArray(&deleteArray_dbxJet);
      instance.SetDestructor(&destruct_dbxJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxJet*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxJet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxJet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxJet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxJet::Class_Name()
{
   return "dbxJet";
}

//______________________________________________________________________________
const char *dbxJet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxJet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxJet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxJet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxJet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxJet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxJet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxJet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxJet::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxJet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxJet::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxJet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxJet(void *p) {
      return  p ? new(p) ::dbxJet : new ::dbxJet;
   }
   static void *newArray_dbxJet(Long_t nElements, void *p) {
      return p ? new(p) ::dbxJet[nElements] : new ::dbxJet[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxJet(void *p) {
      delete (static_cast<::dbxJet*>(p));
   }
   static void deleteArray_dbxJet(void *p) {
      delete [] (static_cast<::dbxJet*>(p));
   }
   static void destruct_dbxJet(void *p) {
      typedef ::dbxJet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxJet

namespace {
  void TriggerDictionaryInitialization_dbx_jet_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_jet.h",
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
#line 1 "dbx_jet_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_jet.h")))  dbxJet;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_jet_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_jet.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxJet", payloadCode, "@",
"dbxJet::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_jet_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_jet_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_jet_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_jet_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_jet_h_ACLiC_dict_Impl();
}
