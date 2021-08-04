#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"

void InitList (List* L){
	L = (List*)malloc(sizeof(List));
}

void DestoryList(List *L){
	ListNode node = L;
	if(node == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		while(L != NULL){
			L = L->next;
			L->pre = NULL;
		}
	}
}

void ClearList(List *L){
	ListNode node = L;
	if(node == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		while(L != NULL){
			L->num = 0;
			L = L->next;
		}
		L = node;
	}
}

int ListEmpty(List L){
	if(&L == NULL)
		return TRUE;
	else
		return FALSE;
}

int ListLength(List L){
	int length;
	ListNode node = &L;
	if(node == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		for(length = 0 ; node != NULL ; node = node->next , length ++);
	}
}

void GetElem(List L,int i,List *e){
	ListNode node = &L;
	if(node == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
		exit(NONVOID);
	}
	else if(i <= 1 || i >= ListLength(L)){
		printf("Operation Error!\nError Code %02x",OVERFLOW);
		exit(OVERFLOW);
	}
	else{
		for(int j = 1 ; j < i ; j++ , node = node->next);
		e = node;
	}
}

int LocateElem(List L,List e){
	ListNode head = &L;
	ListNode node = &e;
	int i;
	if(head == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		for(i=1 ; compare((double)head->num,(double)node->num) != 0 ; i++){
			head = head->next;
			node = node->next;
			if(head == NULL || node == NULL){
				return 0;
			}
		}
	}
}

void PriorElem(List L,List cur_e,List *pre_e){
	ListNode head = &L;
	ListNode node = &cur_e;
	if(head == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		if(head->num == node->num){
			printf("Operation Error!\nError Code %02x",NONDEFINE);
		}
		else{
			head = head->next;
			
			while(head->num != node->num && head->pre != NULL){
				head = head->next;
			}
			
			if(head->num == node->num)
				pre_e = head->pre;
			if(head == NULL)
				printf("Operation Error!\nError Code %02x",NONDEFINE);
			
		}
	}
}

void NextElem(List L,List cur_e,List *next_e){
	ListNode head = &L;
	ListNode node = &cur_e;
	if(head == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
	}
	else{
		while(head->num != node->num && head != NULL){
			head = head->next;
		}
		if(head->num == node->num){
			next_e = node->next;
		}
		if(head == NULL){
			printf("Operation Error!\nError Code %02x",NONDEFINE);
		}
	}
}

void ListInsert(List *L,int i,List e){
	ListNode head = L;
	ListNode node = &e;
	if(head == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
		exit(NONVOID);
	}
	else if(i <= 1 || i >= ListLength(*L) + 1){
		printf("Operation Error!\nError Code %02x",OVERFLOW);
		exit(OVERFLOW);
	}
	else{
		for(int j = 1 ; j < i ; j++ , head = head->next);
		node->next = head->next;
		head->next->pre = node;
		node->pre = head;
		head->next = node;
	}
}

void DeleteInsert(List *L,int i,List *e){
	ListNode head = L;
	if(head == NULL){
		printf("Operation Error!\nError Code %02x",NONVOID);
		exit(NONVOID);
	}
	else if(i <= 1 || i >= ListLength(*L)){
		printf("Operation Error!\nError Code %02x",OVERFLOW);
		exit(OVERFLOW);
	}
	else{
		for(int j = 1 ; j < i ; j++ , head = head->next);
		e = head;
		head->pre->next = head->next;
		head->next->pre = head->pre;
		head->next = head->pre = NULL;
	}
}

void ListTraverse(List L){
	while(1){
		if(visit(L.num) != EOF)
			continue;
		else{
			printf("Operation Error!\nError Code %02x",NONVOID);
			break;
		}
	}
}

