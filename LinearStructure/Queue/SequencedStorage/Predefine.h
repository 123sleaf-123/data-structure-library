#include "ErrorType.h"
#define MAXSIZE 1000

#define TRUE 1
#define FALSE 0

typedef struct QNode *Queue;
struct QNode{
    // ElementType Data[MAXSIZE]
    int Num[MAXSIZE];

    /*
    
    int Data[MAXSIZE];
    char Data[MAXSIZE];
    float Data[MAXSIZE];
    double Data[MAXSIZE];
    struct Data[MAXSIZE];

    */

    // Footer element position
    int rear;

    // Header element position
    int front;
};
// Struct QNode Q;
// Queue PtrQ;

// Create an empty queue, the largest length of which is MAXSIZE.
Queue CreateQueue();

// Judge whether Queue Q is full or not.
int IsFull(Queue Q);

// void AddQ(Queue Q, ElementType item);
// Insert element data item into the Queue.
void AddQ(Queue Q, int item);

// Judge whether Queue Q is empty or not.
int IsEmpty(Queue Q);

// ElementType DeleteQ(Queue Q);
// Delete and return the front element of queue.
int DeleteQ(Queue Q);

// void ShowList(Queue Q);

