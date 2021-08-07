#include "ErrorType.h"
#define MAXSIZE 1000

#define TRUE 1
#define FALSE 0

typedef struct SNode *Stack;
struct SNode{
    // ElementType Data[MAXSIZE]
    int Num[MAXSIZE];

    /*
    
    int Data[MAXSIZE];
    char Data[MAXSIZE];
    float Data[MAXSIZE];
    double Data[MAXSIZE];
    struct Data[MAXSIZE];

    */

    int Top;
};
// Struct SNode S;
// Stack PtrS;

// Create an empty stack the largest length of which is MAXSIZE.
Stack CreateStack();

// Judge whether stack S is full or not.
int IsFull(Stack S);

// void Push(Stack S, ElementType item);
// Push element item into the stack.
void Push(Stack S, int item);

// Judge whether Stack S is empty or not.
int IsEmpty(Stack S);

// ElementType Pop(Stack S);
// Delete and return the top element of stack.
int Pop(Stack S);

// void ShowList(Stack S);

