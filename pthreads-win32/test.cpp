#include <pthread.h>
#include <chrono>
#include <cstdio>
#include <thread>

void* run_thread(void* unused) {
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    printf("Hello from thread\n");
    return nullptr;
}

int main() {
    pthread_t thread_id;
    pthread_create(&thread_id, nullptr, run_thread, nullptr);
    pthread_join(thread_id, nullptr);
    printf("Main thread exiting\n");
    exit(0);
}
