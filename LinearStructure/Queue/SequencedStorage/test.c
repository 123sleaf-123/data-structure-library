#include <stdio.h>
#include <stdlib.h>
#include "BasicOperat.h"

void ShowQueue(Queue Q);

void ShowQueue(Queue PtrQ){
    int j = PtrQ->front;
    for(int i = 0 ; j != PtrQ->rear ; i++, j++){
        if(j >= MAXSIZE)
            j = j % MAXSIZE;
        printf("Queue->Num[%d] = %d\n",i,PtrQ->Num[j]);
    }
}

int main(){
    Queue PtrQ =  CreateQueue();

    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    for(int i = 0 ; i < 10 ; i++){
        AddQ(PtrQ,i);
    }
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    ShowQueue(PtrQ);


    Queue Q =  CreateQueue();
    printf("Is Queue full? %d\n",IsFull(Q));
    for(int i = 0 ; i < 1001 ; i++){
        AddQ(Q,i);
    }
    printf("Is Queue full? %d\n",IsFull(Q));

    for(int i = 0 ; IsEmpty(PtrQ) != TRUE ; i++){
        // 下一行中Pop函数的执行优于i，若将i换为PtrQ->Top，会比预想中少了一
        printf("Queue->num[%d] = %d\n",i,DeleteQ(PtrQ));
        // MinGW在编译时从右到左编译
    }
    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));

    return 0;
}