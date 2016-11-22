#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t2171372499;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2146768720  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.NavMeshAgent EnemyController::Agent
	NavMeshAgent_t2171372499 * ___Agent_2;
	// UnityEngine.Transform EnemyController::Player
	Transform_t3275118058 * ___Player_3;

public:
	inline static int32_t get_offset_of_Agent_2() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___Agent_2)); }
	inline NavMeshAgent_t2171372499 * get_Agent_2() const { return ___Agent_2; }
	inline NavMeshAgent_t2171372499 ** get_address_of_Agent_2() { return &___Agent_2; }
	inline void set_Agent_2(NavMeshAgent_t2171372499 * value)
	{
		___Agent_2 = value;
		Il2CppCodeGenWriteBarrier(&___Agent_2, value);
	}

	inline static int32_t get_offset_of_Player_3() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___Player_3)); }
	inline Transform_t3275118058 * get_Player_3() const { return ___Player_3; }
	inline Transform_t3275118058 ** get_address_of_Player_3() { return &___Player_3; }
	inline void set_Player_3(Transform_t3275118058 * value)
	{
		___Player_3 = value;
		Il2CppCodeGenWriteBarrier(&___Player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
