#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

Queue CreateQueue(){
    Queue PtrQ = (Queue) malloc(sizeof( struct QNode ));
    PtrQ->front = NULL;
    PtrQ->rear = NULL;
    PtrQ->length = 0;
    return PtrQ;
}

int IsFull(Queue PtrQ){
    if(PtrQ->length == MAXSIZE)
        return TRUE;
    else
        return FALSE;
}

void AddQ(Queue PtrQ, int item){
    if(IsFull(PtrQ) == TRUE){
        printf("Operation Error!\nError Code %02x!\n",OVERFLOW);
        return;
    }
    if(IsEmpty(PtrQ) == TRUE){
        struct Node* q = (struct Node*) malloc(sizeof(struct Node));
        q->Num = item;
        q->Next = NULL;
        PtrQ->front = q;
        PtrQ->rear = q;
        PtrQ->length++;
    }
    else{
        struct Node* q = (struct Node*) malloc(sizeof(struct Node));
        q->Num = item;
        q->Next = NULL;
        PtrQ->rear->Next = q;
        PtrQ->rear = q;
        PtrQ->length++;
    }
}

int IsEmpty(Queue PtrQ){
    if(PtrQ->length == 0)
        return TRUE;
    else
        return FALSE;
}

int DeleteQ(Queue PtrQ){
    if(IsEmpty(PtrQ) == TRUE){
        printf("Operation Error!\nError Code %02x!\n",INVALID);
        return NULL;
    }
    else{
        struct Node *q = PtrQ->front;

        // ElementType Data;
        int val = q->Num;

        PtrQ->front = PtrQ->front->Next;
        PtrQ->length--;
        free(q);
        return val;
    }
}