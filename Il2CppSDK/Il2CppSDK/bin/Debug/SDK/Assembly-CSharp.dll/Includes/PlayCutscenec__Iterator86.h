#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayCutscenecIterator86
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& old__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F3ADC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F3AF0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F3AF8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F3B00))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F44C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayCutscenecIterator86*))(Il2CppBase() + 0x1F44CC))(this);
	}
};