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

#define BIT(x) (1 << x)
