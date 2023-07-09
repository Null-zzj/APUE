#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* pth_fn1(void* p)
{
    pthread_mutex_unlock(&mutex);
    printf("123\n");    
    pthread_mutex_lock(&mutex);
    printf("321\n");

    pthread_mutex_lock(&mutex);
    printf("789\n");
    pthread_exit(NULL);
}

int main()
{
    pthread_t tid;

    int ret;

    if((ret = pthread_create(&tid, NULL, pth_fn1, NULL)) != 0)
    {
        printf("pthread create error\n");
        exit(-1);
    }

    


    pthread_exit(NULL);
}
