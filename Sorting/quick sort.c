#include<stdio.h>
#include<conio.h>
int partition(int a[],int lb,int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(a[start] <= pivot){
            start++;
        }
        while(a[end] > pivot){
            end--;
        }
        if(start<end){
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    int temp2 = a[lb];
    a[lb] = a[end];
    a[end] = temp2;
    return end;
}
void sort(int a[],int lb,int ub){
    if(lb<ub){
        int loc = partition(a,lb,ub);
        sort(a,lb,loc-1);
        sort(a,loc+1,ub);
    }
}
void main(){
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int arr[size];
    for(int i =0; i<size; i++){
        printf("Enter the value of index %d: ",i);
        scanf("%d",& arr[i]);
    }
    printf("\\\\ UNSORTED \\\\\\ \n");
    for(int j =0; j< size; j++){
        printf("arr[%d] = %d \n", j,arr[j]);
    }
    sort(arr,0,size-1);
    printf("\\\\ sorted \\\\\\ \n");
    for(int j =0; j< size; j++){
        printf("arr[%d] = %d \n", j,arr[j]);
    }
}
