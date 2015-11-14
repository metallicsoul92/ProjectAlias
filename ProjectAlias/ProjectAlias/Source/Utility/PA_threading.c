#include "../../Includes/PA_threading.h"


void* PA_createThread(pa_thread *thread, LPSECURITY_ATTRIBUTES lpa, size_t stackSize, LPTHREAD_START_ROUTINE startAddress, LPVOID lpParam, DWORD creationFlags, LPDWORD lpthreadId)
{
	thread->threadRef = CreateThread(lpa, stackSize, startAddress, lpParam, creationFlags, lpthreadId);
	return thread;
}