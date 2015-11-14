#ifndef PA_THREADING_H_
#define PA_THREADING_H_

#if defined(__linux__)
    #include <pthread.h>
#endif

#if defined(_WIN32) || defined(_WIN64)
	#include <windows.h>

#endif



typedef struct PA_thread{

#if defined(__linux__)
    pthread_t threadRef;
#endif
#if defined(_WIN32) || defined(_WIN64)
	HANDLE threadRef;

#endif

}pa_thread;

// Function wrapping
#if defined(__linux__)
int *createThread();

#endif
#if defined(_WIN32) || defined(_WIN64)
void *PA_createThread(pa_thread *thread, LPSECURITY_ATTRIBUTES lpa, size_t stackSize,
	LPTHREAD_START_ROUTINE startAddress, LPVOID lpParam, DWORD creationFlags, LPDWORD lpthreadId);
#endif

#endif // PA_THREADING_H_
