#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SeeFrontProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SeeFrontProcessor"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& m_RenderEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(SeeFrontProcessor*))(Il2CppBase() + 0x2DFCE2C))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(SeeFrontProcessor*, bool))(Il2CppBase() + 0x2DFCE34))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SeeFrontProcessor*))(Il2CppBase() + 0x2DFCE3C))(this);
	}
	template <typename T = void> T ToggleEffect(bool active, bool isEnemy) {
		return ((T (*)(SeeFrontProcessor*, bool, bool))(Il2CppBase() + 0x2DFCF48))(this, active, isEnemy);
	}

};

}