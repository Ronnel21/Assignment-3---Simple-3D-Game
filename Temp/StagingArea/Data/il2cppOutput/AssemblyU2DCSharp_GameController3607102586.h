#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIText
struct GUIText_t2411476300;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform[] GameController::barrelSpawnPoints
	TransformU5BU5D_t3764228911* ___barrelSpawnPoints_2;
	// UnityEngine.GameObject[] GameController::barrels
	GameObjectU5BU5D_t3057952154* ___barrels_3;
	// UnityEngine.GUIText GameController::Timer
	GUIText_t2411476300 * ___Timer_4;
	// UnityEngine.GUIText GameController::Score
	GUIText_t2411476300 * ___Score_5;
	// UnityEngine.GUIText GameController::Multiplier
	GUIText_t2411476300 * ___Multiplier_6;
	// System.Int32 GameController::maxBarrelNumber
	int32_t ___maxBarrelNumber_7;
	// System.Int32 GameController::numberOfBarrels
	int32_t ___numberOfBarrels_8;
	// System.Single GameController::barrelSpawnTime
	float ___barrelSpawnTime_9;
	// System.Int32 GameController::currentScore
	int32_t ___currentScore_10;
	// System.Int32 GameController::currentMultiplier
	int32_t ___currentMultiplier_11;
	// System.Single GameController::multiplierEndTime
	float ___multiplierEndTime_12;
	// System.Single GameController::multiplierDuration
	float ___multiplierDuration_13;
	// System.Single GameController::roundTime
	float ___roundTime_14;

public:
	inline static int32_t get_offset_of_barrelSpawnPoints_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___barrelSpawnPoints_2)); }
	inline TransformU5BU5D_t3764228911* get_barrelSpawnPoints_2() const { return ___barrelSpawnPoints_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_barrelSpawnPoints_2() { return &___barrelSpawnPoints_2; }
	inline void set_barrelSpawnPoints_2(TransformU5BU5D_t3764228911* value)
	{
		___barrelSpawnPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___barrelSpawnPoints_2, value);
	}

	inline static int32_t get_offset_of_barrels_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___barrels_3)); }
	inline GameObjectU5BU5D_t3057952154* get_barrels_3() const { return ___barrels_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_barrels_3() { return &___barrels_3; }
	inline void set_barrels_3(GameObjectU5BU5D_t3057952154* value)
	{
		___barrels_3 = value;
		Il2CppCodeGenWriteBarrier(&___barrels_3, value);
	}

	inline static int32_t get_offset_of_Timer_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Timer_4)); }
	inline GUIText_t2411476300 * get_Timer_4() const { return ___Timer_4; }
	inline GUIText_t2411476300 ** get_address_of_Timer_4() { return &___Timer_4; }
	inline void set_Timer_4(GUIText_t2411476300 * value)
	{
		___Timer_4 = value;
		Il2CppCodeGenWriteBarrier(&___Timer_4, value);
	}

	inline static int32_t get_offset_of_Score_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Score_5)); }
	inline GUIText_t2411476300 * get_Score_5() const { return ___Score_5; }
	inline GUIText_t2411476300 ** get_address_of_Score_5() { return &___Score_5; }
	inline void set_Score_5(GUIText_t2411476300 * value)
	{
		___Score_5 = value;
		Il2CppCodeGenWriteBarrier(&___Score_5, value);
	}

	inline static int32_t get_offset_of_Multiplier_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Multiplier_6)); }
	inline GUIText_t2411476300 * get_Multiplier_6() const { return ___Multiplier_6; }
	inline GUIText_t2411476300 ** get_address_of_Multiplier_6() { return &___Multiplier_6; }
	inline void set_Multiplier_6(GUIText_t2411476300 * value)
	{
		___Multiplier_6 = value;
		Il2CppCodeGenWriteBarrier(&___Multiplier_6, value);
	}

	inline static int32_t get_offset_of_maxBarrelNumber_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___maxBarrelNumber_7)); }
	inline int32_t get_maxBarrelNumber_7() const { return ___maxBarrelNumber_7; }
	inline int32_t* get_address_of_maxBarrelNumber_7() { return &___maxBarrelNumber_7; }
	inline void set_maxBarrelNumber_7(int32_t value)
	{
		___maxBarrelNumber_7 = value;
	}

	inline static int32_t get_offset_of_numberOfBarrels_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___numberOfBarrels_8)); }
	inline int32_t get_numberOfBarrels_8() const { return ___numberOfBarrels_8; }
	inline int32_t* get_address_of_numberOfBarrels_8() { return &___numberOfBarrels_8; }
	inline void set_numberOfBarrels_8(int32_t value)
	{
		___numberOfBarrels_8 = value;
	}

	inline static int32_t get_offset_of_barrelSpawnTime_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___barrelSpawnTime_9)); }
	inline float get_barrelSpawnTime_9() const { return ___barrelSpawnTime_9; }
	inline float* get_address_of_barrelSpawnTime_9() { return &___barrelSpawnTime_9; }
	inline void set_barrelSpawnTime_9(float value)
	{
		___barrelSpawnTime_9 = value;
	}

	inline static int32_t get_offset_of_currentScore_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentScore_10)); }
	inline int32_t get_currentScore_10() const { return ___currentScore_10; }
	inline int32_t* get_address_of_currentScore_10() { return &___currentScore_10; }
	inline void set_currentScore_10(int32_t value)
	{
		___currentScore_10 = value;
	}

	inline static int32_t get_offset_of_currentMultiplier_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentMultiplier_11)); }
	inline int32_t get_currentMultiplier_11() const { return ___currentMultiplier_11; }
	inline int32_t* get_address_of_currentMultiplier_11() { return &___currentMultiplier_11; }
	inline void set_currentMultiplier_11(int32_t value)
	{
		___currentMultiplier_11 = value;
	}

	inline static int32_t get_offset_of_multiplierEndTime_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___multiplierEndTime_12)); }
	inline float get_multiplierEndTime_12() const { return ___multiplierEndTime_12; }
	inline float* get_address_of_multiplierEndTime_12() { return &___multiplierEndTime_12; }
	inline void set_multiplierEndTime_12(float value)
	{
		___multiplierEndTime_12 = value;
	}

	inline static int32_t get_offset_of_multiplierDuration_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___multiplierDuration_13)); }
	inline float get_multiplierDuration_13() const { return ___multiplierDuration_13; }
	inline float* get_address_of_multiplierDuration_13() { return &___multiplierDuration_13; }
	inline void set_multiplierDuration_13(float value)
	{
		___multiplierDuration_13 = value;
	}

	inline static int32_t get_offset_of_roundTime_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___roundTime_14)); }
	inline float get_roundTime_14() const { return ___roundTime_14; }
	inline float* get_address_of_roundTime_14() { return &___roundTime_14; }
	inline void set_roundTime_14(float value)
	{
		___roundTime_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
