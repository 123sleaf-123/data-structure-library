#include "Predefine.h"

List MakeEmpty(){
    List PtrL = (List) malloc (sizeof(List));
    PtrL->Last = -1;
    return PtrL;
}

int FindKth(int K, List PtrL){
    if(K < 1 || K > PtrL->Last){
        printf("Operation Error!\nError Code %02x",INVALID);
        return -1;
    } 
    return PtrL->num[K];
}

int Find(int X, List PtrL){
    int i;
    for(i = 0 ; i <= PtrL->Last && X != PtrL->num[i] ; i++);
    if(i > PtrL->Last){
        printf("Operation Error!\nError Code %02x",OVERFLOW);
        return -1;
    }
    else
        return i;
}

void Insert(int X, int i, List PtrL){
    if(PtrL->Last + 1 == MAXSIZE){
        printf("Operation Error!\nError Code %02x",OVERFLOW);
        return;
    }
    if(i < 1 || i > PtrL->Last + 2){
        printf("Operation Error!\nError Code %02x",INVALID);
        return;
    }
    for(int j = PtrL->Last ; j >= i - 1 ; j--){
        PtrL->num[j+1] = PtrL->num[j];
    }
    PtrL->num[i-1] = X;
    PtrL->Last++;
}

void Delete(int i, List PtrL){
    if(i < 1 || i > PtrL->Last + 1){
        printf("Operation Error!\nError Code %02x",INVALID);
        return;
    }
    for(int j = i ; j <= PtrL->Last ; j++){
        PtrL->num[j-1] = PtrL->num[j];
    }
    PtrL->Last--;
}

int Length(List PtrL){
    return PtrL->Last + 1;
}