#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeRoomSettingMatchcAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeRoomSetting_Match>c__AnonStoreyC"));
	}

	template <typename T = int32_t> T& tabIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ChangeRoomSettingMatchcAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x212CA20))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(ChangeRoomSettingMatchcAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x212CA68))(this, it);
	}

};

}