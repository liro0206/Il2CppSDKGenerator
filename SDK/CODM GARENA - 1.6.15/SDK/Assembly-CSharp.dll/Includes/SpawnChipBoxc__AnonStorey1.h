#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnChipBoxcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnChipBox>c__AnonStorey1"));
	}

	template <typename T = uint32_t> T& uid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SpawnChipBoxcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x18C71CC))(this, it);
	}

};

}