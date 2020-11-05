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

#define BIT(x) (1 << x)