#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

Queue CreateQueue(){
    Queue PtrQ = (Queue) malloc(sizeof( struct QNode ));
    PtrQ->rear = -1;
    PtrQ->front = -1;
    return PtrQ;
}

int IsFull(Queue PtrQ){
    if( PtrQ->rear == PtrQ->front)
        return TRUE;
    else
        return FALSE;
}

void AddQ(Queue PtrQ, int item){
    if(PtrQ->rear >= MAXSIZE)
        PtrQ->rear = PtrQ->rear % MAXSIZE;
    if(IsFull(PtrQ) == TRUE){
        printf("Operation Fialed!\nError Code %02x!\n",OVERFLOW);
        return;
    }
    else{
        PtrQ->rear++;
        PtrQ->Num[PtrQ->rear] = item;
    }
}

int IsEmpty(Queue PtrQ){
    if(PtrQ->rear == PtrQ->front)
        return TRUE;
    else
        return FALSE;
}

int DeleteQ(Queue PtrQ){
    if(PtrQ->front >= MAXSIZE)
        PtrQ->front = PtrQ->front % MAXSIZE;
    if(IsEmpty(PtrQ) == TRUE){
        printf("Operation Failed!\nError Code %02x!\n",INVALID);
        return NULL;
    }
    else{
        PtrQ->Num[PtrQ->front] == NULL;
        PtrQ->front++;
        return ;
    }
}