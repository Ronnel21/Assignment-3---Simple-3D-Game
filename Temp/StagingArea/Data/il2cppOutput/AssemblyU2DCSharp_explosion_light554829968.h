#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t494725636;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// explosion_light
struct  explosion_light_t554829968  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light explosion_light::explosionLight
	Light_t494725636 * ___explosionLight_2;
	// System.Single explosion_light::dieTime
	float ___dieTime_3;
	// System.Single explosion_light::lifeTime
	float ___lifeTime_4;

public:
	inline static int32_t get_offset_of_explosionLight_2() { return static_cast<int32_t>(offsetof(explosion_light_t554829968, ___explosionLight_2)); }
	inline Light_t494725636 * get_explosionLight_2() const { return ___explosionLight_2; }
	inline Light_t494725636 ** get_address_of_explosionLight_2() { return &___explosionLight_2; }
	inline void set_explosionLight_2(Light_t494725636 * value)
	{
		___explosionLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosionLight_2, value);
	}

	inline static int32_t get_offset_of_dieTime_3() { return static_cast<int32_t>(offsetof(explosion_light_t554829968, ___dieTime_3)); }
	inline float get_dieTime_3() const { return ___dieTime_3; }
	inline float* get_address_of_dieTime_3() { return &___dieTime_3; }
	inline void set_dieTime_3(float value)
	{
		___dieTime_3 = value;
	}

	inline static int32_t get_offset_of_lifeTime_4() { return static_cast<int32_t>(offsetof(explosion_light_t554829968, ___lifeTime_4)); }
	inline float get_lifeTime_4() const { return ___lifeTime_4; }
	inline float* get_address_of_lifeTime_4() { return &___lifeTime_4; }
	inline void set_lifeTime_4(float value)
	{
		___lifeTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
