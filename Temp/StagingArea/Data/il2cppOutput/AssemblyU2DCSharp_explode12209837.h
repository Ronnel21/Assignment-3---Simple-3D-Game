#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// GameController
struct GameController_t3607102586;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// explode
struct  explode_t12209837  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject explode::explosionEffect
	GameObject_t1756533147 * ___explosionEffect_2;
	// UnityEngine.Transform explode::explosionEffectLocation
	Transform_t3275118058 * ___explosionEffectLocation_3;
	// System.Single explode::health
	float ___health_4;
	// System.Boolean explode::bExploded
	bool ___bExploded_5;
	// GameController explode::gameController
	GameController_t3607102586 * ___gameController_6;

public:
	inline static int32_t get_offset_of_explosionEffect_2() { return static_cast<int32_t>(offsetof(explode_t12209837, ___explosionEffect_2)); }
	inline GameObject_t1756533147 * get_explosionEffect_2() const { return ___explosionEffect_2; }
	inline GameObject_t1756533147 ** get_address_of_explosionEffect_2() { return &___explosionEffect_2; }
	inline void set_explosionEffect_2(GameObject_t1756533147 * value)
	{
		___explosionEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosionEffect_2, value);
	}

	inline static int32_t get_offset_of_explosionEffectLocation_3() { return static_cast<int32_t>(offsetof(explode_t12209837, ___explosionEffectLocation_3)); }
	inline Transform_t3275118058 * get_explosionEffectLocation_3() const { return ___explosionEffectLocation_3; }
	inline Transform_t3275118058 ** get_address_of_explosionEffectLocation_3() { return &___explosionEffectLocation_3; }
	inline void set_explosionEffectLocation_3(Transform_t3275118058 * value)
	{
		___explosionEffectLocation_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionEffectLocation_3, value);
	}

	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(explode_t12209837, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_bExploded_5() { return static_cast<int32_t>(offsetof(explode_t12209837, ___bExploded_5)); }
	inline bool get_bExploded_5() const { return ___bExploded_5; }
	inline bool* get_address_of_bExploded_5() { return &___bExploded_5; }
	inline void set_bExploded_5(bool value)
	{
		___bExploded_5 = value;
	}

	inline static int32_t get_offset_of_gameController_6() { return static_cast<int32_t>(offsetof(explode_t12209837, ___gameController_6)); }
	inline GameController_t3607102586 * get_gameController_6() const { return ___gameController_6; }
	inline GameController_t3607102586 ** get_address_of_gameController_6() { return &___gameController_6; }
	inline void set_gameController_6(GameController_t3607102586 * value)
	{
		___gameController_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
