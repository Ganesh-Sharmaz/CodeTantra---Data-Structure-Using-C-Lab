#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int circularQueue[MAX];
int front = -1, rear = -1;
void enqueue(int element){
	if((front == 0 && rear == MAX -1) || (rear == front - 1 && front != -1)){
		printf("Circular queue is overflow.\n");
	}else if (front==-1){
		front = rear =0;
		circularQueue[rear] = element;
		printf("Successfully inserted.\n");
	}else if(rear == MAX -1 && front !=0){
		rear = 0;
		circularQueue[rear] = element;
		printf("Successfully inserted.\n");
	}else{
		rear++;
		circularQueue[rear] = element;
		printf("Successfully inserted.\n");
	}
}
void dequeue(){
	if(front == -1){
		printf("Circular queue is underflow.\n");
	}else if(front == rear){
		printf("Deleted element = %d\n", circularQueue[front]);
		front = rear = -1;
	}else{
		printf("Deleted element = %d\n", circularQueue[front]);
		if(front == MAX -1)
		front = 0;
		else
		front++;
	}
}
void display(){
	if (front == -1){
		printf("Circular queue is empty.\n");
	}else {
		printf("Elements in the circular queue : ");
		if(rear >=front){
			for(int i=front; i<=rear;i++){
				printf("%d ", circularQueue[i]);
			}
		}else{
			for(int i = front; i < MAX; i++){
				printf("%d ",  circularQueue[i]);
			}
			for(int i = 0; i<= rear; i++){
				printf("%d ",circularQueue[i]);
			}
		}
		printf("\n");
	}
}
void isEmpty(){
	if (front == -1){
		printf("Circular queue is empty.\n");
	}else{
		printf("Circular queue is not empty.\n");
	}
}
void size(){
	if(front == -1){
		printf("Circular queue size : 0\n");
	}else if(front <=rear){
		printf("Circular queue size : %d\n", rear - front + 1);
	}else{
		printf("Circular queue size : %d\n", MAX - front + rear + 1);
	}
}
