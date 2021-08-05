//Predefine file
#include "ErrorType.h"
//#include "compare.h"
//#include "visit.h"

#define MAXSIZE 1000

#define TRUE 1
#define FALSE 0


typedef struct LNode *List;
struct LNode{
    // ElementType Data[MAXSIZE]
    int num;

    /*
    
    int Data[MAXSIZE];
    char Data[MAXSIZE];
    float Data[MAXSIZE];
    double Data[MAXSIZE];
    struct Data[MAXSIZE];

    */

    List Next;
};

// struct LNode L
// List PtrL

// Initialize an empty linear list
List MakeEmpty();

// ElementType FindKth(int K, List L)
// Return encounterpart element according to order K
List FindKth(int K, List L);

// int Find(ElementType X, List L) exp
// Find the position where element X initially occurs in linear list L
List Find(int X, List L);

// void Insert(ElementType X, int i, List L)
// Insert a new element X before order i in linear list L 
List Insert(int X, int i, List L);

// Delete the very element on order i
List Delete(int i, List L);

// Return the length of linear list L which is n
int Length(List L);

void ShowList(List L);

