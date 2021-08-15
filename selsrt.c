#include<stdio.h>
#include<stdlib.h>

void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for(int i=0;i<n-1;i++){
        int j;
        int min = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        if(min != i){
            swap(&arr[min],&arr[i]);
        }
    }
    print(arr,5);
    return 0;
}