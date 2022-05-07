#pragma once

#ifdef ARG_PLATFORM_WINDOWS
	#ifdef ARG_BUILD_DLL
		#define	ARGON_API __declspec(dllexport)
	#else
		#define ARGON_API __declspec(dllimport)
	#endif	

#else
	#error Argon only supports windows atm :(
#endif