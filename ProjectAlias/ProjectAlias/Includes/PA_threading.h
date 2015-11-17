#ifndef PA_THREADING_H_
#define PA_THREADING_H_




#ifdef __linux__
    #include <pthread.h>
#endif

#ifdef __WIN32 || _WIN64
	#include <windows.h>

#endif



typedef struct PA_thread{

#ifdef __linux__
    pthread_t* threadRef;
    int rc;
#endif
#ifdef __WIN32 || _WIN64
	HANDLE threadRef;
	DWORD threadId;

#endif

}pa_thread;

// Function wrapping
#ifdef __linux__
  void PA_createThread(pa_thread *thread, pthread_attr_t * attr, void*(*startRoutine)(void *), void *arg);

#endif
#ifdef __WIN32 || _WIN64
void PA_createThread(pa_thread *thread, LPSECURITY_ATTRIBUTES lpa, size_t stackSize,
	LPTHREAD_START_ROUTINE startAddress, LPVOID lpParam, DWORD creationFlags, LPDWORD lpthreadId);
#endif

#endif // PA_THREADING_H_
