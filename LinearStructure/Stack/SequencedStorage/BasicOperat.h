#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

Stack CreateStack(){
    Stack PtrS = (Stack) malloc(sizeof( struct SNode ));
    PtrS->Top = -1;
    return PtrS;
}

int IsFull(Stack PtrS){
    if(PtrS->Top == MAXSIZE - 1)
        return TRUE;
    else
        return FALSE;
}

void Push(Stack PtrS, int item){
    if(IsFull(PtrS) == 1){
        printf("Operation Error!\nError Code %02x!\n",OVERFLOW);
        return;
    }
    else{
        PtrS->Top++;
        PtrS->Num[PtrS->Top] = item;
    }
}

int IsEmpty(Stack PtrS){
    if(PtrS->Top == -1)
        return TRUE;
    else
        return FALSE;
}

int Pop(Stack PtrS){
    if(PtrS->Top == -1){
        printf("Operation Error!\nError Code %02x!\n",INVALID);
        return NULL;
    }
    else{
        int S_top = PtrS->Num[PtrS->Top];
    PtrS->Num[PtrS->Top] = NULL;
    PtrS->Top--;
    return S_top;
    }
}