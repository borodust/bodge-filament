/* Generated by :claw at 2021-09-17T19:00:02.309152Z */

#if defined(__cplusplus)
#include <new>
#endif



#include "matc/MaterialCompiler.h"
#include "matc/Config.h"
#include "ClawMemIo.h"

#if !defined(__CLAW_API)
#  if defined(_WIN32)
#    define __CLAW_API __declspec(dllexport)
#  elif defined(__GNUC__)
#    define __CLAW_API __attribute__((visibility("default")))
#  else
#    define __CLAW_API
#  endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif


namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_alignof_claw_filament_InMemoryInput() {
return alignof(claw::filament::InMemoryInput);
}
}
}

namespace claw {
namespace filament {
__CLAW_API bool __claw__ZN4claw8filament14InMemoryOutput5writeEPKhm(claw::filament::InMemoryOutput* __claw_this_, const uint8_t* data, size_t size) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:49:10
return __claw_this_->write(data, size);
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_alignof_claw_filament_InMemoryConfig() {
return alignof(claw::filament::InMemoryConfig);
}
}
}

namespace claw {
namespace filament {
__CLAW_API void* __claw__ZN4claw8filament12MaterialData4dataEv(claw::filament::MaterialData* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:29:11
return __claw_this_->data();
}
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament14InMemoryOutputD1Ev(claw::filament::InMemoryOutput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:43:13
__claw_this_->~InMemoryOutput();
}
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament12MaterialDataD1Ev(claw::filament::MaterialData* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:21:13
__claw_this_->~MaterialData();
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_sizeof_claw_filament_MaterialData() {
return sizeof(claw::filament::MaterialData);
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_Config_Output() {
return sizeof(matc::Config::Output);
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament14InMemoryConfigC1EPKcS3_m(claw::filament::InMemoryConfig* __claw_this_, const char* name, const char* data, size_t size) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:105:14
new (__claw_this_) claw::filament::InMemoryConfig(name, data, size);
}
}
}

namespace claw {
namespace filament {
__CLAW_API bool __claw__ZN4claw8filament14InMemoryOutput4openEv(claw::filament::InMemoryOutput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:45:10
return __claw_this_->open();
}
}
}

namespace claw {
namespace filament {
__CLAW_API bool __claw__ZN4claw8filament14InMemoryOutput5closeEv(claw::filament::InMemoryOutput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:62:10
return __claw_this_->close();
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_sizeof_claw_filament_InMemoryConfig() {
return sizeof(claw::filament::InMemoryConfig);
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_Config() {
return sizeof(matc::Config);
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament13InMemoryInputC1EPKcS3_m(claw::filament::InMemoryInput* __claw_this_, const char* name, const char* data, size_t size) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:74:14
new (__claw_this_) claw::filament::InMemoryInput(name, data, size);
}
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament13InMemoryInputD1Ev(claw::filament::InMemoryInput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:77:13
__claw_this_->~InMemoryInput();
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_Config_Input() {
return sizeof(matc::Config::Input);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_MaterialLexeme() {
return sizeof(matc::MaterialLexeme);
}
}

namespace claw {
namespace filament {
__CLAW_API matc::Config::Output* __claw__ZNK4claw8filament14InMemoryConfig9getOutputEv(claw::filament::InMemoryConfig* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:116:27
return __claw_this_->getOutput();
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_MaterialCompiler() {
return alignof(matc::MaterialCompiler);
}
}

namespace matc {
__CLAW_API bool __claw__ZN4matc16MaterialCompiler15checkParametersERKNS_6ConfigE(matc::MaterialCompiler* __claw_this_, const matc::Config* config) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/filament/tools/matc/src/matc/MaterialCompiler.h:40:10
return __claw_this_->checkParameters(*config);
}
}

namespace filamat {
__CLAW_API unsigned long long __claw_sizeof_filamat_MaterialBuilder() {
return sizeof(filamat::MaterialBuilder);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_Config_Output() {
return alignof(matc::Config::Output);
}
}

namespace claw {
namespace filament {
__CLAW_API const char* __claw__ZNK4claw8filament13InMemoryInput7getNameEv(claw::filament::InMemoryInput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:94:17
return __claw_this_->getName();
}
}
}

namespace claw {
namespace filament {
__CLAW_API bool __claw__ZN4claw8filament13InMemoryInput5closeEv(claw::filament::InMemoryInput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:90:10
return __claw_this_->close();
}
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament12MaterialDataC1EPvm(claw::filament::MaterialData* __claw_this_, void* data, size_t size) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:14:5
new (__claw_this_) claw::filament::MaterialData(data, size);
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_alignof_claw_filament_MaterialData() {
return alignof(claw::filament::MaterialData);
}
}
}

namespace filamat {
__CLAW_API unsigned long long __claw_sizeof_filamat_MaterialBuilderBase() {
return sizeof(filamat::MaterialBuilderBase);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_MaterialLexeme() {
return alignof(matc::MaterialLexeme);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_Config_Input() {
return alignof(matc::Config::Input);
}
}

namespace claw {
namespace filament {
__CLAW_API ssize_t __claw__ZN4claw8filament13InMemoryInput4openEv(claw::filament::InMemoryInput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:79:13
return __claw_this_->open();
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_Lexeme_matc_MaterialType_() {
return sizeof(matc::Lexeme<matc::MaterialType>);
}
}

namespace claw {
namespace filament {
__CLAW_API claw::filament::MaterialData* __claw__ZN4claw8filament14InMemoryOutput12materialDataEv(claw::filament::InMemoryOutput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:58:19
return __claw_this_->materialData();
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_alignof_claw_filament_InMemoryOutput() {
return alignof(claw::filament::InMemoryOutput);
}
}
}

namespace matc {
__CLAW_API void __claw_cE3AE40NE40matcE40SE40MaterialCompiler_claw_dtor(matc::MaterialCompiler* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/filament/tools/matc/src/matc/MaterialCompiler.h:34:7
__claw_this_->~MaterialCompiler();
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_sizeof_claw_filament_InMemoryInput() {
return sizeof(claw::filament::InMemoryInput);
}
}
}

namespace filamat {
__CLAW_API unsigned long long __claw_alignof_filamat_MaterialBuilderBase() {
return alignof(filamat::MaterialBuilderBase);
}
}

namespace matc {
__CLAW_API bool __claw__ZN4matc16MaterialCompiler3runERKNS_6ConfigE(matc::MaterialCompiler* __claw_this_, const matc::Config* config) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/filament/tools/matc/src/matc/MaterialCompiler.h:38:10
return __claw_this_->run(*config);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_Config() {
return alignof(matc::Config);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_Compiler() {
return sizeof(matc::Compiler);
}
}

namespace claw {
namespace filament {
__CLAW_API size_t __claw__ZN4claw8filament12MaterialData4sizeEv(claw::filament::MaterialData* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:25:12
return __claw_this_->size();
}
}
}

namespace matc {
__CLAW_API void __claw__ZN4matc16MaterialCompilerC1Ev(matc::MaterialCompiler* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/filament/tools/matc/src/matc/MaterialCompiler.h:36:5
new (__claw_this_) matc::MaterialCompiler();
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament14InMemoryConfigD1Ev(claw::filament::InMemoryConfig* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:111:13
__claw_this_->~InMemoryConfig();
}
}
}

namespace claw {
namespace filament {
__CLAW_API unsigned long long __claw_sizeof_claw_filament_InMemoryOutput() {
return sizeof(claw::filament::InMemoryOutput);
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_Compiler() {
return alignof(matc::Compiler);
}
}

namespace claw {
namespace filament {
__CLAW_API void __claw__ZN4claw8filament14InMemoryOutputC1Ev(claw::filament::InMemoryOutput* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:40:14
new (__claw_this_) claw::filament::InMemoryOutput();
}
}
}

namespace filamat {
__CLAW_API unsigned long long __claw_alignof_filamat_MaterialBuilder() {
return alignof(filamat::MaterialBuilder);
}
}

namespace matc {
__CLAW_API unsigned long long __claw_sizeof_matc_MaterialCompiler() {
return sizeof(matc::MaterialCompiler);
}
}

namespace claw {
namespace filament {
__CLAW_API matc::Config::Input* __claw__ZNK4claw8filament14InMemoryConfig8getInputEv(claw::filament::InMemoryConfig* __claw_this_) {
// /home/borodust/devel/repo/aw-projects/aw-filament/src/lib/ClawMemIo.h:120:26
return __claw_this_->getInput();
}
}
}

namespace matc {
__CLAW_API unsigned long long __claw_alignof_matc_Lexeme_matc_MaterialType_() {
return alignof(matc::Lexeme<matc::MaterialType>);
}
}

#if defined(__cplusplus)
}
#endif
