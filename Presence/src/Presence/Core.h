#pragma once

#ifdef PR_PLATFORM_WINDOWS
	#ifdef PR_BUILD_DLL
		#define PRESENCE_API _declspec(dllexport)
	#else
		#define PRESENCE_API _declspec(dllimport)
	#endif
#else
	#error Presence only supports Windows
#endif

#ifdef PR_ENABLE_ASSERTS
	#define PR_ASSERT(x, ...) { if (!(x)) { PR_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define PR_CORE_ASSERT(x, ...) { if(!(x)) { PR_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define PR_ASSERT(x, ...)
	#define PR_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)