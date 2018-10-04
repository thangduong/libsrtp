#ifdef __linux__
#include <config_linux.h>
#else
	#ifdef __WIN32__
#include <config_win32.h>
	#else
#error Unknown platform!
	#endif
#endif
