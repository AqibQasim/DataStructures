#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node*start = NULL , temp;

void insert(){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data: \n");
    scanf("%d",& temp ->data);
    temp ->next = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        struct node * current = start;
        while(current->next != NULL){
            current = current->next;
        }
        current-> next = temp;

    }
}
void print(){
    struct node * temp = start;
    while(temp != NULL){
        printf("%d \n",temp->data);
        temp = temp ->next;
    }
}
void searching(){
    int searched,flag =0;
    printf("Enter number to search: \n");
    scanf("%d",&searched);
    struct node*temp = start;
    while(temp != NULL){
        if(searched == temp->data){
            printf("found \n");
            flag =1;
            break;
        }
        temp = temp ->next;
    }
    if(flag == 0){
        printf("Not Found \n");
    }
}
void deleted(){
    int todelete;
    printf("Enter number to delete: \n");
    scanf("%d",&todelete);
    struct node * curr ,*prev = start;
    if(todelete == start->data){
        start = start->next;
        free(prev);
    }
    else{
        curr = start->next;
        prev = start;
        while(curr != NULL){
            if(todelete == curr->data){
                prev->next = curr ->next;
                free(curr);
                break;
            }
            curr = curr->next;
            prev = prev ->next;
        }
    }
}
void main(){
    int choose;
    printf(" Insert(1): \n Print(2): \n Search(3): \n Delete(4): \n Exit(5): \n");
    scanf("%d",&choose);
    while(choose != 5){
        if(choose == 1){
            insert();
        }
        if(choose == 2){
            print();
        }
        if(choose == 3){
            searching();
        }
        if(choose == 4){
            deleted();
        }
        printf(" Insert(1): \n Print(2): \n Search(3): \n Delete(4): \n Exit(5): \n");
        scanf("%d",&choose);
    }
}
