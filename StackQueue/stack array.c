#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[10];
int top = 0;
void push(int value){
    if(top == 10){
        printf("\\STACK OVERFLOW\\ \n");
    }
    else{
        stack[top] = value;
        top++;
    }
}
int pop(){
    if(top == 0){
        printf("\\STACK UNDERFLOW\\ \n");
    }
    else{
        top--;
        return stack[top];
    }
}
void display(){
    for(int i =0; i<top; i++){
        printf("%d \n", stack[i]);
    }
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
