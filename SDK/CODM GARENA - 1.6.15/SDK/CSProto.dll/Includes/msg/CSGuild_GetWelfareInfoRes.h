#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetWelfareInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetWelfareInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _welfare_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildGetWelfareInfoRes*))(Il2CppBase() + 0x51DB5F0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildGetWelfareInfoRes*, int32_t))(Il2CppBase() + 0x51DB5F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_welfare_list() {
		return ((T (*)(CSGuildGetWelfareInfoRes*))(Il2CppBase() + 0x51DB600))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetWelfareInfoRes*, bool))(Il2CppBase() + 0x51DB608))(this, createIfMissing);
	}

};

}