#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

List MakeEmpty(){
    List PtrL = (List) malloc (sizeof(List));
    PtrL->Next = NULL;
    return PtrL;
}

List FindKth(int K, List PtrL){
    List p = PtrL;
    if(K < 1){
        printf("Operation Error!\nError Code %02x\n",INVALID);
        return NULL;
    }
    int i = 1 ;
    for(; K > i && p != NULL ; p = p->Next, i++);
    if(i == K){
        return p;
    }
    else{
        return NULL;
    }
}

List Find(int X, List PtrL){
    List p = PtrL;
    for(; p->num != X && p->Next != NULL ; p = p->Next);
    if(p->Next == NULL){
        printf("Operation Error!\nError Code %02x\n",NOTFOUND);
        return NULL;
    }
    else{
        return p;
    }
}

List Insert(int X, int i, List PtrL){
    List p,s;
    if(i == 1){
        s = (List) malloc(sizeof(struct LNode));
        s->num = X;
        s->Next = PtrL;
        return s;
    }
    p = FindKth(i - 1,PtrL);
    if(p == NULL){
        printf("Operation Error!\nError Code %02x\n",INVALID);
        return NULL;
    }
    else{
        s = (List) malloc(sizeof(struct LNode));
        s->num = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }
}

List Delete(int i, List PtrL){
    List p,s;
    if(i < 1){
        printf("Operation Error!\nError Code %02x\n",INVALID);
        return NULL;
    }
    if(i == 1){
        s = PtrL;
        if(PtrL != NULL)
            PtrL = PtrL->Next;
        else 
            return NULL;
        free(s);
        return PtrL;
    }
    p = FindKth(i-1,PtrL);
    if(p == NULL){
        printf("Operation Error!\nError Code 1%02x\n",INVALID);
        return NULL;
    }
    else if(p->Next == NULL){
        printf("Operation Error!\nError Code 2%02x\n",INVALID);
        return NULL;;
    }
    else{
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return PtrL;
    }
}

int Length(List PtrL){
    List p = PtrL;
    int i = 0;
    if(PtrL == NULL){
        return i;
    }
    for(; p != NULL ; i++, p = p->Next);
    return i;
}

void ShowList(List L){
    List PtrL = L;
    for(int i = 1 ; PtrL->Next != NULL ; i++){
        printf("%dL = %d\n",i,PtrL->num);
        PtrL = PtrL->Next;
    }
}