#include <stdio.h>
#include <stdlib.h>
#include "BasicOperat.h"

void ShowStack(Stack S);

void ShowStack(Stack PtrS){
    for(int i = 0 ; i <= PtrS->Top ; i++){
        printf("Stack->Num[%d] = %d\n",i,PtrS->Num[i]);
    }
}

int main(){
    Stack PtrS =  CreateStack();
    printf("Is stack full? %d\n",IsFull(PtrS));
    for(int i = 0 ; i < 10 ; i++){
        Push(PtrS,i);
    }
    printf("Is stack full? %d\n",IsFull(PtrS));
    ShowStack(PtrS);


    Stack s =  CreateStack();
    printf("Is stack full? %d\n",IsFull(s));
    for(int i = 0 ; i < 1000 ; i++){
        Push(s,i);
    }
    printf("Is stack full? %d\n",IsFull(s));

    while(PtrS->Top > -1){
        int i = PtrS->Top; 
        // 下一行中Pop函数的执行优于i，若将i换为PtrS->Top，会比预想中少了一
        printf("Stack->num[%d] = %d\n",i,Pop(PtrS));
        // MinGW在编译时从右到左编译
    }
    printf("Is stack empty? %d\n",IsEmpty(PtrS));

    return 0;
}