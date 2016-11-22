#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// FPS_BulletImpacts
struct FPS_BulletImpacts_t1387629559;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controller
struct  controller_t1901481736  : public MonoBehaviour_t1158329972
{
public:
	// System.Single controller::rotationSpeed
	float ___rotationSpeed_2;
	// UnityEngine.Camera controller::mainCamera
	Camera_t189460977 * ___mainCamera_3;
	// UnityEngine.Transform controller::cameraAnchor
	Transform_t3275118058 * ___cameraAnchor_4;
	// UnityEngine.Transform controller::muzzleflashLocation
	Transform_t3275118058 * ___muzzleflashLocation_5;
	// System.Int32 controller::fireRate
	int32_t ___fireRate_6;
	// UnityEngine.Light controller::muzzleLight
	Light_t494725636 * ___muzzleLight_7;
	// UnityEngine.GUIText controller::muzzleFlashTypeLabel
	GUIText_t2411476300 * ___muzzleFlashTypeLabel_8;
	// UnityEngine.ParticleSystem[] controller::muzzleFlashes
	ParticleSystemU5BU5D_t1490986844* ___muzzleFlashes_9;
	// System.Int32 controller::currentMuzzleFlashType
	int32_t ___currentMuzzleFlashType_10;
	// UnityEngine.LineRenderer controller::laserAim
	LineRenderer_t849157671 * ___laserAim_11;
	// UnityEngine.Vector3 controller::vecPointAt
	Vector3_t2243707580  ___vecPointAt_12;
	// System.Single controller::lastFireTime
	float ___lastFireTime_13;
	// System.Single controller::enableMuzzleLightUntil
	float ___enableMuzzleLightUntil_14;
	// FPS_BulletImpacts controller::bulletImpactCTRL
	FPS_BulletImpacts_t1387629559 * ___bulletImpactCTRL_15;
	// System.Single controller::currentRotationSpeed
	float ___currentRotationSpeed_16;
	// System.Single controller::muzzleflashChangeTimeThrottle
	float ___muzzleflashChangeTimeThrottle_17;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mainCamera_3() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___mainCamera_3)); }
	inline Camera_t189460977 * get_mainCamera_3() const { return ___mainCamera_3; }
	inline Camera_t189460977 ** get_address_of_mainCamera_3() { return &___mainCamera_3; }
	inline void set_mainCamera_3(Camera_t189460977 * value)
	{
		___mainCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_3, value);
	}

	inline static int32_t get_offset_of_cameraAnchor_4() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___cameraAnchor_4)); }
	inline Transform_t3275118058 * get_cameraAnchor_4() const { return ___cameraAnchor_4; }
	inline Transform_t3275118058 ** get_address_of_cameraAnchor_4() { return &___cameraAnchor_4; }
	inline void set_cameraAnchor_4(Transform_t3275118058 * value)
	{
		___cameraAnchor_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraAnchor_4, value);
	}

	inline static int32_t get_offset_of_muzzleflashLocation_5() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___muzzleflashLocation_5)); }
	inline Transform_t3275118058 * get_muzzleflashLocation_5() const { return ___muzzleflashLocation_5; }
	inline Transform_t3275118058 ** get_address_of_muzzleflashLocation_5() { return &___muzzleflashLocation_5; }
	inline void set_muzzleflashLocation_5(Transform_t3275118058 * value)
	{
		___muzzleflashLocation_5 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleflashLocation_5, value);
	}

	inline static int32_t get_offset_of_fireRate_6() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___fireRate_6)); }
	inline int32_t get_fireRate_6() const { return ___fireRate_6; }
	inline int32_t* get_address_of_fireRate_6() { return &___fireRate_6; }
	inline void set_fireRate_6(int32_t value)
	{
		___fireRate_6 = value;
	}

	inline static int32_t get_offset_of_muzzleLight_7() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___muzzleLight_7)); }
	inline Light_t494725636 * get_muzzleLight_7() const { return ___muzzleLight_7; }
	inline Light_t494725636 ** get_address_of_muzzleLight_7() { return &___muzzleLight_7; }
	inline void set_muzzleLight_7(Light_t494725636 * value)
	{
		___muzzleLight_7 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleLight_7, value);
	}

	inline static int32_t get_offset_of_muzzleFlashTypeLabel_8() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___muzzleFlashTypeLabel_8)); }
	inline GUIText_t2411476300 * get_muzzleFlashTypeLabel_8() const { return ___muzzleFlashTypeLabel_8; }
	inline GUIText_t2411476300 ** get_address_of_muzzleFlashTypeLabel_8() { return &___muzzleFlashTypeLabel_8; }
	inline void set_muzzleFlashTypeLabel_8(GUIText_t2411476300 * value)
	{
		___muzzleFlashTypeLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlashTypeLabel_8, value);
	}

	inline static int32_t get_offset_of_muzzleFlashes_9() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___muzzleFlashes_9)); }
	inline ParticleSystemU5BU5D_t1490986844* get_muzzleFlashes_9() const { return ___muzzleFlashes_9; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_muzzleFlashes_9() { return &___muzzleFlashes_9; }
	inline void set_muzzleFlashes_9(ParticleSystemU5BU5D_t1490986844* value)
	{
		___muzzleFlashes_9 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlashes_9, value);
	}

	inline static int32_t get_offset_of_currentMuzzleFlashType_10() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___currentMuzzleFlashType_10)); }
	inline int32_t get_currentMuzzleFlashType_10() const { return ___currentMuzzleFlashType_10; }
	inline int32_t* get_address_of_currentMuzzleFlashType_10() { return &___currentMuzzleFlashType_10; }
	inline void set_currentMuzzleFlashType_10(int32_t value)
	{
		___currentMuzzleFlashType_10 = value;
	}

	inline static int32_t get_offset_of_laserAim_11() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___laserAim_11)); }
	inline LineRenderer_t849157671 * get_laserAim_11() const { return ___laserAim_11; }
	inline LineRenderer_t849157671 ** get_address_of_laserAim_11() { return &___laserAim_11; }
	inline void set_laserAim_11(LineRenderer_t849157671 * value)
	{
		___laserAim_11 = value;
		Il2CppCodeGenWriteBarrier(&___laserAim_11, value);
	}

	inline static int32_t get_offset_of_vecPointAt_12() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___vecPointAt_12)); }
	inline Vector3_t2243707580  get_vecPointAt_12() const { return ___vecPointAt_12; }
	inline Vector3_t2243707580 * get_address_of_vecPointAt_12() { return &___vecPointAt_12; }
	inline void set_vecPointAt_12(Vector3_t2243707580  value)
	{
		___vecPointAt_12 = value;
	}

	inline static int32_t get_offset_of_lastFireTime_13() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___lastFireTime_13)); }
	inline float get_lastFireTime_13() const { return ___lastFireTime_13; }
	inline float* get_address_of_lastFireTime_13() { return &___lastFireTime_13; }
	inline void set_lastFireTime_13(float value)
	{
		___lastFireTime_13 = value;
	}

	inline static int32_t get_offset_of_enableMuzzleLightUntil_14() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___enableMuzzleLightUntil_14)); }
	inline float get_enableMuzzleLightUntil_14() const { return ___enableMuzzleLightUntil_14; }
	inline float* get_address_of_enableMuzzleLightUntil_14() { return &___enableMuzzleLightUntil_14; }
	inline void set_enableMuzzleLightUntil_14(float value)
	{
		___enableMuzzleLightUntil_14 = value;
	}

	inline static int32_t get_offset_of_bulletImpactCTRL_15() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___bulletImpactCTRL_15)); }
	inline FPS_BulletImpacts_t1387629559 * get_bulletImpactCTRL_15() const { return ___bulletImpactCTRL_15; }
	inline FPS_BulletImpacts_t1387629559 ** get_address_of_bulletImpactCTRL_15() { return &___bulletImpactCTRL_15; }
	inline void set_bulletImpactCTRL_15(FPS_BulletImpacts_t1387629559 * value)
	{
		___bulletImpactCTRL_15 = value;
		Il2CppCodeGenWriteBarrier(&___bulletImpactCTRL_15, value);
	}

	inline static int32_t get_offset_of_currentRotationSpeed_16() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___currentRotationSpeed_16)); }
	inline float get_currentRotationSpeed_16() const { return ___currentRotationSpeed_16; }
	inline float* get_address_of_currentRotationSpeed_16() { return &___currentRotationSpeed_16; }
	inline void set_currentRotationSpeed_16(float value)
	{
		___currentRotationSpeed_16 = value;
	}

	inline static int32_t get_offset_of_muzzleflashChangeTimeThrottle_17() { return static_cast<int32_t>(offsetof(controller_t1901481736, ___muzzleflashChangeTimeThrottle_17)); }
	inline float get_muzzleflashChangeTimeThrottle_17() const { return ___muzzleflashChangeTimeThrottle_17; }
	inline float* get_address_of_muzzleflashChangeTimeThrottle_17() { return &___muzzleflashChangeTimeThrottle_17; }
	inline void set_muzzleflashChangeTimeThrottle_17(float value)
	{
		___muzzleflashChangeTimeThrottle_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
