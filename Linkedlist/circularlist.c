#include<stdio.h>
#include<conio.h>
struct node{
    int data;
    struct node * next;
};
struct node*start = NULL, temp;
int insert(){
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&temp->data);
    if(start == NULL){
        start = temp;
    }
    else{
        struct node * current = start;
        while(current->next != start){
            current = current->next;
        }
        current->next = temp;
    }
    temp ->next = start;
}
void printdata(){
    struct node*temp = start;
    struct node * current = start;
    while(temp->next != start){
        printf("%d \n" , temp ->data);
        temp = temp ->next;
        current = current->next;
    }
    temp->next = start;
    printf("%d", current->data);
}
void searching(){
    int searched,flag =0;
    printf("Enter number to search: \n");
    scanf("%d",&searched);
    struct node*temp = start;
    struct node*current = start;
    while(temp->next != start){
        if(searched == temp->data){
            printf("found \n");
            flag =1;
        }
        temp = temp ->next;
        current = current->next;
    }
    if(searched == current->data){
        printf("found \n");
        flag =1;
    }
    temp->next =start;
    if(flag == 0){
        printf("Not Found \n");
    }
}
void deleted(){
    int todelete,flag =0;
    printf("Enter number to delete");
    scanf("%d",&todelete);
    struct node *curr,*prev = start;
    if(todelete == start->data){
        start = start ->next;
        free(prev);
        flag =1;
    }
    else{
        curr = start ->next;
        prev = start;
        while(curr != start){
            if(todelete == curr ->data){
                prev ->next = curr ->next;
                free(curr);
                flag =1;
                break;
            }
            curr = curr ->next;
            prev = prev->next;
        }
        curr ->next = start;
    }

    if(flag == 0){
        printf("Number Not Found");
    }
}
void main(){
    int choose;
    printf(" Insert(1): \n Print data(2): \n print address(3) Search(4): \n Delete(5): \n Exit(6): \n");
    scanf("%d",&choose);
    while(choose != 6){
        if(choose == 1){
            insert();
        }
        if(choose == 2){
            printf("\n");
            printdata();
            printf("\n");
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
