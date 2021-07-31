#pragma once

enum class HookingMethod {
	VEH = 0, // VectoredExceptionHandler
	MH = 1, // MinHook
	KIERO = 2 // DX9, DX10, Vulkan, DX11, DX12, OpenGl, etc.
};

namespace InitTypes {
	bool InitVEH = false;
	bool InitMH = false;
	bool InitKiero = false;
}

enum class DLLType {
	S13,
	PROD
};