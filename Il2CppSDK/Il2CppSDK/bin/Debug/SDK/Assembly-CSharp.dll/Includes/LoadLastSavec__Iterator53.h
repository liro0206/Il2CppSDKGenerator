#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadLastSavecIterator53
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& i__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& $delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x4033D8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x40489C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x4048A4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x4048AC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x4053DC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadLastSavecIterator53*))(Il2CppBase() + 0x4053E8))(this);
	}
};