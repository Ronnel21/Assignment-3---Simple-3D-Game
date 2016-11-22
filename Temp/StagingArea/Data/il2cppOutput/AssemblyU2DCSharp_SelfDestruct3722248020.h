#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelfDestruct
struct  SelfDestruct_t3722248020  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SelfDestruct::lifeTime
	float ___lifeTime_2;
	// System.Single SelfDestruct::dieTime
	float ___dieTime_3;

public:
	inline static int32_t get_offset_of_lifeTime_2() { return static_cast<int32_t>(offsetof(SelfDestruct_t3722248020, ___lifeTime_2)); }
	inline float get_lifeTime_2() const { return ___lifeTime_2; }
	inline float* get_address_of_lifeTime_2() { return &___lifeTime_2; }
	inline void set_lifeTime_2(float value)
	{
		___lifeTime_2 = value;
	}

	inline static int32_t get_offset_of_dieTime_3() { return static_cast<int32_t>(offsetof(SelfDestruct_t3722248020, ___dieTime_3)); }
	inline float get_dieTime_3() const { return ___dieTime_3; }
	inline float* get_address_of_dieTime_3() { return &___dieTime_3; }
	inline void set_dieTime_3(float value)
	{
		___dieTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
