#include <stdio.h>
#include <stdlib.h>
struct Node 
{
	int data;
	struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;
void enqueue (int x)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL)
	{
		printf("Circular queue is underflow.\n");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;
	if(rear == NULL){
		front = rear = newNode;
		rear->next = front;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
		rear->next = front;
	}
	printf("Successfully inserted.\n");
}
void dequeue(){
	if(front == NULL){
		printf("Circular queue is underflow.\n");
		return;
	}
	struct Node* temp = front;
	if(front == rear){
		front = rear = NULL;
	}else{
		front = front->next;
		rear->next = front;
	}
	int deletedValue = temp->data;
	free(temp);
	printf("Deleted value = %d\n", deletedValue);
}
void display(){
	if(front == NULL){
		printf("Circular queue is empty.\n");
		return;
	}
	struct Node* current = front;
	printf("Elements in the circular queue : ");
	do{
		printf("%d ", current->data);
		current = current->next;
		
	}while(current != front);
	printf("\n");
}
void isEmpty(){
	if(front == NULL){
		printf("Circular queue is empty.\n");
	}else{
		printf("Circular queue is not empty.\n");
	}
}
void size(){
	int count = 0;
	struct Node* current = front;
	if(current != NULL){
		do{
			count++;
			current = current->next;
		}while(current != front);
	}
	printf("Circular queue size : %d\n",count);
}
