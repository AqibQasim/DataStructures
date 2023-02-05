#include <stdio.h>
#include <conio.h>

void main(){
    int num_of_std;
    printf("How many students in the class: ");
    scanf("%d" , & num_of_std);
    int marks[num_of_std];
    for(int i = 0; i < num_of_std; i++)
    {
        printf("Enter marks of student %d : ", i + 1);
        scanf("%d",& marks[i]);
    }
    for(int j = 0; j < num_of_std; j++)
    {
        if(marks[j] >= 90)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : A+ \n");
            printf("GPA : 4.0 \n");
        }
        else if(marks[j] > 84 && marks[j] <90)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : A \n");
            printf("GPA : 4.0 \n");
        }
        else if(marks[j] > 79 && marks[j] <= 84)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : A- \n");
            printf("GPA : 3.8 \n");
        }
        else if(marks[j] > 74 && marks[j] <= 79 )
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : B+ \n");
            printf("GPA : 3.4 \n");
        }
        else if(marks[j] > 70 && marks[j] <= 74)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : B \n");
            printf("GPA : 3.0 \n");
        }
        else if(marks[j] > 67 && marks[j] <= 70)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : B- \n");
            printf("GPA : 2.8 \n");
        }
        else if(marks[j] > 63 && marks[j] <= 67)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : C+ \n");
            printf("GPA : 2.4 \n");
        }
        else if(marks[j] > 60 && marks[j] <= 63)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : C \n");
            printf("GPA : 2.0 \n");
        }
        else if(marks[j] > 56 && marks[j] <= 60)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : C- \n");
            printf("GPA : 1.8 \n");
        }
        else if(marks[j] > 52 && marks[j] <= 56)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : D+ \n");
            printf("GPA : 1.4 \n");
        }
        else if(marks[j] >= 50 && marks[j] <= 52)
        {
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : D \n");
            printf("GPA : 1.0 \n");
        }
        else{
            printf("RESULT OF STUDENT %d \n", j+1);
            printf("Grade : FAIL \n");
            printf("GPA : NILL \n");
        }
    }
    getch();
}
