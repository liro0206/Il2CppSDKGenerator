#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFiringStateRecon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFiringState_Recon"));
	}

	template <typename T = bool> T& m_IsSwitchRole() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringStateRecon*))(Il2CppBase() + 0x45ABB04))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFiringStateRecon*, float))(Il2CppBase() + 0x45AC1C0))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringStateRecon*))(Il2CppBase() + 0x45AC388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFiringStateRecon*, float))(Il2CppBase() + 0x45AC390))(this, P0);
	}

};

}