#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class SatelliteContractVersionAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "SatelliteContractVersionAttribute"));
	}

	template <typename T = uintptr_t> T& ver() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}