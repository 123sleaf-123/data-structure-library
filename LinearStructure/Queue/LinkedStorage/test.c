#include <stdio.h>
#include <stdlib.h>
#include "BasicOperat.h"

void ShowQueue(Queue Q);

void ShowQueue(Queue PtrQ){
    if(IsEmpty(PtrQ) == TRUE){
        printf("Operation Error!\nError Code %02x!\n",INVALID);
        return;
    }
    int j = PtrQ->length;
    struct Node *q = PtrQ->front;
    for(int i = 1 ; i <= j ; i++, q = q->Next){
        if(j >= MAXSIZE)
            j = j % MAXSIZE;
        printf("Queue Node%d->Num = %d\n",i,q->Num);
    }
}

int main(){
    Queue PtrQ =  CreateQueue();

    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    for(int i = 1 ; i <= 10 ; i++){
        AddQ(PtrQ,i);
    }
    printf("Is Queue full? %d\n",IsFull(PtrQ));
    ShowQueue(PtrQ);
    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));


    Queue Q =  CreateQueue();
    printf("Is Queue full? %d\n",IsFull(Q));
    for(int i = 1 ; i <= 1001 ; i++){
        AddQ(Q,i);
    }
    printf("Is Queue full? %d\n",IsFull(Q));

    for(int i = 1 ; IsEmpty(PtrQ) != TRUE ; i++){
        // 下一行中Pop函数的执行优于i，若将i换为PtrQ->Top，会比预想中少了一
        printf("Queue node%d->num = %d\n",i,DeleteQ(PtrQ));
        // MinGW在编译时从右到左编译
    }
    printf("Is Queue empty? %d\n",IsEmpty(PtrQ));
    ShowQueue(PtrQ);

    return 0;
}