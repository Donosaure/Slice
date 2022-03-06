#pragma once

#ifdef SC_PLATFORM_WINDOWS
	#ifdef SC_BUILD_DLL
		#define SLICE_API __declspec(dllexport)
	#else
		#define SLICE_API __declspec(dllimport)
	#endif
#else
	#error Slice only support Windows for now.
#endif