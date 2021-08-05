#include "BasicOperat.h"

void ShowList(List L);

void ShowList(List L){
    for(int i = 0 ; i < 5 ; i++){
        printf("%dL = %d\n",i,L->num);
        L = L->Next;
    }
}

int main(){
    List L;
    L = MakeEmpty();
    for(int i = 1 ; i <= 10 ; i++){
        L->num[i] = i;
    }
    // for(int i = 0 ; i < 5 ; i++){
    //     printf("L[%d] = %d\n",i,L[i]);
    // }
    ShowList(L);

    return 0;
}