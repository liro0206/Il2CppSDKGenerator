#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIInputCmdLinePVEWeaponAddIdData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIInputCmdLinePVEWeaponAddIdData"));
	}

	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}