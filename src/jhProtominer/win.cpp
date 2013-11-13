#include "win.h"

void InitializeCriticalSection(CRITICAL_SECTION *s){}

void EnterCriticalSection(CRITICAL_SECTION *s){
    s->mutex.lock();
}

void LeaveCriticalSection(CRITICAL_SECTION *s){
    s->mutex.unlock();
}

void CreateThread(LPVOID ig1, size_t ig2, LPTHREAD_START_ROUTINE func, LPVOID arg, uint32_t ig3, LPDWORD tid){
    //pthread_t thread;
    //pthread_create(&thread, NULL, func, arg);
	std::thread thread(func,arg);
	thread.detach();

}
