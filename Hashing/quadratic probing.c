#include<stdio.h>
#include<conio.h>

void insert(){
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int qh[size];
    for(int i =0;i<size;i++){
        qh[i] = -1;
    }
    for(int i =0; i<size;i++){
        int key,hkey,index;
        printf("Enter the value you want to insert: \n");
        scanf("%d",& key);
        hkey = key % size;
        for(int i =0; i< size;i++){
            int power = pow(i,2);
            index = (hkey + power) % size;
            if(qh[index] == -1){
                qh[index] = key;
                break;
            }
        }
        for(int j =0; j<size; j++){
            printf("arr[%d] = %d\n",j,qh[j]);
        }
    }
}
void main(){
    insert();

}
