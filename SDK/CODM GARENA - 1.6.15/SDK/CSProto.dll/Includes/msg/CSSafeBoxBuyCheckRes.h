#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSafeBoxBuyCheckRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSafeBoxBuyCheckRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSafeBoxBuyCheckRes*))(Il2CppBase() + 0x51E0F20))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSafeBoxBuyCheckRes*, int32_t))(Il2CppBase() + 0x51E0F28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSafeBoxBuyCheckRes*, bool))(Il2CppBase() + 0x51E0F30))(this, createIfMissing);
	}

};

}