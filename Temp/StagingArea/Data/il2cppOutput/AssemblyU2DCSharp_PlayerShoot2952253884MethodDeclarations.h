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

// PlayerShoot
struct PlayerShoot_t2952253884;
// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void PlayerShoot::.ctor()
extern "C"  void PlayerShoot__ctor_m1789478523 (PlayerShoot_t2952253884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::Start()
extern "C"  void PlayerShoot_Start_m1060369815 (PlayerShoot_t2952253884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::FixedUpdate()
extern "C"  void PlayerShoot_FixedUpdate_m3116381468 (PlayerShoot_t2952253884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::_initialize()
extern "C"  void PlayerShoot__initialize_m4047620328 (PlayerShoot_t2952253884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerShoot_OnCollisionEnter_m3711425301 (PlayerShoot_t2952253884 * __this, Collision_t2876846408 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerShoot::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerShoot_OnTriggerEnter_m354115431 (PlayerShoot_t2952253884 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
