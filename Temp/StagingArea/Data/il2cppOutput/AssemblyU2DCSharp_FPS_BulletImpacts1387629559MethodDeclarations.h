#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FPS_BulletImpacts
struct FPS_BulletImpacts_t1387629559;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Globals_matID1816551628.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void FPS_BulletImpacts::.ctor()
extern "C"  void FPS_BulletImpacts__ctor_m1761445490 (FPS_BulletImpacts_t1387629559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FPS_BulletImpacts::DoBulletImpact(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,Globals/matID)
extern "C"  void FPS_BulletImpacts_DoBulletImpact_m491139595 (FPS_BulletImpacts_t1387629559 * __this, GameObject_t1756533147 * ___hitObject0, Vector3_t2243707580  ___vecPos1, Vector3_t2243707580  ___vecNormal2, int32_t ___matID3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FPS_BulletImpacts::PlayOneTime(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single)
extern "C"  void FPS_BulletImpacts_PlayOneTime_m3944108653 (FPS_BulletImpacts_t1387629559 * __this, AudioClip_t1932558630 * ___clip0, Vector3_t2243707580  ___position1, float ___volume2, float ___pitch3, float ___flMinDistance4, float ___flMaxDistance5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
