#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchToOncIterator7A
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& $s_549__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& gameEvent__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F4240))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F463C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F4644))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F464C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F4990))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SwitchToOncIterator7A*))(Il2CppBase() + 0x2F499C))(this);
	}
};