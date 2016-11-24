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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;

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
	// System.Int32 PlayerShoot::_livesValue
	int32_t ____livesValue_6;
	// System.Int32 PlayerShoot::_scoreValue
	int32_t ____scoreValue_7;
	// UnityEngine.Transform PlayerShoot::FlashPoint
	Transform_t3275118058 * ___FlashPoint_8;
	// UnityEngine.GameObject PlayerShoot::MuzzleFlash
	GameObject_t1756533147 * ___MuzzleFlash_9;
	// UnityEngine.GameObject PlayerShoot::Explosion
	GameObject_t1756533147 * ___Explosion_10;
	// UnityEngine.GameObject PlayerShoot::BulletImpact
	GameObject_t1756533147 * ___BulletImpact_11;
	// UnityEngine.AudioSource PlayerShoot::WeaponShotSound
	AudioSource_t1135106623 * ___WeaponShotSound_12;
	// UnityEngine.Transform PlayerShoot::PlayerCamera
	Transform_t3275118058 * ___PlayerCamera_13;
	// UnityEngine.GameObject PlayerShoot::player
	GameObject_t1756533147 * ___player_14;
	// UnityEngine.UI.Text PlayerShoot::GameOverLabel
	Text_t356221433 * ___GameOverLabel_15;
	// UnityEngine.UI.Text PlayerShoot::FinalScoreLabel
	Text_t356221433 * ___FinalScoreLabel_16;
	// UnityEngine.UI.Button PlayerShoot::RestartButton
	Button_t2872111280 * ___RestartButton_17;
	// UnityEngine.UI.Text PlayerShoot::LivesLabel
	Text_t356221433 * ___LivesLabel_18;
	// UnityEngine.UI.Text PlayerShoot::ScoreLabel
	Text_t356221433 * ___ScoreLabel_19;
	// UnityEngine.AudioSource PlayerShoot::gameOverSound
	AudioSource_t1135106623 * ___gameOverSound_20;
	// UnityEngine.AudioSource PlayerShoot::deathSound
	AudioSource_t1135106623 * ___deathSound_21;

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

	inline static int32_t get_offset_of__livesValue_6() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____livesValue_6)); }
	inline int32_t get__livesValue_6() const { return ____livesValue_6; }
	inline int32_t* get_address_of__livesValue_6() { return &____livesValue_6; }
	inline void set__livesValue_6(int32_t value)
	{
		____livesValue_6 = value;
	}

	inline static int32_t get_offset_of__scoreValue_7() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ____scoreValue_7)); }
	inline int32_t get__scoreValue_7() const { return ____scoreValue_7; }
	inline int32_t* get_address_of__scoreValue_7() { return &____scoreValue_7; }
	inline void set__scoreValue_7(int32_t value)
	{
		____scoreValue_7 = value;
	}

	inline static int32_t get_offset_of_FlashPoint_8() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___FlashPoint_8)); }
	inline Transform_t3275118058 * get_FlashPoint_8() const { return ___FlashPoint_8; }
	inline Transform_t3275118058 ** get_address_of_FlashPoint_8() { return &___FlashPoint_8; }
	inline void set_FlashPoint_8(Transform_t3275118058 * value)
	{
		___FlashPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___FlashPoint_8, value);
	}

	inline static int32_t get_offset_of_MuzzleFlash_9() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___MuzzleFlash_9)); }
	inline GameObject_t1756533147 * get_MuzzleFlash_9() const { return ___MuzzleFlash_9; }
	inline GameObject_t1756533147 ** get_address_of_MuzzleFlash_9() { return &___MuzzleFlash_9; }
	inline void set_MuzzleFlash_9(GameObject_t1756533147 * value)
	{
		___MuzzleFlash_9 = value;
		Il2CppCodeGenWriteBarrier(&___MuzzleFlash_9, value);
	}

	inline static int32_t get_offset_of_Explosion_10() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___Explosion_10)); }
	inline GameObject_t1756533147 * get_Explosion_10() const { return ___Explosion_10; }
	inline GameObject_t1756533147 ** get_address_of_Explosion_10() { return &___Explosion_10; }
	inline void set_Explosion_10(GameObject_t1756533147 * value)
	{
		___Explosion_10 = value;
		Il2CppCodeGenWriteBarrier(&___Explosion_10, value);
	}

	inline static int32_t get_offset_of_BulletImpact_11() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___BulletImpact_11)); }
	inline GameObject_t1756533147 * get_BulletImpact_11() const { return ___BulletImpact_11; }
	inline GameObject_t1756533147 ** get_address_of_BulletImpact_11() { return &___BulletImpact_11; }
	inline void set_BulletImpact_11(GameObject_t1756533147 * value)
	{
		___BulletImpact_11 = value;
		Il2CppCodeGenWriteBarrier(&___BulletImpact_11, value);
	}

	inline static int32_t get_offset_of_WeaponShotSound_12() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___WeaponShotSound_12)); }
	inline AudioSource_t1135106623 * get_WeaponShotSound_12() const { return ___WeaponShotSound_12; }
	inline AudioSource_t1135106623 ** get_address_of_WeaponShotSound_12() { return &___WeaponShotSound_12; }
	inline void set_WeaponShotSound_12(AudioSource_t1135106623 * value)
	{
		___WeaponShotSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___WeaponShotSound_12, value);
	}

	inline static int32_t get_offset_of_PlayerCamera_13() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___PlayerCamera_13)); }
	inline Transform_t3275118058 * get_PlayerCamera_13() const { return ___PlayerCamera_13; }
	inline Transform_t3275118058 ** get_address_of_PlayerCamera_13() { return &___PlayerCamera_13; }
	inline void set_PlayerCamera_13(Transform_t3275118058 * value)
	{
		___PlayerCamera_13 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerCamera_13, value);
	}

	inline static int32_t get_offset_of_player_14() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___player_14)); }
	inline GameObject_t1756533147 * get_player_14() const { return ___player_14; }
	inline GameObject_t1756533147 ** get_address_of_player_14() { return &___player_14; }
	inline void set_player_14(GameObject_t1756533147 * value)
	{
		___player_14 = value;
		Il2CppCodeGenWriteBarrier(&___player_14, value);
	}

	inline static int32_t get_offset_of_GameOverLabel_15() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___GameOverLabel_15)); }
	inline Text_t356221433 * get_GameOverLabel_15() const { return ___GameOverLabel_15; }
	inline Text_t356221433 ** get_address_of_GameOverLabel_15() { return &___GameOverLabel_15; }
	inline void set_GameOverLabel_15(Text_t356221433 * value)
	{
		___GameOverLabel_15 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverLabel_15, value);
	}

	inline static int32_t get_offset_of_FinalScoreLabel_16() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___FinalScoreLabel_16)); }
	inline Text_t356221433 * get_FinalScoreLabel_16() const { return ___FinalScoreLabel_16; }
	inline Text_t356221433 ** get_address_of_FinalScoreLabel_16() { return &___FinalScoreLabel_16; }
	inline void set_FinalScoreLabel_16(Text_t356221433 * value)
	{
		___FinalScoreLabel_16 = value;
		Il2CppCodeGenWriteBarrier(&___FinalScoreLabel_16, value);
	}

	inline static int32_t get_offset_of_RestartButton_17() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___RestartButton_17)); }
	inline Button_t2872111280 * get_RestartButton_17() const { return ___RestartButton_17; }
	inline Button_t2872111280 ** get_address_of_RestartButton_17() { return &___RestartButton_17; }
	inline void set_RestartButton_17(Button_t2872111280 * value)
	{
		___RestartButton_17 = value;
		Il2CppCodeGenWriteBarrier(&___RestartButton_17, value);
	}

	inline static int32_t get_offset_of_LivesLabel_18() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___LivesLabel_18)); }
	inline Text_t356221433 * get_LivesLabel_18() const { return ___LivesLabel_18; }
	inline Text_t356221433 ** get_address_of_LivesLabel_18() { return &___LivesLabel_18; }
	inline void set_LivesLabel_18(Text_t356221433 * value)
	{
		___LivesLabel_18 = value;
		Il2CppCodeGenWriteBarrier(&___LivesLabel_18, value);
	}

	inline static int32_t get_offset_of_ScoreLabel_19() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___ScoreLabel_19)); }
	inline Text_t356221433 * get_ScoreLabel_19() const { return ___ScoreLabel_19; }
	inline Text_t356221433 ** get_address_of_ScoreLabel_19() { return &___ScoreLabel_19; }
	inline void set_ScoreLabel_19(Text_t356221433 * value)
	{
		___ScoreLabel_19 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreLabel_19, value);
	}

	inline static int32_t get_offset_of_gameOverSound_20() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___gameOverSound_20)); }
	inline AudioSource_t1135106623 * get_gameOverSound_20() const { return ___gameOverSound_20; }
	inline AudioSource_t1135106623 ** get_address_of_gameOverSound_20() { return &___gameOverSound_20; }
	inline void set_gameOverSound_20(AudioSource_t1135106623 * value)
	{
		___gameOverSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_20, value);
	}

	inline static int32_t get_offset_of_deathSound_21() { return static_cast<int32_t>(offsetof(PlayerShoot_t2952253884, ___deathSound_21)); }
	inline AudioSource_t1135106623 * get_deathSound_21() const { return ___deathSound_21; }
	inline AudioSource_t1135106623 ** get_address_of_deathSound_21() { return &___deathSound_21; }
	inline void set_deathSound_21(AudioSource_t1135106623 * value)
	{
		___deathSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___deathSound_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
