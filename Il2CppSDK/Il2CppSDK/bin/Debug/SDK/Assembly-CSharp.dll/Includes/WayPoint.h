#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Waypoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& TrackObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Waypoint*))(Il2CppBase() + 0x27328C))(this);
	}
};