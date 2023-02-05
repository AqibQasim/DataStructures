#include<stdio.h>
#include<conio.h>
void main(){
    int lines;
    printf("Enter number of lines: ");
    scanf("%d",&lines);
    for(int i = 1; i<= lines;i++){
        for(int j = i; j < lines; j++){
            printf(" ");
        }
        for(int k = 1; k < (2*i); k++){
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
}
