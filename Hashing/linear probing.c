#include<stdio.h>
#include<conio.h>
void insert(){
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int h[size];
    for(int i =0; i< size;i++){
        h[i] = -1;
    }
    for(int i =0; i< size; i++){
        int key,hkey,index;
        printf("Enter the value u want to insert: \n");
        scanf("%d",& key);
        hkey = key % size;
    for(int i = 0 ; i< size; i++){
        index = (hkey + i) % size;
        if(h[index] == -1){
            h[index] = key;
            break;
    }
    }
    int j;
    for(j= 0; j< size; j++){
        printf("arr[%d] = %d\n",j,h[j]);
	}
    }
}
void main(){
    insert();
}
