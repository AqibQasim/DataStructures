#include<stdio.h>
#include<conio.h>

void main(){
    int size,search,flag = 0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int num[size];
    for(int i = 0; i<size ;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Enter the value u wanna search: ");
    scanf("%d",& search);
    for(int i = 0; i < size; i++)
    {
        if(search == num[i])
        {
            printf("Number found at index: %d",i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("not found");
    }
    getch();
}
