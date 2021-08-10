#include "ErrorType.h"
#define MAXSIZE 1000

#define TRUE 1
#define FALSE 0

typedef struct QNode *Queue;
struct Node{
    // ElementType Data
    int Num;

    /*
    
    int Data;
    char Data;
    float Data;
    double Data;
    struct Data;

    */

    struct Node *Next;
};

// Linked queue structure
struct QNode {
    // Point to the head node of queue
    struct Node *front; 

    // point to the tail node of queue
    struct Node *rear;
    int length;
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