#include "ErrorType.h"

#define MAXSIZE 1000

#define TRUE 1
#define FALSE 0


typedef struct LNode *List;
struct LNode{
    // ElementType Data[MAXSIZE]
    int num[MAXSIZE];

    /*
    
    int Data[MAXSIZE];
    char Data[MAXSIZE];
    float Data[MAXSIZE];
    double Data[MAXSIZE];
    struct Data[MAXSIZE];

    */

    int Last;
};

// struct LNode L
// List PtrL

// Initialize an empty linear list
List MakeEmpty();

// ElementType FindKth(int K, List L)
// Return encounterpart element according to order K
int FindKth(int K, List L);

// int Find(ElementType X, List L) exp
// Find the position where element X initially occurs in linear list L
int Find(int X, List L);

// void Insert(ElementType X, int i, List L)
// Insert a new element X before order i in linear list L 
void Insert(int X, int i, List L);

// Delete the very element on order i
void Delete(int i, List L);

// Return the length of linear list L which is n
int Length(List L);

