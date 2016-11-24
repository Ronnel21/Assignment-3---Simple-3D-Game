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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t2375210762;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_Waypo318924311.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C"  void WaypointCircuit__ctor_m2047496194 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C"  float WaypointCircuit_get_Length_m1426297875 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C"  void WaypointCircuit_set_Length_m3662637174 (WaypointCircuit_t2375210762 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C"  TransformU5BU5D_t3764228911* WaypointCircuit_get_Waypoints_m1083332871 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C"  void WaypointCircuit_Awake_m2250443785 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C"  RoutePoint_t318924311  WaypointCircuit_GetRoutePoint_m1379232192 (WaypointCircuit_t2375210762 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C"  Vector3_t2243707580  WaypointCircuit_GetRoutePosition_m1847105981 (WaypointCircuit_t2375210762 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  WaypointCircuit_CatmullRom_m3336761625 (WaypointCircuit_t2375210762 * __this, Vector3_t2243707580  ___p00, Vector3_t2243707580  ___p11, Vector3_t2243707580  ___p22, Vector3_t2243707580  ___p33, float ___i4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C"  void WaypointCircuit_CachePositionsAndDistances_m3412157573 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C"  void WaypointCircuit_OnDrawGizmos_m1914750460 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C"  void WaypointCircuit_OnDrawGizmosSelected_m367979945 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C"  void WaypointCircuit_DrawGizmos_m1294898092 (WaypointCircuit_t2375210762 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
