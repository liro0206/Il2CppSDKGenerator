#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSetCustomSettingFlagRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSetCustomSettingFlagRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSetCustomSettingFlagRes*))(Il2CppBase() + 0x51E17F0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSetCustomSettingFlagRes*, int32_t))(Il2CppBase() + 0x51E17F8))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSSetCustomSettingFlagRes*))(Il2CppBase() + 0x51E1800))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSSetCustomSettingFlagRes*, int32_t))(Il2CppBase() + 0x51E1808))(this, value);
	}
	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSSetCustomSettingFlagRes*))(Il2CppBase() + 0x51E1810))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSSetCustomSettingFlagRes*, int32_t))(Il2CppBase() + 0x51E1818))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSetCustomSettingFlagRes*, bool))(Il2CppBase() + 0x51E1820))(this, createIfMissing);
	}

};

}