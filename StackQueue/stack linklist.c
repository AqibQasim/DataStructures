#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};
struct node * top =0;
void push(int value){
    struct node * newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->link = top;
    top = newnode;
}

void pop(){
    struct node * temp;
    temp = top;
    if(top == 0){
        printf("\\underflow\\");
    }
    else{
        printf("%d \n",temp->data);
        top = temp->link;
        free(temp);
    }
}
void display(){
    struct node * temp;
    temp = top;
    if(top == 0){
        printf("\\LIST IS EMPTY\\");
    }
    else{
        while(temp != 0){
            printf("%d \n",temp->data);
            temp = temp->link;
        }
    }
}
void peek(){
    struct node* temp = top;
    prinf("%d", temp->data);
}
void main(){
    int choose;
    printf(" 1 for push \n 2 for pop \n 3 for display \n 4 for exit: \n");
    scanf("%d",& choose);
    while(choose !=4){
        if(choose == 1){
            int pushvalue;
            printf("Enter the push value: ");
            scanf("%d",&pushvalue);
            push(pushvalue);
        }
        if(choose == 2){
            pop();
        }
        if(choose == 3){
            display();
        }
        printf(" 1 for push \n 2 for pop \n 3 for display \n 4 for exit \n");
        scanf("%d",& choose);
    }
}
