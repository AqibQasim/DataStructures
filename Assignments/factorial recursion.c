#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int result = 0;
int factorial(int n){
    if(n >= 1){
        return n * factorial(n -1);
    }
    else{
        return 1;
    }

}
void main(){
    int num;
    printf("Enter the number to find factorial: ");
    scanf("%d",&num);
    printf(factorial(num));
}
