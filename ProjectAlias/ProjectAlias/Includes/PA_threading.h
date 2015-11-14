#ifndef PA_THREADING_H_
#define PA_THREADING_H_

#if defined(__linux__)
    #include <pthread.h>
#endif

#if defined(_WIN32) || defined(_WIN64)

    //Include Windows threading library here

#endif



typedef struct PA_thread{

#if defined(__linux__)
    pthread_t thread;
#endif
#if defined(_WIN32) || defined(_WIN64)
    //Include Windows threading object here
#endif

}pa_thread;

#endif // PA_THREADING_H_

