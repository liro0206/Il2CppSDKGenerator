#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepCreateRoomInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepCreateRoomInitInfo"));
	}

	template <typename T = int32_t> T& UserCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& FrameIntervalTimeMs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WaitTimeMs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& AutoStartFrame() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& BusinessId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& BusinessKey() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(LockStepCreateRoomInitInfo*, uintptr_t))(Il2CppBase() + 0x46AC7FC))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(LockStepCreateRoomInitInfo*, uintptr_t))(Il2CppBase() + 0x46AC914))(this, reader);
	}

};

}