#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayoutCache
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& topLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& layoutGroups() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& windows() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LayoutCache*))(Il2CppBase() + 0x910B58))(this);
	}
};