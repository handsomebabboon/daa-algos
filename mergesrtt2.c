#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L1[n1],L2[n2];
    for(int i=0;i<n1;i++){
        L1[i] = arr[l + i];
    }

    for(int j=0;j<n2;j++){
        L2[j] = arr[m + j + 1];
    }

    int i=0;int j=0;int k = l;

    while(i < n1 && j < n2){
        if(L1[i] <= L2[j]){
            arr[k] = L1[i];
            i++;
        }
        else{
            arr[k] = L2[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L1[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = L2[j];
        j++;
        k++;
    }
}

void mergesrt(int arr[],int l,int r){
    if(l < r){
    int mid = (l + r) / 2;
    mergesrt(arr,l,mid);
    mergesrt(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}

int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    mergesrt(arr,0,4);

    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}