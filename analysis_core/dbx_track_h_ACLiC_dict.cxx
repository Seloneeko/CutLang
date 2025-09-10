// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dImntdIcdIUsersdILENOVOdIPycharmProjectsdICutlangdICutLangdIanalysis_coredIdbx_track_h_ACLiC_dict
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
#include "/mnt/c/Users/LENOVO/PycharmProjects/Cutlang/CutLang/analysis_core/./dbx_track.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_dbxTrack(void *p = nullptr);
   static void *newArray_dbxTrack(Long_t size, void *p);
   static void delete_dbxTrack(void *p);
   static void deleteArray_dbxTrack(void *p);
   static void destruct_dbxTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::dbxTrack*)
   {
      ::dbxTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::dbxTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("dbxTrack", ::dbxTrack::Class_Version(), "dbx_track.h", 6,
                  typeid(::dbxTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::dbxTrack::Dictionary, isa_proxy, 4,
                  sizeof(::dbxTrack) );
      instance.SetNew(&new_dbxTrack);
      instance.SetNewArray(&newArray_dbxTrack);
      instance.SetDelete(&delete_dbxTrack);
      instance.SetDeleteArray(&deleteArray_dbxTrack);
      instance.SetDestructor(&destruct_dbxTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::dbxTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::dbxTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::dbxTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr dbxTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *dbxTrack::Class_Name()
{
   return "dbxTrack";
}

//______________________________________________________________________________
const char *dbxTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int dbxTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::dbxTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *dbxTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *dbxTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::dbxTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void dbxTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class dbxTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(dbxTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(dbxTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_dbxTrack(void *p) {
      return  p ? new(p) ::dbxTrack : new ::dbxTrack;
   }
   static void *newArray_dbxTrack(Long_t nElements, void *p) {
      return p ? new(p) ::dbxTrack[nElements] : new ::dbxTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_dbxTrack(void *p) {
      delete (static_cast<::dbxTrack*>(p));
   }
   static void deleteArray_dbxTrack(void *p) {
      delete [] (static_cast<::dbxTrack*>(p));
   }
   static void destruct_dbxTrack(void *p) {
      typedef ::dbxTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::dbxTrack

namespace {
  void TriggerDictionaryInitialization_dbx_track_h_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./dbx_track.h",
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
#line 1 "dbx_track_h_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$./dbx_track.h")))  dbxTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dbx_track_h_ACLiC_dict dictionary payload"

#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./dbx_track.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"dbxTrack", payloadCode, "@",
"dbxTrack::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dbx_track_h_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dbx_track_h_ACLiC_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dbx_track_h_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dbx_track_h_ACLiC_dict() {
  TriggerDictionaryInitialization_dbx_track_h_ACLiC_dict_Impl();
}
