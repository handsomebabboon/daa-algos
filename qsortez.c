#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<limits.h>
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low,int up){
    int i = low;
    int j = up;
    int pivot = arr[low];
    while(i < j){
        do{
            i++;
        }while(arr[i]<=pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
            swap(&arr[i],&arr[j]);
        }

    }
    swap(&arr[low],&arr[j]);
    return j;
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void quicksort(int arr[],int low,int up){
    int j;
    if(low < up){
        j = partition(arr,low,up);
        quicksort(arr,low,j);
        quicksort(arr,j+1,up);
    }
}
int main(){

    int arr[99];
    srand(time(0));
    for(int i=0;i<99;i++){
        arr[i] = rand();
    }
    arr[98] = INT_MAX;
    quicksort(arr,0,98);
    
    printarray(arr,99);
    return 0;
}