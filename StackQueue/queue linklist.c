#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
	int data;
	struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void Enqueue(){
	int x;
	printf("Enter Number:\n");
	scanf("%d",&x);
	struct node * newnode = malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = NULL;
	if(front==NULL && rear==NULL){
		front = rear = newnode;
	}
	else{
		rear ->next = newnode;
		rear = rear->next;
	}
}

void display(){
	if(front == NULL && rear == NULL){
		printf("Queue Underflow:\n");
	}
	else{
	struct node * temp = front;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp = temp->next;
		}
	}
}

void Dequeue(){
	struct node * temp = front;
	if(front == NULL && rear == NULL){
		printf("Queue Underflow:\n");
	}
	else{
		printf("%d is Dequeued",front->data);
		front = front ->next;
		free(temp);
	}
}

void main(){
	int choice;
	while(choice != 4){
		printf("Enter\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
		scanf("%d",&choice);
		if(choice==1){
			Enqueue();
		}
		if(choice==2){
			Dequeue();
		}
		if(choice==3){
			display();
		}
	}
}
