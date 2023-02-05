#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[10];
int front = -1;
int rear = -1;
void enqueue(int value){
    if(rear == 9){
        printf("Queue is full");
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else{
        rear++;
        queue[rear] = value;
    }
}
int dequeue(){
    if(front == -1 && rear ==-1){
        printf("Queue empty");
    }
    else if(front == rear){
        int t = queue[front];
        front = rear = -1;
        return t;
    }
    else{
        int t = queue[front];
        front++;
        return t;
    }
}
void display(){
    if(front == -1 && rear == -1){
        printf("Queue Empty");
    }
    else{
        for(int i = front; i<= rear; i++){
            printf("%d \n",queue[i]);
        }

    }
}
void main(){
    int choose;
    printf(" 1 for Enqueue \n 2 for Dequeue \n 3 for display \n 4 for exit: \n");
    scanf("%d",& choose);
    while(choose !=4){
        if(choose == 1){
            int pushvalue;
            printf("Enter the push value: ");
            scanf("%d",&pushvalue);
            enqueue(pushvalue);
        }
        if(choose == 2){
            dequeue();
        }
        if(choose == 3){
            display();
        }
        printf(" 1 for Enqueue \n 2 for Dequeue \n 3 for display \n 4 for exit: \n");
        scanf("%d",& choose);
    }
}
