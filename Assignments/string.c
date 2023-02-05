#include<stdio.h>
#include<conio.h>

void main(){
    char name[20];
    printf("Enter String: ");
    scanf("%s", name);
    int v_count = 0;
    int t_count;
    int c_count =0;
    t_count = strlen(name);
    printf("Total count: %d \n", t_count);
    for(int i = 0; i< strlen(name); i ++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            v_count = v_count + 1;
        }
        if(name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u'){
            c_count = c_count + 1;
        }

    }
    printf("vowels : %d \n",v_count);
    printf("Consonent : %d",c_count);
    getch();
}
