#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerTypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerTypeInfo"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& typeName() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}