#include<stdio.h>
#include<conio.h>
void main(){
    int lines;
    printf("Enter number of lines: ");
    scanf("%d",&lines);
    for(int i = 1; i<=lines; i++){
        for(int j = 0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    getch();

}
