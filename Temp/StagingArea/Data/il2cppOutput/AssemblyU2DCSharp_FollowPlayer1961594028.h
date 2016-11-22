#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_t1961594028  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FollowPlayer::Target
	Transform_t3275118058 * ___Target_2;
	// System.Single FollowPlayer::Speed
	float ___Speed_3;
	// UnityEngine.Transform FollowPlayer::_transform
	Transform_t3275118058 * ____transform_4;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(FollowPlayer_t1961594028, ___Target_2)); }
	inline Transform_t3275118058 * get_Target_2() const { return ___Target_2; }
	inline Transform_t3275118058 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(Transform_t3275118058 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(FollowPlayer_t1961594028, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(FollowPlayer_t1961594028, ____transform_4)); }
	inline Transform_t3275118058 * get__transform_4() const { return ____transform_4; }
	inline Transform_t3275118058 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t3275118058 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier(&____transform_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
