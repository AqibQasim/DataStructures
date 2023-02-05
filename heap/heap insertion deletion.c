#include<stdio.h>
#include<conio.h>
#include <math.h>

int size =0;
int arr[10];
int index = 0;
int swap(int a , int b){
    int c = a;
    a = b;
    b = c;
}
int heapinsertion(int arr[] , int value){
    int i,parent;
    arr[size++] = value;
    int last_update = arr[size-1];
    i = size-1;
    while(i>1){
        parent = floor((i-1)/2);
        if(arr[parent] < last_update){
            swap(arr[parent],last_update);
            i = parent;
        }
        else{
            return;
        }
    }
}
void display(int arr[], int size){
    for(int j = 1; j <= size; j++){
        printf("%d", arr[j]);
        printf("\n");
    }
}
void main(){
    int value;
    int choose;
    printf("press 1 for insert and 2 for print: ");
    scanf("%d",&choose);
    while(choose!=3){
        if(choose == 1){
            printf("Enter the value: ");
            scanf("%d",&value);
            heapinsertion(arr,value);
        }
        else if(choose == 2){
            display(arr,size);
        }
        printf("press 1 for insert and 2 for print: ");
        scanf("%d",&choose);
    }
}
