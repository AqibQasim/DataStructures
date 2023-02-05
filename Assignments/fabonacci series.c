#include<stdio.h>
#include<conio.h>

void main(){
    int n1 = 0;
    int n2 = 1;
    int limit;
    printf("Enter the limit of this series: ");
    scanf("%d",&limit);
    printf("%d \n",n1);
    printf("%d \n",n2);
    for(int i = 3; i<=limit; i++){
        int result = n1+n2;
        printf("%d \n",result);
        n1 = n2;
        n2 = result;
    }
    getch();
}
