#include "BasicOperat.h"

void ShowList(List L);

void ShowList(List PtrL){
    for(int i = 0 ; i < PtrL->Last ; i++){
        printf("PtrL->num[%d] = %d\n",i,PtrL->num[i]);
    }
}

int main(){
    List L;
    L = MakeEmpty();
    for(int i = 1 ; i <= 10 ; i++){
        Insert(i-1,i,L);
    }
    // for(int i = 0 ; i < 5 ; i++){
    //     printf("L[%d] = %d\n",i,L[i]);
    // }
    ShowList(L);
    
    printf("L->num[2] = %d\n",FindKth(2,L));

    printf("The nearest position of number 2 is %d\n",Find(2,L));

    FindKth(200,L);

    return 0;
}