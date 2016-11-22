#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t3607102586;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShoot
struct  PlayerShoot_t2952253884  : public MonoBehaviour_t1158329972
{
public:
	// GameController PlayerShoot::_gameController
	GameController_t3607102586 * ____gameController_2;
	// GameController PlayerShoot::_gameControllerObject
	GameController_t3607102586 * ____gameControllerObject_3;
	// UnityEngine.GameObject PlayerShoot::_spawnPoint
	GameObject_t1756533147 * ____spawnPoint_4;
	// UnityEngine.Transform PlayerShoot::_transform
	Transform_t3275118058 * ____transform_5;
	// UnityEngine.Transform PlayerShoot::FlashPoint
	Transform_t3275118058 * ___FlashPoint_6;
	// UnityEngine.GameObject PlayerShoot::MuzzleFlash
	GameObject_t1756533147 * ___MuzzleFlash_7;
	// UnityEngine.GameObject PlayerShoot::Explosion
	GameObject_t1756533147 * ___Explosion_8;
	// UnityEngine.GameObject PlayerShoot::BulletImpact
	GameObject_t1756533147 * ___BulletImpact_9;
	// UnityEngine.AudioSource PlayerShoot::WeaponShotSound
	AudioSource_t1135106623 * ___WeaponShotSound_10;
	// UnityEngine.Transform PlayerShoot::PlayerCamera
	Transform_t3275118058 * ___PlayerCamera_11;

public:
	inline static int32_t get_offset_of__gameController_2() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____gameController_2)); }
	inline GameController_t3607102586 * get__gameController_2() const { return ____gameController_2; }
	inline GameController_t3607102586 ** get_address_of__gameController_2() { return &____gameController_2; }
	inline void set__gameController_2(GameController_t3607102586 * value)
	{
		____gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_2, value);
	}

	inline static int32_t get_offset_of__gameControllerObject_3() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____gameControllerObject_3)); }
	inline GameController_t3607102586 * get__gameControllerObject_3() const { return ____gameControllerObject_3; }
	inline GameController_t3607102586 ** get_address_of__gameControllerObject_3() { return &____gameControllerObject_3; }
	inline void set__gameControllerObject_3(GameController_t3607102586 * value)
	{
		____gameControllerObject_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_3, value);
	}

	inline static int32_t get_offset_of__spawnPoint_4() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____spawnPoint_4)); }
	inline GameObject_t1756533147 * get__spawnPoint_4() const { return ____spawnPoint_4; }
	inline GameObject_t1756533147 ** get_address_of__spawnPoint_4() { return &____spawnPoint_4; }
	inline void set__spawnPoint_4(GameObject_t1756533147 * value)
	{
		____spawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&____spawnPoint_4, value);
	}

	inline static int32_t get_offset_of__transform_5() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____transform_5)); }
	inline Transform_t3275118058 * get__transform_5() const { return ____transform_5; }
	inline Transform_t3275118058 ** get_address_of__transform_5() { return &____transform_5; }
	inline void set__transform_5(Transform_t3275118058 * value)
	{
		____transform_5 = value;
		Il2CppCodeGenWriteBarrier(&____transform_5, value);
	}

	inline static int32_t get_offset_of_FlashPoint_6() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___FlashPoint_6)); }
	inline Transform_t3275118058 * get_FlashPoint_6() const { return ___FlashPoint_6; }
	inline Transform_t3275118058 ** get_address_of_FlashPoint_6() { return &___FlashPoint_6; }
	inline void set_FlashPoint_6(Transform_t3275118058 * value)
	{
		___FlashPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___FlashPoint_6, value);
	}

	inline static int32_t get_offset_of_MuzzleFlash_7() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___MuzzleFlash_7)); }
	inline GameObject_t1756533147 * get_MuzzleFlash_7() const { return ___MuzzleFlash_7; }
	inline GameObject_t1756533147 ** get_address_of_MuzzleFlash_7() { return &___MuzzleFlash_7; }
	inline void set_MuzzleFlash_7(GameObject_t1756533147 * value)
	{
		___MuzzleFlash_7 = value;
		Il2CppCodeGenWriteBarrier(&___MuzzleFlash_7, value);
	}

	inline static int32_t get_offset_of_Explosion_8() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___Explosion_8)); }
	inline GameObject_t1756533147 * get_Explosion_8() const { return ___Explosion_8; }
	inline GameObject_t1756533147 ** get_address_of_Explosion_8() { return &___Explosion_8; }
	inline void set_Explosion_8(GameObject_t1756533147 * value)
	{
		___Explosion_8 = value;
		Il2CppCodeGenWriteBarrier(&___Explosion_8, value);
	}

	inline static int32_t get_offset_of_BulletImpact_9() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___BulletImpact_9)); }
	inline GameObject_t1756533147 * get_BulletImpact_9() const { return ___BulletImpact_9; }
	inline GameObject_t1756533147 ** get_address_of_BulletImpact_9() { return &___BulletImpact_9; }
	inline void set_BulletImpact_9(GameObject_t1756533147 * value)
	{
		___BulletImpact_9 = value;
		Il2CppCodeGenWriteBarrier(&___BulletImpact_9, value);
	}

	inline static int32_t get_offset_of_WeaponShotSound_10() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___WeaponShotSound_10)); }
	inline AudioSource_t1135106623 * get_WeaponShotSound_10() const { return ___WeaponShotSound_10; }
	inline AudioSource_t1135106623 ** get_address_of_WeaponShotSound_10() { return &___WeaponShotSound_10; }
	inline void set_WeaponShotSound_10(AudioSource_t1135106623 * value)
	{
		___WeaponShotSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___WeaponShotSound_10, value);
	}

	inline static int32_t get_offset_of_PlayerCamera_11() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___PlayerCamera_11)); }
	inline Transform_t3275118058 * get_PlayerCamera_11() const { return ___PlayerCamera_11; }
	inline Transform_t3275118058 ** get_address_of_PlayerCamera_11() { return &___PlayerCamera_11; }
	inline void set_PlayerCamera_11(Transform_t3275118058 * value)
	{
		___PlayerCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerCamera_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
