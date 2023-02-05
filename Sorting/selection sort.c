#include<stdio.h>
#include<conio.h>
void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",& size);
    int num[size];
    for(int i = 0; i < size ; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d",& num[i]);
    }
    int sorting;
    printf("Press '1' for ascending order and '2' for Descending order: ");
    scanf("%d",&sorting);
    if(sorting == 1){
        int s_index;
        for(int i = 0; i< size-1; i++){
            s_index = i;
            for(int j = i+1; j< size ; j++)
            {
                if(num[j] < num[s_index]){
                    s_index = j;
                }
            }
            int temp = num[i];
            num[i] = num[s_index];
            num[s_index] = temp;
        }
        printf("The sorted list: \n");
        for(int i = 0; i<size; i++){
            printf("%d ",num[i]);
        }
    }
    if(sorting == 2){
        int l_index;
        for(int i = 0; i< size-1; i++){
            l_index = i;
            for(int j = i+1; j< size ; j++)
            {
                if(num[j] > num[l_index]){
                    l_index = j;
                }
            }
            int temp = num[i];
            num[i] = num[l_index];
            num[l_index] = temp;
        }
        printf("The sorted list: \n");
        for(int i = 0; i<size; i++){
            printf("%d ",num[i]);
        }
    }
    getch();
}
