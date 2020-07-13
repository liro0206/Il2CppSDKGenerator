#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrMapItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrMapItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCB20C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCB318))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCB3BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCB464))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(BrMapItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2CCB50C))(this, list, index, dataObj);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCBEBC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCBEC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCBECC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BrMapItemController*))(Il2CppBase() + 0x2CCBED4))(this);
	}

};

}