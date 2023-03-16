#pragma once

#ifdef AI_PLATFORM_WINDOWS
	#ifdef AI_BUILD_DLL
		#define AI22M020_API __declspec(dllexport)
	#else
		#define AI22M020_API __declspec(dllimport)
	#endif
#else
	#error AI22M020 only supports Windows!
#endif

#ifdef AI_ENABLE_ASSERTS
	#define AI_ASSERT(x, ...) { if(!(x)) { AI_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define AI_CORE_ASSERT(x, ...) { if(!(x)) { AI_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define AI_ASSERT(x, ...)
	#define AI_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
