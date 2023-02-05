#include<stdio.h>
#include<conio.h>

void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",& size);
    int num[size];
    for(int i =0; i<size; i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",& num[i]);
    }
    int sorting;
    printf("Press '1' for ascending order and '2' for Descending order: ");
    scanf("%d",&sorting);
    if(sorting == 1){
        for(int i =0; i<size-1;i++){
            for(int j =0; j< size-i-1; j++){
                if(num[j] > num[j+1]){
                    int temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                }

            }
        }
        printf("The sorted list: \n");
        for(int i = 0; i<size; i++){
            printf("%d ",num[i]);
        }
    }
    if(sorting == 2){
        for(int i =0; i<size-1;i++){
            for(int j =0; j< size-i-1; j++){
                if(num[j] < num[j+1]){
                    int temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                }

            }
        }
        printf("The sorted list: \n");
        for(int i = 0; i<size; i++){
            printf("%d ",num[i]);
        }
    }
    getch();
}
