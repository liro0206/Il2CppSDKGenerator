#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessKeyboardInputcIterator59
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& canceled__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& inKeyboard() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& inMaxTextLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& keyboardText__1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& inText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& inCloseDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& $inKeyboard() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& $inMaxTextLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& $inText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& $inCloseDelegate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DA960))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DA968))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DA970))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DA978))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DAC80))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ProcessKeyboardInputcIterator59*))(Il2CppBase() + 0x1DAC8C))(this);
	}
};