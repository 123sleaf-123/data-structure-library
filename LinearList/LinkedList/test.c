#include "BasicOperat.h"

int main(){
    List L;
    L = MakeEmpty();
    for(int i = 1 ; i <= 10 ; i++){
        L = Insert(i,i,L);
    }
    // for(int i = 0 ; i < 5 ; i++){
    //     printf("L[%d] = %d\n",i,L[i]);
    // }
    ShowList(L);
    printf("\nlength = %d\n",Length(L));
    // for(int i = 1 ; i <= 10 ; i++){
    //     L = Delete(i,L);
    // }
    L = Delete(5,L);
    ShowList(L);

    return 0;
}