#include "../../Includes/PA_threading.h"



#if defined(_linux__)
int PA_createThread(pa_thread *thread, pthread_attr_t * attr, void*(*startRoutine)(void *), void *arg){
    return pthread_create(thread->threadRef, attr, startRoutine,arg);
}
#endif // linux functions


#if defined(_WIN32) || defined(_WIN64)
void PA_createThread(pa_thread *thread, LPSECURITY_ATTRIBUTES lpa, size_t stackSize, LPTHREAD_START_ROUTINE startAddress, LPVOID lpParam, DWORD creationFlags, LPDWORD lpthreadId)
{
	thread->threadRef = CreateThread(lpa, stackSize, startAddress, lpParam, creationFlags, lpthreadId);

}
#endif // windows functions
