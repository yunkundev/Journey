#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t3144544347;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2292974762;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1241242746;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t3150798191;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t1132308689;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t3578734734;
// System.Action`1<System.Boolean>
struct Action_1_t3298748795;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t339786493;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t2343382448;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t3822290257;
// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t2386300233;
// System.Text.RegularExpressions.Regex
struct Regex_t2875057988;
// UnityEngine.Gyroscope
struct Gyroscope_t812237279;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1812858910;
// System.Char[]
struct CharU5BU5D_t1535824096;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t1360685739;
// UnityEngine.ILogger
struct ILogger_t1288119356;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t1336359363;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t3940214316;
// UnityEngine.Transform
struct Transform_t3850388281;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t732518583;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t653875072;
// UnityEngine.Texture2D
struct Texture2D_t2449984379;
// System.Void
struct Void_t1103295904;
// UnityEngine.Collider2D
struct Collider2D_t2907396591;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3981841659;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3907763373;
// UnityEngine.Display[]
struct DisplayU5BU5D_t4228227415;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1019497030;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t1594152264;
// System.Type
struct Type_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t4161989634;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t163579513;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t188358307;
// UnityEngine.RectTransform
struct RectTransform_t4273089906;
// System.IAsyncResult
struct IAsyncResult_t4154887450;
// System.AsyncCallback
struct AsyncCallback_t3960632241;
// System.Single[]
struct SingleU5BU5D_t3731346164;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t194511850;

struct ContactPoint2D_t609654542 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SCENEMANAGER_T1446598518_H
#define SCENEMANAGER_T1446598518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t1446598518  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t1446598518_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t3144544347 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2292974762 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1241242746 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t1446598518_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t3144544347 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t3144544347 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t3144544347 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t1446598518_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2292974762 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2292974762 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2292974762 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t1446598518_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1241242746 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1241242746 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1241242746 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T1446598518_H
#ifndef GAMECENTERPLATFORM_T1387856822_H
#define GAMECENTERPLATFORM_T1387856822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t1387856822  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t1387856822_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t3150798191 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t1132308689* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t3578734734* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t3578734734* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t3298748795 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t339786493 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t2343382448 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t3150798191 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t3150798191 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t3150798191 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t1132308689* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t1132308689** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t1132308689* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t3578734734* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t3578734734** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t3578734734* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t3578734734* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t3578734734** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t3578734734* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_t3298748795 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_t3298748795 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_t3298748795 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t339786493 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t339786493 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t339786493 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t1387856822_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t2343382448 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t2343382448 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t2343382448 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T1387856822_H
#ifndef RANDOM_T3330804259_H
#define RANDOM_T3330804259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t3330804259  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T3330804259_H
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3793837701_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3793837701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3793837701  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_t3298748795 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3793837701, ___callback_0)); }
	inline Action_1_t3298748795 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3298748795 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3298748795 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T3793837701_H
#ifndef RESOURCES_T3624496384_H
#define RESOURCES_T3624496384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t3624496384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T3624496384_H
#ifndef VALUETYPE_T1603066230_H
#define VALUETYPE_T1603066230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1603066230  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1603066230_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1603066230_marshaled_com
{
};
#endif // VALUETYPE_T1603066230_H
#ifndef REMOTESETTINGS_T2509788297_H
#define REMOTESETTINGS_T2509788297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t2509788297  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t2509788297_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t3822290257 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t2509788297_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t3822290257 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t3822290257 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t3822290257 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T2509788297_H
#ifndef ANALYTICS_T2769770282_H
#define ANALYTICS_T2769770282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.Analytics
struct  Analytics_t2769770282  : public RuntimeObject
{
public:

public:
};

struct Analytics_t2769770282_StaticFields
{
public:
	// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::s_UnityAnalyticsHandler
	UnityAnalyticsHandler_t2386300233 * ___s_UnityAnalyticsHandler_0;

public:
	inline static int32_t get_offset_of_s_UnityAnalyticsHandler_0() { return static_cast<int32_t>(offsetof(Analytics_t2769770282_StaticFields, ___s_UnityAnalyticsHandler_0)); }
	inline UnityAnalyticsHandler_t2386300233 * get_s_UnityAnalyticsHandler_0() const { return ___s_UnityAnalyticsHandler_0; }
	inline UnityAnalyticsHandler_t2386300233 ** get_address_of_s_UnityAnalyticsHandler_0() { return &___s_UnityAnalyticsHandler_0; }
	inline void set_s_UnityAnalyticsHandler_0(UnityAnalyticsHandler_t2386300233 * value)
	{
		___s_UnityAnalyticsHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityAnalyticsHandler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICS_T2769770282_H
#ifndef WEBREQUESTUTILS_T3192909281_H
#define WEBREQUESTUTILS_T3192909281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3192909281  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3192909281_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t2875057988 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3192909281_StaticFields, ___domainRegex_0)); }
	inline Regex_t2875057988 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t2875057988 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t2875057988 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3192909281_H
#ifndef INPUT_T323617715_H
#define INPUT_T323617715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t323617715  : public RuntimeObject
{
public:

public:
};

struct Input_t323617715_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t812237279 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t323617715_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t812237279 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t812237279 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t812237279 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T323617715_H
#ifndef YIELDINSTRUCTION_T3337009322_H
#define YIELDINSTRUCTION_T3337009322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t3337009322  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3337009322_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t3337009322_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T3337009322_H
#ifndef GYROSCOPE_T812237279_H
#define GYROSCOPE_T812237279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t812237279  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T812237279_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T2358532485_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T2358532485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t2358532485  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T2358532485_H
#ifndef AUDIOSETTINGS_T3442836084_H
#define AUDIOSETTINGS_T3442836084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t3442836084  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t3442836084_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1812858910 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t3442836084_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1812858910 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1812858910 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1812858910 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T3442836084_H
#ifndef TEXTWRITER_T4217571253_H
#define TEXTWRITER_T4217571253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t4217571253  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1535824096* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t4217571253, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1535824096* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1535824096** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1535824096* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t4217571253_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4217571253 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4217571253_StaticFields, ___Null_1)); }
	inline TextWriter_t4217571253 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4217571253 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4217571253 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T4217571253_H
#ifndef PHYSICS2D_T2295672977_H
#define PHYSICS2D_T2295672977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t2295672977  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t2295672977_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t1360685739 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t2295672977_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t1360685739 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t1360685739 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t1360685739 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T2295672977_H
#ifndef DEBUG_T3474335526_H
#define DEBUG_T3474335526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t3474335526  : public RuntimeObject
{
public:

public:
};

struct Debug_t3474335526_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t3474335526_StaticFields, ___s_Logger_0)); }
	inline RuntimeObject* get_s_Logger_0() const { return ___s_Logger_0; }
	inline RuntimeObject** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(RuntimeObject* value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Logger_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3474335526_H
#ifndef DEBUGLOGHANDLER_T1839305023_H
#define DEBUGLOGHANDLER_T1839305023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DebugLogHandler
struct  DebugLogHandler_t1839305023  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGHANDLER_T1839305023_H
#ifndef SPRITEATLASMANAGER_T87669541_H
#define SPRITEATLASMANAGER_T87669541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t87669541  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t87669541_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t1336359363 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t3940214316 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t87669541_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t1336359363 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t1336359363 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t1336359363 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t87669541_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t3940214316 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t3940214316 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t3940214316 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T87669541_H
#ifndef ENUMERATOR_T799241622_H
#define ENUMERATOR_T799241622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t799241622  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t3850388281 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t799241622, ___outer_0)); }
	inline Transform_t3850388281 * get_outer_0() const { return ___outer_0; }
	inline Transform_t3850388281 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t3850388281 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t799241622, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T799241622_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T89804104_H
#define UNHANDLEDEXCEPTIONHANDLER_T89804104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t89804104  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t89804104_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t732518583 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t89804104_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t732518583 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t732518583 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t732518583 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T89804104_H
#ifndef ATTRIBUTE_T1768869733_H
#define ATTRIBUTE_T1768869733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1768869733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1768869733_H
#ifndef HOSTDATA_T2099076226_H
#define HOSTDATA_T2099076226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t2099076226  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.HostData::m_Nat
	int32_t ___m_Nat_0;
	// System.String UnityEngine.HostData::m_GameType
	String_t* ___m_GameType_1;
	// System.String UnityEngine.HostData::m_GameName
	String_t* ___m_GameName_2;
	// System.Int32 UnityEngine.HostData::m_ConnectedPlayers
	int32_t ___m_ConnectedPlayers_3;
	// System.Int32 UnityEngine.HostData::m_PlayerLimit
	int32_t ___m_PlayerLimit_4;
	// System.String[] UnityEngine.HostData::m_IP
	StringU5BU5D_t653875072* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_IP_5)); }
	inline StringU5BU5D_t653875072* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t653875072** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t653875072* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t2099076226, ___m_GUID_9)); }
	inline String_t* get_m_GUID_9() const { return ___m_GUID_9; }
	inline String_t** get_address_of_m_GUID_9() { return &___m_GUID_9; }
	inline void set_m_GUID_9(String_t* value)
	{
		___m_GUID_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GUID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HostData
struct HostData_t2099076226_marshaled_pinvoke
{
	int32_t ___m_Nat_0;
	char* ___m_GameType_1;
	char* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	char** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	char* ___m_Comment_8;
	char* ___m_GUID_9;
};
// Native definition for COM marshalling of UnityEngine.HostData
struct HostData_t2099076226_marshaled_com
{
	int32_t ___m_Nat_0;
	Il2CppChar* ___m_GameType_1;
	Il2CppChar* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	Il2CppChar** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	Il2CppChar* ___m_Comment_8;
	Il2CppChar* ___m_GUID_9;
};
#endif // HOSTDATA_T2099076226_H
#ifndef UNITYLOGWRITER_T3531274571_H
#define UNITYLOGWRITER_T3531274571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t3531274571  : public TextWriter_t4217571253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T3531274571_H
#ifndef GCACHIEVEMENTDATA_T2425322496_H
#define GCACHIEVEMENTDATA_T2425322496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t2425322496 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t2425322496, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t2425322496, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t2425322496, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t2425322496, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t2425322496, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2425322496_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2425322496_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T2425322496_H
#ifndef GCUSERPROFILEDATA_T1711932352_H
#define GCUSERPROFILEDATA_T1711932352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t1711932352 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t2449984379 * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t1711932352, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t1711932352, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t1711932352, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t1711932352, ___image_3)); }
	inline Texture2D_t2449984379 * get_image_3() const { return ___image_3; }
	inline Texture2D_t2449984379 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t2449984379 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t1711932352_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t2449984379 * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t1711932352_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t2449984379 * ___image_3;
};
#endif // GCUSERPROFILEDATA_T1711932352_H
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T551568075_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T551568075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t551568075 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t2449984379 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_Image_2)); }
	inline Texture2D_t2449984379 * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t2449984379 ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t2449984379 * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t551568075, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t551568075_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t2449984379 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t551568075_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t2449984379 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T551568075_H
#ifndef SCENE_T2127039959_H
#define SCENE_T2127039959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2127039959 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2127039959, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2127039959_H
#ifndef RPC_T639599576_H
#define RPC_T639599576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t639599576  : public Attribute_t1768869733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T639599576_H
#ifndef GCSCOREDATA_T1833160570_H
#define GCSCOREDATA_T1833160570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t1833160570 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t1833160570, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1833160570_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t1833160570_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T1833160570_H
#ifndef VECTOR2_T51043973_H
#define VECTOR2_T51043973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t51043973 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t51043973, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t51043973, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t51043973_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t51043973  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t51043973  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t51043973  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t51043973  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t51043973  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t51043973  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t51043973  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t51043973  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___zeroVector_2)); }
	inline Vector2_t51043973  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t51043973 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t51043973  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___oneVector_3)); }
	inline Vector2_t51043973  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t51043973 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t51043973  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___upVector_4)); }
	inline Vector2_t51043973  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t51043973 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t51043973  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___downVector_5)); }
	inline Vector2_t51043973  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t51043973 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t51043973  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___leftVector_6)); }
	inline Vector2_t51043973  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t51043973 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t51043973  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___rightVector_7)); }
	inline Vector2_t51043973  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t51043973 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t51043973  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t51043973  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t51043973 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t51043973  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t51043973_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t51043973  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t51043973 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t51043973  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T51043973_H
#ifndef ENUM_T3416928512_H
#define ENUM_T3416928512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3416928512  : public ValueType_t1603066230
{
public:

public:
};

struct Enum_t3416928512_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1535824096* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3416928512_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1535824096* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1535824096** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1535824096* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3416928512_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3416928512_marshaled_com
{
};
#endif // ENUM_T3416928512_H
#ifndef VOID_T1103295904_H
#define VOID_T1103295904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1103295904 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1103295904_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef LAYERMASK_T4032532443_H
#define LAYERMASK_T4032532443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t4032532443 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t4032532443, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T4032532443_H
#ifndef BOOLEAN_T3373784071_H
#define BOOLEAN_T3373784071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3373784071 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3373784071, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3373784071_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3373784071_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3373784071_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3373784071_H
#ifndef INT32_T3897606897_H
#define INT32_T3897606897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3897606897 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3897606897, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3897606897_H
#ifndef CULLINGGROUPEVENT_T3839472751_H
#define CULLINGGROUPEVENT_T3839472751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t3839472751 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3839472751, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3839472751, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t3839472751, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T3839472751_H
#ifndef QUATERNION_T2872230718_H
#define QUATERNION_T2872230718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2872230718 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2872230718, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2872230718, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2872230718, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2872230718, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2872230718_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2872230718  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2872230718_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2872230718  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2872230718 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2872230718  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2872230718_H
#ifndef MATHF_T2257691736_H
#define MATHF_T2257691736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mathf
struct  Mathf_t2257691736 
{
public:

public:
};

struct Mathf_t2257691736_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t2257691736_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHF_T2257691736_H
#ifndef KEYFRAME_T3829864751_H
#define KEYFRAME_T3829864751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t3829864751 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t3829864751, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t3829864751, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t3829864751, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t3829864751, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T3829864751_H
#ifndef NETWORKPLAYER_T1995215323_H
#define NETWORKPLAYER_T1995215323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t1995215323 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t1995215323, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T1995215323_H
#ifndef NETWORKVIEWID_T2940732650_H
#define NETWORKVIEWID_T2940732650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t2940732650 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t2940732650, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t2940732650, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t2940732650, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T2940732650_H
#ifndef VECTOR3_T2800706635_H
#define VECTOR3_T2800706635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2800706635 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2800706635, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2800706635, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2800706635, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2800706635_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2800706635  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2800706635  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2800706635  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2800706635  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2800706635  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2800706635  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2800706635  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2800706635  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2800706635  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2800706635  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2800706635  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2800706635 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2800706635  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___oneVector_5)); }
	inline Vector3_t2800706635  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2800706635 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2800706635  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___upVector_6)); }
	inline Vector3_t2800706635  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2800706635 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2800706635  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___downVector_7)); }
	inline Vector3_t2800706635  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2800706635 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2800706635  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___leftVector_8)); }
	inline Vector3_t2800706635  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2800706635 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2800706635  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___rightVector_9)); }
	inline Vector3_t2800706635  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2800706635 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2800706635  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2800706635  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2800706635 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2800706635  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___backVector_11)); }
	inline Vector3_t2800706635  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2800706635 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2800706635  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2800706635  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2800706635 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2800706635  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2800706635_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2800706635  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2800706635 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2800706635  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2800706635_H
#ifndef FORCEMODE2D_T2923149524_H
#define FORCEMODE2D_T2923149524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode2D
struct  ForceMode2D_t2923149524 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode2D_t2923149524, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE2D_T2923149524_H
#ifndef RAYCASTHIT2D_T2672914134_H
#define RAYCASTHIT2D_T2672914134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2672914134 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t51043973  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t51043973  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t51043973  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2907396591 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Centroid_0)); }
	inline Vector2_t51043973  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t51043973 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t51043973  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Point_1)); }
	inline Vector2_t51043973  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t51043973 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t51043973  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Normal_2)); }
	inline Vector2_t51043973  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t51043973 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t51043973  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2672914134, ___m_Collider_5)); }
	inline Collider2D_t2907396591 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2907396591 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2907396591 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2672914134_marshaled_pinvoke
{
	Vector2_t51043973  ___m_Centroid_0;
	Vector2_t51043973  ___m_Point_1;
	Vector2_t51043973  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2907396591 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2672914134_marshaled_com
{
	Vector2_t51043973  ___m_Centroid_0;
	Vector2_t51043973  ___m_Point_1;
	Vector2_t51043973  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2907396591 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2672914134_H
#ifndef RIGIDBODYTYPE2D_T3906553589_H
#define RIGIDBODYTYPE2D_T3906553589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyType2D
struct  RigidbodyType2D_t3906553589 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyType2D_t3906553589, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODYTYPE2D_T3906553589_H
#ifndef ASYNCOPERATION_T608667791_H
#define ASYNCOPERATION_T608667791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t608667791  : public YieldInstruction_t3337009322
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t608667791, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t608667791_marshaled_pinvoke : public YieldInstruction_t3337009322_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t608667791_marshaled_com : public YieldInstruction_t3337009322_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T608667791_H
#ifndef CONTACTPOINT2D_T609654542_H
#define CONTACTPOINT2D_T609654542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t609654542 
{
public:
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t51043973  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t51043973  ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t51043973  ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Point_0)); }
	inline Vector2_t51043973  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector2_t51043973 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector2_t51043973  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Normal_1)); }
	inline Vector2_t51043973  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector2_t51043973 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector2_t51043973  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_2() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_RelativeVelocity_2)); }
	inline Vector2_t51043973  get_m_RelativeVelocity_2() const { return ___m_RelativeVelocity_2; }
	inline Vector2_t51043973 * get_address_of_m_RelativeVelocity_2() { return &___m_RelativeVelocity_2; }
	inline void set_m_RelativeVelocity_2(Vector2_t51043973  value)
	{
		___m_RelativeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_Separation_3() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Separation_3)); }
	inline float get_m_Separation_3() const { return ___m_Separation_3; }
	inline float* get_address_of_m_Separation_3() { return &___m_Separation_3; }
	inline void set_m_Separation_3(float value)
	{
		___m_Separation_3 = value;
	}

	inline static int32_t get_offset_of_m_NormalImpulse_4() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_NormalImpulse_4)); }
	inline float get_m_NormalImpulse_4() const { return ___m_NormalImpulse_4; }
	inline float* get_address_of_m_NormalImpulse_4() { return &___m_NormalImpulse_4; }
	inline void set_m_NormalImpulse_4(float value)
	{
		___m_NormalImpulse_4 = value;
	}

	inline static int32_t get_offset_of_m_TangentImpulse_5() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_TangentImpulse_5)); }
	inline float get_m_TangentImpulse_5() const { return ___m_TangentImpulse_5; }
	inline float* get_address_of_m_TangentImpulse_5() { return &___m_TangentImpulse_5; }
	inline void set_m_TangentImpulse_5(float value)
	{
		___m_TangentImpulse_5 = value;
	}

	inline static int32_t get_offset_of_m_Collider_6() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Collider_6)); }
	inline int32_t get_m_Collider_6() const { return ___m_Collider_6; }
	inline int32_t* get_address_of_m_Collider_6() { return &___m_Collider_6; }
	inline void set_m_Collider_6(int32_t value)
	{
		___m_Collider_6 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_7() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_OtherCollider_7)); }
	inline int32_t get_m_OtherCollider_7() const { return ___m_OtherCollider_7; }
	inline int32_t* get_address_of_m_OtherCollider_7() { return &___m_OtherCollider_7; }
	inline void set_m_OtherCollider_7(int32_t value)
	{
		___m_OtherCollider_7 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Rigidbody_8)); }
	inline int32_t get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline int32_t* get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(int32_t value)
	{
		___m_Rigidbody_8 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_9() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_OtherRigidbody_9)); }
	inline int32_t get_m_OtherRigidbody_9() const { return ___m_OtherRigidbody_9; }
	inline int32_t* get_address_of_m_OtherRigidbody_9() { return &___m_OtherRigidbody_9; }
	inline void set_m_OtherRigidbody_9(int32_t value)
	{
		___m_OtherRigidbody_9 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_10() { return static_cast<int32_t>(offsetof(ContactPoint2D_t609654542, ___m_Enabled_10)); }
	inline int32_t get_m_Enabled_10() const { return ___m_Enabled_10; }
	inline int32_t* get_address_of_m_Enabled_10() { return &___m_Enabled_10; }
	inline void set_m_Enabled_10(int32_t value)
	{
		___m_Enabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT2D_T609654542_H
#ifndef COLLISION2D_T1582583509_H
#define COLLISION2D_T1582583509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t1582583509  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t3981841659* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t51043973  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t3981841659* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t3981841659** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t3981841659* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_RelativeVelocity_5)); }
	inline Vector2_t51043973  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t51043973 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t51043973  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t1582583509, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t1582583509_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t609654542 * ___m_Contacts_4;
	Vector2_t51043973  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t1582583509_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t609654542 * ___m_Contacts_4;
	Vector2_t51043973  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T1582583509_H
#ifndef DELEGATE_T3854478965_H
#define DELEGATE_T3854478965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3854478965  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3907763373 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3854478965, ___data_8)); }
	inline DelegateData_t3907763373 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3907763373 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3907763373 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3854478965_H
#ifndef CUSTOMEVENTDATA_T1742252717_H
#define CUSTOMEVENTDATA_T1742252717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.CustomEventData
struct  CustomEventData_t1742252717  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CustomEventData_t1742252717, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t1742252717_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t1742252717_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CUSTOMEVENTDATA_T1742252717_H
#ifndef ANALYTICSRESULT_T3833237680_H
#define ANALYTICSRESULT_T3833237680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_t3833237680 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsResult_t3833237680, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSRESULT_T3833237680_H
#ifndef UNITYANALYTICSHANDLER_T2386300233_H
#define UNITYANALYTICSHANDLER_T2386300233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsHandler
struct  UnityAnalyticsHandler_t2386300233  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsHandler_t2386300233, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t2386300233_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t2386300233_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UNITYANALYTICSHANDLER_T2386300233_H
#ifndef CONTACTFILTER2D_T2231722112_H
#define CONTACTFILTER2D_T2231722112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t2231722112 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t4032532443  ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useOutsideDepth_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useOutsideDepth_3)); }
	inline bool get_useOutsideDepth_3() const { return ___useOutsideDepth_3; }
	inline bool* get_address_of_useOutsideDepth_3() { return &___useOutsideDepth_3; }
	inline void set_useOutsideDepth_3(bool value)
	{
		___useOutsideDepth_3 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useNormalAngle_4)); }
	inline bool get_useNormalAngle_4() const { return ___useNormalAngle_4; }
	inline bool* get_address_of_useNormalAngle_4() { return &___useNormalAngle_4; }
	inline void set_useNormalAngle_4(bool value)
	{
		___useNormalAngle_4 = value;
	}

	inline static int32_t get_offset_of_useOutsideNormalAngle_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___useOutsideNormalAngle_5)); }
	inline bool get_useOutsideNormalAngle_5() const { return ___useOutsideNormalAngle_5; }
	inline bool* get_address_of_useOutsideNormalAngle_5() { return &___useOutsideNormalAngle_5; }
	inline void set_useOutsideNormalAngle_5(bool value)
	{
		___useOutsideNormalAngle_5 = value;
	}

	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___layerMask_6)); }
	inline LayerMask_t4032532443  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_t4032532443 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_t4032532443  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of_minDepth_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___minDepth_7)); }
	inline float get_minDepth_7() const { return ___minDepth_7; }
	inline float* get_address_of_minDepth_7() { return &___minDepth_7; }
	inline void set_minDepth_7(float value)
	{
		___minDepth_7 = value;
	}

	inline static int32_t get_offset_of_maxDepth_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___maxDepth_8)); }
	inline float get_maxDepth_8() const { return ___maxDepth_8; }
	inline float* get_address_of_maxDepth_8() { return &___maxDepth_8; }
	inline void set_maxDepth_8(float value)
	{
		___maxDepth_8 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_9() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___minNormalAngle_9)); }
	inline float get_minNormalAngle_9() const { return ___minNormalAngle_9; }
	inline float* get_address_of_minNormalAngle_9() { return &___minNormalAngle_9; }
	inline void set_minNormalAngle_9(float value)
	{
		___minNormalAngle_9 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_10() { return static_cast<int32_t>(offsetof(ContactFilter2D_t2231722112, ___maxNormalAngle_10)); }
	inline float get_maxNormalAngle_10() const { return ___maxNormalAngle_10; }
	inline float* get_address_of_maxNormalAngle_10() { return &___maxNormalAngle_10; }
	inline void set_maxNormalAngle_10(float value)
	{
		___maxNormalAngle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t2231722112_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t4032532443  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t2231722112_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t4032532443  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
#endif // CONTACTFILTER2D_T2231722112_H
#ifndef SCRIPTABLERENDERCONTEXT_T3699083845_H
#define SCRIPTABLERENDERCONTEXT_T3699083845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t3699083845 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t3699083845, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T3699083845_H
#ifndef USERSTATE_T3071273436_H
#define USERSTATE_T3071273436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t3071273436 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserState_t3071273436, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTATE_T3071273436_H
#ifndef OBJECT_T3250475427_H
#define OBJECT_T3250475427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3250475427  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3250475427, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3250475427_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3250475427_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3250475427_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3250475427_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3250475427_H
#ifndef HIDEFLAGS_T3335116194_H
#define HIDEFLAGS_T3335116194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t3335116194 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t3335116194, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T3335116194_H
#ifndef PLAYABLEHANDLE_T1585277128_H
#define PLAYABLEHANDLE_T1585277128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1585277128 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1585277128, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1585277128, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1585277128_H
#ifndef NETWORKMESSAGEINFO_T3791325011_H
#define NETWORKMESSAGEINFO_T3791325011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t3791325011 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t1995215323  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t2940732650  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3791325011, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3791325011, ___m_Sender_1)); }
	inline NetworkPlayer_t1995215323  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t1995215323 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t1995215323  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3791325011, ___m_ViewID_2)); }
	inline NetworkViewID_t2940732650  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t2940732650 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t2940732650  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T3791325011_H
#ifndef DATASTREAMTYPE_T856867057_H
#define DATASTREAMTYPE_T856867057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t856867057 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t856867057, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T856867057_H
#ifndef BITSTREAM_T1890982538_H
#define BITSTREAM_T1890982538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t1890982538  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t1890982538, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSTREAM_T1890982538_H
#ifndef ANIMATIONCURVE_T468480964_H
#define ANIMATIONCURVE_T468480964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t468480964  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t468480964, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t468480964_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t468480964_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T468480964_H
#ifndef BOUNDS_T3014670609_H
#define BOUNDS_T3014670609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t3014670609 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t2800706635  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t2800706635  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t3014670609, ___m_Center_0)); }
	inline Vector3_t2800706635  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t2800706635 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t2800706635  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t3014670609, ___m_Extents_1)); }
	inline Vector3_t2800706635  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t2800706635 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t2800706635  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T3014670609_H
#ifndef LOADSCENEMODE_T4030341560_H
#define LOADSCENEMODE_T4030341560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t4030341560 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t4030341560, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T4030341560_H
#ifndef PLAYABLEGRAPH_T340945891_H
#define PLAYABLEGRAPH_T340945891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t340945891 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t340945891, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t340945891, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T340945891_H
#ifndef PLAYSTATE_T1611700637_H
#define PLAYSTATE_T1611700637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t1611700637 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t1611700637, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T1611700637_H
#ifndef GRADIENT_T279029007_H
#define GRADIENT_T279029007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t279029007  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t279029007, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t279029007_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t279029007_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T279029007_H
#ifndef CALENDARIDENTIFIER_T1097792282_H
#define CALENDARIDENTIFIER_T1097792282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t1097792282 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t1097792282, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T1097792282_H
#ifndef CALENDARUNIT_T1105438176_H
#define CALENDARUNIT_T1105438176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t1105438176 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t1105438176, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T1105438176_H
#ifndef DISPLAY_T1201034466_H
#define DISPLAY_T1201034466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1201034466  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1201034466, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1201034466_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t4228227415* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1201034466 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1019497030 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1201034466_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t4228227415* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t4228227415** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t4228227415* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1201034466_StaticFields, ____mainDisplay_2)); }
	inline Display_t1201034466 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1201034466 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1201034466 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1201034466_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t1019497030 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t1019497030 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t1019497030 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1201034466_H
#ifndef LOCALNOTIFICATION_T2167305980_H
#define LOCALNOTIFICATION_T2167305980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t2167305980  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t2167305980, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t2167305980_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t2167305980_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T2167305980_H
#ifndef CULLINGGROUP_T91912764_H
#define CULLINGGROUP_T91912764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t91912764  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t1594152264 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t91912764, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t91912764, ___m_OnStateChanged_1)); }
	inline StateChanged_t1594152264 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t1594152264 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t1594152264 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t91912764_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t91912764_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T91912764_H
#ifndef REMOTENOTIFICATION_T218806067_H
#define REMOTENOTIFICATION_T218806067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t218806067  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t218806067, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T218806067_H
#ifndef PLAYABLEOUTPUTHANDLE_T1351346986_H
#define PLAYABLEOUTPUTHANDLE_T1351346986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t1351346986 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1351346986, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1351346986, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T1351346986_H
#ifndef GAMEOBJECT_T2197839639_H
#define GAMEOBJECT_T2197839639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t2197839639  : public Object_t3250475427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T2197839639_H
#ifndef RESOURCEREQUEST_T3740516454_H
#define RESOURCEREQUEST_T3740516454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3740516454  : public AsyncOperation_t608667791
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t3740516454, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3740516454, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3740516454_marshaled_pinvoke : public AsyncOperation_t608667791_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3740516454_marshaled_com : public AsyncOperation_t608667791_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T3740516454_H
#ifndef SPRITE_T2511621042_H
#define SPRITE_T2511621042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t2511621042  : public Object_t3250475427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T2511621042_H
#ifndef TEXTURE_T1128044464_H
#define TEXTURE_T1128044464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t1128044464  : public Object_t3250475427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T1128044464_H
#ifndef USERPROFILE_T2878839479_H
#define USERPROFILE_T2878839479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t2878839479  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t2449984379 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t2878839479, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t2878839479, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t2878839479, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t2878839479, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t2878839479, ___m_Image_4)); }
	inline Texture2D_t2449984379 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t2449984379 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t2449984379 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T2878839479_H
#ifndef MULTICASTDELEGATE_T3684533617_H
#define MULTICASTDELEGATE_T3684533617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3684533617  : public Delegate_t3854478965
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3684533617 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3684533617 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3684533617, ___prev_9)); }
	inline MulticastDelegate_t3684533617 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3684533617 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3684533617 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3684533617, ___kpm_next_10)); }
	inline MulticastDelegate_t3684533617 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3684533617 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3684533617 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3684533617_H
#ifndef COMPONENT_T571236031_H
#define COMPONENT_T571236031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t571236031  : public Object_t3250475427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T571236031_H
#ifndef AUDIOCLIP_T1528620326_H
#define AUDIOCLIP_T1528620326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t1528620326  : public Object_t3250475427
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t4161989634 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t163579513 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t1528620326, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t4161989634 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t4161989634 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t4161989634 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t1528620326, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t163579513 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t163579513 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t163579513 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T1528620326_H
#ifndef AUDIOMIXERPLAYABLE_T1800506452_H
#define AUDIOMIXERPLAYABLE_T1800506452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t1800506452 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1585277128  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t1800506452, ___m_Handle_0)); }
	inline PlayableHandle_t1585277128  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1585277128 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1585277128  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T1800506452_H
#ifndef SPRITEATLAS_T4015249592_H
#define SPRITEATLAS_T4015249592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t4015249592  : public Object_t3250475427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T4015249592_H
#ifndef PLAYABLEOUTPUT_T1684654650_H
#define PLAYABLEOUTPUT_T1684654650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t1684654650 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t1351346986  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t1684654650, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1351346986  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1351346986 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1351346986  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t1684654650_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t1684654650  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t1684654650_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t1684654650  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t1684654650 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t1684654650  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T1684654650_H
#ifndef AUDIOCLIPPLAYABLE_T1308785227_H
#define AUDIOCLIPPLAYABLE_T1308785227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t1308785227 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1585277128  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t1308785227, ___m_Handle_0)); }
	inline PlayableHandle_t1585277128  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1585277128 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1585277128  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T1308785227_H
#ifndef AUDIOPLAYABLEOUTPUT_T2486847101_H
#define AUDIOPLAYABLEOUTPUT_T2486847101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2486847101 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t1351346986  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2486847101, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1351346986  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1351346986 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1351346986  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T2486847101_H
#ifndef PLAYABLE_T637835853_H
#define PLAYABLE_T637835853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t637835853 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1585277128  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t637835853, ___m_Handle_0)); }
	inline PlayableHandle_t1585277128  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1585277128 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1585277128  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t637835853_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t637835853  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t637835853_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t637835853  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t637835853 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t637835853  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T637835853_H
#ifndef LOCALUSER_T339786493_H
#define LOCALUSER_T339786493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t339786493  : public UserProfile_t2878839479
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t188358307* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t339786493, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t188358307* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t188358307** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t188358307* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t339786493, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t339786493, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T339786493_H
#ifndef REAPPLYDRIVENPROPERTIES_T194511850_H
#define REAPPLYDRIVENPROPERTIES_T194511850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t194511850  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T194511850_H
#ifndef STATECHANGED_T1594152264_H
#define STATECHANGED_T1594152264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t1594152264  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T1594152264_H
#ifndef REQUESTATLASCALLBACK_T1336359363_H
#define REQUESTATLASCALLBACK_T1336359363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t1336359363  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T1336359363_H
#ifndef DISPLAYSUPDATEDDELEGATE_T1019497030_H
#define DISPLAYSUPDATEDDELEGATE_T1019497030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t1019497030  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T1019497030_H
#ifndef RENDERER_T61451887_H
#define RENDERER_T61451887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t61451887  : public Component_t571236031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T61451887_H
#ifndef BEHAVIOUR_T622540831_H
#define BEHAVIOUR_T622540831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t622540831  : public Component_t571236031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T622540831_H
#ifndef RIGIDBODY2D_T2183704754_H
#define RIGIDBODY2D_T2183704754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t2183704754  : public Component_t571236031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T2183704754_H
#ifndef TRANSFORM_T3850388281_H
#define TRANSFORM_T3850388281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3850388281  : public Component_t571236031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3850388281_H
#ifndef UPDATEDEVENTHANDLER_T3822290257_H
#define UPDATEDEVENTHANDLER_T3822290257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t3822290257  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T3822290257_H
#ifndef TEXTURE2D_T2449984379_H
#define TEXTURE2D_T2449984379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t2449984379  : public Texture_t1128044464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T2449984379_H
#ifndef RENDERTEXTURE_T4080875098_H
#define RENDERTEXTURE_T4080875098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t4080875098  : public Texture_t1128044464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T4080875098_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T1812858910_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T1812858910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t1812858910  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T1812858910_H
#ifndef PCMREADERCALLBACK_T4161989634_H
#define PCMREADERCALLBACK_T4161989634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t4161989634  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T4161989634_H
#ifndef PCMSETPOSITIONCALLBACK_T163579513_H
#define PCMSETPOSITIONCALLBACK_T163579513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t163579513  : public MulticastDelegate_t3684533617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T163579513_H
#ifndef COLLIDER2D_T2907396591_H
#define COLLIDER2D_T2907396591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2907396591  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2907396591_H
#ifndef GUILAYER_T1853569499_H
#define GUILAYER_T1853569499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t1853569499  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T1853569499_H
#ifndef MONOBEHAVIOUR_T3432301144_H
#define MONOBEHAVIOUR_T3432301144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3432301144  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3432301144_H
#ifndef GUIELEMENT_T331836410_H
#define GUIELEMENT_T331836410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t331836410  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T331836410_H
#ifndef NETWORKVIEW_T3816219982_H
#define NETWORKVIEW_T3816219982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t3816219982  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T3816219982_H
#ifndef SPRITERENDERER_T2070124877_H
#define SPRITERENDERER_T2070124877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t2070124877  : public Renderer_t61451887
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T2070124877_H
#ifndef RECTTRANSFORM_T4273089906_H
#define RECTTRANSFORM_T4273089906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t4273089906  : public Transform_t3850388281
{
public:

public:
};

struct RectTransform_t4273089906_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t194511850 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t4273089906_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t194511850 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t194511850 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t194511850 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T4273089906_H
#ifndef AUDIOSOURCE_T1687644098_H
#define AUDIOSOURCE_T1687644098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t1687644098  : public Behaviour_t622540831
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T1687644098_H
#ifndef CIRCLECOLLIDER2D_T2120856053_H
#define CIRCLECOLLIDER2D_T2120856053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CircleCollider2D
struct  CircleCollider2D_t2120856053  : public Collider2D_t2907396591
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIRCLECOLLIDER2D_T2120856053_H
#ifndef BOXCOLLIDER2D_T3461860433_H
#define BOXCOLLIDER2D_T3461860433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3461860433  : public Collider2D_t2907396591
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3461860433_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (Component_t571236031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (UnhandledExceptionHandler_t89804104), -1, sizeof(UnhandledExceptionHandler_t89804104_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1201[1] = 
{
	UnhandledExceptionHandler_t89804104_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (CullingGroupEvent_t3839472751)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t3839472751 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1202[3] = 
{
	CullingGroupEvent_t3839472751::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3839472751::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t3839472751::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (CullingGroup_t91912764), sizeof(CullingGroup_t91912764_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1203[2] = 
{
	CullingGroup_t91912764::get_offset_of_m_Ptr_0(),
	CullingGroup_t91912764::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (StateChanged_t1594152264), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (DebugLogHandler_t1839305023), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (Debug_t3474335526), -1, sizeof(Debug_t3474335526_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1206[1] = 
{
	Debug_t3474335526_StaticFields::get_offset_of_s_Logger_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (Display_t1201034466), -1, sizeof(Display_t1201034466_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1207[4] = 
{
	Display_t1201034466::get_offset_of_nativeDisplay_0(),
	Display_t1201034466_StaticFields::get_offset_of_displays_1(),
	Display_t1201034466_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1201034466_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (DisplaysUpdatedDelegate_t1019497030), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (GameObject_t2197839639), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (Gradient_t279029007), sizeof(Gradient_t279029007_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1210[1] = 
{
	Gradient_t279029007::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (Renderer_t61451887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (GUIElement_t331836410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (GUILayer_t1853569499), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (Gyroscope_t812237279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (Input_t323617715), -1, sizeof(Input_t323617715_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1215[1] = 
{
	Input_t323617715_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (LayerMask_t4032532443)+ sizeof (RuntimeObject), sizeof(LayerMask_t4032532443 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1216[1] = 
{
	LayerMask_t4032532443::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (Vector3_t2800706635)+ sizeof (RuntimeObject), sizeof(Vector3_t2800706635 ), sizeof(Vector3_t2800706635_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1217[14] = 
{
	0,
	Vector3_t2800706635::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2800706635::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2800706635::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector3_t2800706635_StaticFields::get_offset_of_zeroVector_4(),
	Vector3_t2800706635_StaticFields::get_offset_of_oneVector_5(),
	Vector3_t2800706635_StaticFields::get_offset_of_upVector_6(),
	Vector3_t2800706635_StaticFields::get_offset_of_downVector_7(),
	Vector3_t2800706635_StaticFields::get_offset_of_leftVector_8(),
	Vector3_t2800706635_StaticFields::get_offset_of_rightVector_9(),
	Vector3_t2800706635_StaticFields::get_offset_of_forwardVector_10(),
	Vector3_t2800706635_StaticFields::get_offset_of_backVector_11(),
	Vector3_t2800706635_StaticFields::get_offset_of_positiveInfinityVector_12(),
	Vector3_t2800706635_StaticFields::get_offset_of_negativeInfinityVector_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (Quaternion_t2872230718)+ sizeof (RuntimeObject), sizeof(Quaternion_t2872230718 ), sizeof(Quaternion_t2872230718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1218[5] = 
{
	Quaternion_t2872230718::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2872230718::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2872230718::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2872230718::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Quaternion_t2872230718_StaticFields::get_offset_of_identityQuaternion_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (Bounds_t3014670609)+ sizeof (RuntimeObject), sizeof(Bounds_t3014670609 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1219[2] = 
{
	Bounds_t3014670609::get_offset_of_m_Center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Bounds_t3014670609::get_offset_of_m_Extents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (Mathf_t2257691736)+ sizeof (RuntimeObject), sizeof(Mathf_t2257691736 ), sizeof(Mathf_t2257691736_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1220[1] = 
{
	Mathf_t2257691736_StaticFields::get_offset_of_Epsilon_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (Keyframe_t3829864751)+ sizeof (RuntimeObject), sizeof(Keyframe_t3829864751 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1221[4] = 
{
	Keyframe_t3829864751::get_offset_of_m_Time_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3829864751::get_offset_of_m_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3829864751::get_offset_of_m_InTangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Keyframe_t3829864751::get_offset_of_m_OutTangent_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (AnimationCurve_t468480964), sizeof(AnimationCurve_t468480964_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1222[1] = 
{
	AnimationCurve_t468480964::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (MonoBehaviour_t3432301144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (NetworkPlayer_t1995215323)+ sizeof (RuntimeObject), sizeof(NetworkPlayer_t1995215323 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1224[1] = 
{
	NetworkPlayer_t1995215323::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (NetworkViewID_t2940732650)+ sizeof (RuntimeObject), sizeof(NetworkViewID_t2940732650 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1225[3] = 
{
	NetworkViewID_t2940732650::get_offset_of_a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t2940732650::get_offset_of_b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkViewID_t2940732650::get_offset_of_c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (NetworkView_t3816219982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (BitStream_t1890982538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1227[1] = 
{
	BitStream_t1890982538::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (RPC_t639599576), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (HostData_t2099076226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1229[10] = 
{
	HostData_t2099076226::get_offset_of_m_Nat_0(),
	HostData_t2099076226::get_offset_of_m_GameType_1(),
	HostData_t2099076226::get_offset_of_m_GameName_2(),
	HostData_t2099076226::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t2099076226::get_offset_of_m_PlayerLimit_4(),
	HostData_t2099076226::get_offset_of_m_IP_5(),
	HostData_t2099076226::get_offset_of_m_Port_6(),
	HostData_t2099076226::get_offset_of_m_PasswordProtected_7(),
	HostData_t2099076226::get_offset_of_m_Comment_8(),
	HostData_t2099076226::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (NetworkMessageInfo_t3791325011)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t3791325011 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[3] = 
{
	NetworkMessageInfo_t3791325011::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3791325011::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3791325011::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (Random_t3330804259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (ResourceRequest_t3740516454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1232[2] = 
{
	ResourceRequest_t3740516454::get_offset_of_m_Path_1(),
	ResourceRequest_t3740516454::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (Resources_t3624496384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { sizeof (Sprite_t2511621042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { sizeof (SpriteRenderer_t2070124877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (Texture_t1128044464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (Texture2D_t2449984379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (RenderTexture_t4080875098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (HideFlags_t3335116194)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1239[10] = 
{
	HideFlags_t3335116194::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (Object_t3250475427), sizeof(Object_t3250475427_marshaled_pinvoke), sizeof(Object_t3250475427_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1240[2] = 
{
	Object_t3250475427::get_offset_of_m_CachedPtr_0(),
	Object_t3250475427_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (UnityLogWriter_t3531274571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (YieldInstruction_t3337009322), sizeof(YieldInstruction_t3337009322_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { sizeof (PlayState_t1611700637)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1243[3] = 
{
	PlayState_t1611700637::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (PlayableHandle_t1585277128)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t1585277128 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1244[2] = 
{
	PlayableHandle_t1585277128::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t1585277128::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (Playable_t637835853)+ sizeof (RuntimeObject), sizeof(Playable_t637835853 ), sizeof(Playable_t637835853_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1245[2] = 
{
	Playable_t637835853::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t637835853_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (DataStreamType_t856867057)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1246[5] = 
{
	DataStreamType_t856867057::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (PlayableGraph_t340945891)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t340945891 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1247[2] = 
{
	PlayableGraph_t340945891::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t340945891::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (PlayableOutputHandle_t1351346986)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t1351346986 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1248[2] = 
{
	PlayableOutputHandle_t1351346986::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t1351346986::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (PlayableOutput_t1684654650)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t1684654650 ), sizeof(PlayableOutput_t1684654650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1249[2] = 
{
	PlayableOutput_t1684654650::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t1684654650_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (CalendarIdentifier_t1097792282)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1250[12] = 
{
	CalendarIdentifier_t1097792282::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (CalendarUnit_t1105438176)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1251[12] = 
{
	CalendarUnit_t1105438176::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (LocalNotification_t2167305980), -1, sizeof(LocalNotification_t2167305980_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1252[2] = 
{
	LocalNotification_t2167305980::get_offset_of_notificationWrapper_0(),
	LocalNotification_t2167305980_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (RemoteNotification_t218806067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1253[1] = 
{
	RemoteNotification_t218806067::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Scene_t2127039959)+ sizeof (RuntimeObject), sizeof(Scene_t2127039959 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1254[1] = 
{
	Scene_t2127039959::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (LoadSceneMode_t4030341560)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1255[3] = 
{
	LoadSceneMode_t4030341560::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (SceneManager_t1446598518), -1, sizeof(SceneManager_t1446598518_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1256[3] = 
{
	SceneManager_t1446598518_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t1446598518_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t1446598518_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (ScriptableRenderContext_t3699083845)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t3699083845 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1257[1] = 
{
	ScriptableRenderContext_t3699083845::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (Transform_t3850388281), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (Enumerator_t799241622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1259[2] = 
{
	Enumerator_t799241622::get_offset_of_outer_0(),
	Enumerator_t799241622::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (RectTransform_t4273089906), -1, sizeof(RectTransform_t4273089906_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1260[1] = 
{
	RectTransform_t4273089906_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (ReapplyDrivenProperties_t194511850), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (SpriteAtlasManager_t87669541), -1, sizeof(SpriteAtlasManager_t87669541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1262[2] = 
{
	SpriteAtlasManager_t87669541_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t87669541_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (RequestAtlasCallback_t1336359363), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (SpriteAtlas_t4015249592), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (RaycastHit2D_t2672914134)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1265[6] = 
{
	RaycastHit2D_t2672914134::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2672914134::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2672914134::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2672914134::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2672914134::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2672914134::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (Physics2D_t2295672977), -1, sizeof(Physics2D_t2295672977_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1266[1] = 
{
	Physics2D_t2295672977_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (ForceMode2D_t2923149524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1267[3] = 
{
	ForceMode2D_t2923149524::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (RigidbodyType2D_t3906553589)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1268[4] = 
{
	RigidbodyType2D_t3906553589::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (ContactFilter2D_t2231722112)+ sizeof (RuntimeObject), sizeof(ContactFilter2D_t2231722112_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1269[11] = 
{
	ContactFilter2D_t2231722112::get_offset_of_useTriggers_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_useLayerMask_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_useDepth_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_useOutsideDepth_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_useNormalAngle_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_useOutsideNormalAngle_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_layerMask_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_minDepth_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_maxDepth_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_minNormalAngle_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactFilter2D_t2231722112::get_offset_of_maxNormalAngle_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (Rigidbody2D_t2183704754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (Collider2D_t2907396591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (CircleCollider2D_t2120856053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (BoxCollider2D_t3461860433), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (ContactPoint2D_t609654542)+ sizeof (RuntimeObject), sizeof(ContactPoint2D_t609654542 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1274[11] = 
{
	ContactPoint2D_t609654542::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_RelativeVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_Separation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_NormalImpulse_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_TangentImpulse_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_Collider_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_OtherCollider_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_Rigidbody_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_OtherRigidbody_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint2D_t609654542::get_offset_of_m_Enabled_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (Collision2D_t1582583509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1275[7] = 
{
	Collision2D_t1582583509::get_offset_of_m_Collider_0(),
	Collision2D_t1582583509::get_offset_of_m_OtherCollider_1(),
	Collision2D_t1582583509::get_offset_of_m_Rigidbody_2(),
	Collision2D_t1582583509::get_offset_of_m_OtherRigidbody_3(),
	Collision2D_t1582583509::get_offset_of_m_Contacts_4(),
	Collision2D_t1582583509::get_offset_of_m_RelativeVelocity_5(),
	Collision2D_t1582583509::get_offset_of_m_Enabled_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (AudioPlayableOutput_t2486847101)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t2486847101 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1276[1] = 
{
	AudioPlayableOutput_t2486847101::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (AudioClipPlayable_t1308785227)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t1308785227 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1277[1] = 
{
	AudioClipPlayable_t1308785227::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (AudioMixerPlayable_t1800506452)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t1800506452 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1278[1] = 
{
	AudioMixerPlayable_t1800506452::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (AudioSettings_t3442836084), -1, sizeof(AudioSettings_t3442836084_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1279[1] = 
{
	AudioSettings_t3442836084_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (AudioConfigurationChangeHandler_t1812858910), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (AudioClip_t1528620326), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1281[2] = 
{
	AudioClip_t1528620326::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t1528620326::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (PCMReaderCallback_t4161989634), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (PCMSetPositionCallback_t163579513), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (AudioSource_t1687644098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (AudioPlayableGraphExtensions_t2358532485), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (WebRequestUtils_t3192909281), -1, sizeof(WebRequestUtils_t3192909281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1286[1] = 
{
	WebRequestUtils_t3192909281_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (CustomEventData_t1742252717), sizeof(CustomEventData_t1742252717_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1287[1] = 
{
	CustomEventData_t1742252717::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (AnalyticsResult_t3833237680)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1288[9] = 
{
	AnalyticsResult_t3833237680::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (Analytics_t2769770282), -1, sizeof(Analytics_t2769770282_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1289[1] = 
{
	Analytics_t2769770282_StaticFields::get_offset_of_s_UnityAnalyticsHandler_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (UnityAnalyticsHandler_t2386300233), sizeof(UnityAnalyticsHandler_t2386300233_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1290[1] = 
{
	UnityAnalyticsHandler_t2386300233::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (RemoteSettings_t2509788297), -1, sizeof(RemoteSettings_t2509788297_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1291[1] = 
{
	RemoteSettings_t2509788297_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (UpdatedEventHandler_t3822290257), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (GcUserProfileData_t1711932352)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1293[4] = 
{
	GcUserProfileData_t1711932352::get_offset_of_userName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t1711932352::get_offset_of_userID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t1711932352::get_offset_of_isFriend_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t1711932352::get_offset_of_image_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (GcAchievementDescriptionData_t551568075)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1294[7] = 
{
	GcAchievementDescriptionData_t551568075::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_Title_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_Image_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_AchievedDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_UnachievedDescription_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_Hidden_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t551568075::get_offset_of_m_Points_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (GcAchievementData_t2425322496)+ sizeof (RuntimeObject), sizeof(GcAchievementData_t2425322496_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1295[5] = 
{
	GcAchievementData_t2425322496::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t2425322496::get_offset_of_m_PercentCompleted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t2425322496::get_offset_of_m_Completed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t2425322496::get_offset_of_m_Hidden_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t2425322496::get_offset_of_m_LastReportedDate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (GcScoreData_t1833160570)+ sizeof (RuntimeObject), sizeof(GcScoreData_t1833160570_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1296[7] = 
{
	GcScoreData_t1833160570::get_offset_of_m_Category_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_ValueLow_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_ValueHigh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_Date_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_FormattedValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_PlayerID_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t1833160570::get_offset_of_m_Rank_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (GameCenterPlatform_t1387856822), -1, sizeof(GameCenterPlatform_t1387856822_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1297[7] = 
{
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_s_AuthenticateCallback_0(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_s_adCache_1(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_s_friends_2(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_s_users_3(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_s_ResetAchievements_4(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_m_LocalUser_5(),
	GameCenterPlatform_t1387856822_StaticFields::get_offset_of_m_GcBoards_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3793837701), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1298[1] = 
{
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t3793837701::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (LocalUser_t339786493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1299[3] = 
{
	LocalUser_t339786493::get_offset_of_m_Friends_5(),
	LocalUser_t339786493::get_offset_of_m_Authenticated_6(),
	LocalUser_t339786493::get_offset_of_m_Underage_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
