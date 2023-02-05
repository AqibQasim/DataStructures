#include<stdio.h>
#include<conio.h>

int merge(int a[],int lb,int mid,int ub){
    int i = lb;
    int j = mid +1;
    int k = lb;
    int b[ub+1];
    while(i<=mid && j<=ub){
        if(a[i]<= a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(int k =lb; k<= ub; k++){
        a[k] = b[k];
    }
}
void mergesort(int a[],int lb,int ub){
    if(lb<ub){
        int mid = (lb + ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
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
    mergesort(arr,0,size-1);
    printf("\\\\ sorted \\\\\\ \n");
    for(int j =0; j< size; j++){
        printf("arr[%d] = %d \n", j,arr[j]);
    }
}
