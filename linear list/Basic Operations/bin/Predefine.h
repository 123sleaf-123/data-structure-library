//Predefine file
#include "ErrorType.h"
#include "compare.h"
#include "visit.h"

#define TRUE 1
#define FALSE 0


typedef struct aList{
	int num;
	struct aList *pre;
	struct aList *next;
}List,*ListNode;

void InitList (List* L);
void DestoryList(List *L);
void ClearList(List *L);
int ListEmpty(List L);
int ListLength(List L);
void GetElem(List L,int i,List *e);
int LocateElem(List L,List e);
void PriorElem(List L,List cur,List *pre);
void NextElem(List L,List cur,List *next);
void ListInsert(List *L,int i,List e);
void ListDelete(List *L,int i,List *e);
void ListTraverse(List L);

