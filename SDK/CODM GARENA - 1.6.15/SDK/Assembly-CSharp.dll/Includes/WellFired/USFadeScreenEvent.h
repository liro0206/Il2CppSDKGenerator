#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USFadeScreenEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USFadeScreenEvent"));
	}

	template <typename T = uintptr_t> T& uiLayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fadeCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& fadeColour() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& currentCurveSampleTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& texture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3BF60))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USFadeScreenEvent*, float))(Il2CppBase() + 0x4A3C028))(this, deltaTime);
	}
	template <typename T = void> T EndEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3C390))(this);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3C730))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3C810))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3CADC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3CE54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3D110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3D118))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USFadeScreenEvent*))(Il2CppBase() + 0x4A3D120))(this);
	}

};

}