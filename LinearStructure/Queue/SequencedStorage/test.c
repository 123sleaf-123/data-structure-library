#include <stdio.h>
#include <stdlib.h>
#include "BasicOperat.h"

void ShowQueue(Queue Q);

void ShowQueue(Queue PtrQ){
    for(int i = 0 ; i <= PtrQ->Top ; i++){
        printf("Queue->Num[%d] = %d\n",i,PtrQ->Num[i]);
    }
}

int main(){
    Queue PtrQ =  CreateQueue();
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    for(int i = 0 ; i < 10 ; i++){
        AddQ(PtrQ,i);
    }
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    ShowQueue(PtrQ);


    Queue Q =  CreateQueue();
    printf("Is Queue full? %d\n",IsFull(s));
    for(int i = 0 ; i < 1000 ; i++){
        Push(s,i);
    }
    printf("Is Queue full? %d\n",IsFull(s));

    while(PtrQ->Top > -1){
        int i = PtrQ->Top; 
        // 下一行中Pop函数的执行优于i，若将i换为PtrQ->Top，会比预想中少了一
        printf("Queue->num[%d] = %d\n",i,Pop(PtrQ));
        // MinGW在编译时从右到左编译
    }
    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));

    return 0;
}