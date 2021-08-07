#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

Stack CreateStack(){
    Stack PtrS = (Stack) malloc(sizeof( struct SNode ));
    PtrS->Next = NULL;
    return PtrS;
}

int IsFull(Stack PtrS){
    Stack p = PtrS;
    int i = 0;
    for(; p != NULL ; p = p->Next , i++);
    if(i == MAXSIZE)
        return TRUE;
    else
        return FALSE;
}

void Push(Stack PtrS, int item){
    if(IsFull(PtrS) == TRUE){
        printf("Operation Error!\nError Code %02x!\n",OVERFLOW);
        return;
    }
    else{
        Stack p = (Stack) malloc(sizeof( struct SNode ));
        p->Num = item;
        p->Next = PtrS;
        PtrS = p;
    }
}

int IsEmpty(Stack PtrS){
    if(PtrS->Next == NULL)
        return TRUE;
    else
        return FALSE;
}

struct SNode Pop(Stack PtrS){
    if(IsEmpty(PtrS) == TRUE){
        printf("Operation Error!\nError Code %02x!\n",INVALID);
        return;
    }
    else{
        Stack p = PtrS;
        struct SNode s = *PtrS;
        PtrS = PtrS->Next;
        free(p);
        return s;
    }
}