#include<stdio.h>
#include<conio.h>

void main(){
    int size,search,flag =0;
    printf("Enter The size of an array: ");
    scanf("%d",& size);
    int num[size];
    for(int i =0; i<size;i++){
        printf("Enter value %d: ", i+1);
        scanf("%d",& num[i]);
    }
    printf("Enter the number u wanna search: ");
    scanf("%d",& search);
    int l = 0,r = size-1,mp;
    while(l <= r){
        mp = (l + r)/2;
        if(search == num[mp]){
            printf("Fount at index %d",mp);
            flag = 1;
            break;
        }
        if(search < num[mp]){
            r = mp - 1;
        }
        if(search > num[mp]){
            l = mp + 1;
        }
    }
    if(flag == 0){
        printf("Not found");
    }
    getch();
}
