#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define SIZE 1000
int main(){
    clock_t start,end,diff;
    double totaltime;
    int swap;

    int arr[SIZE];
 
    srand(time(0));
    for(int i=0;i<SIZE;i++){
        arr[i]=rand();
      
    }

    start = clock();

    for (int i = 0 ; i <  SIZE - 1 ; i++){
        for (int j = 0 ; j < SIZE - i - 1; j++){
            if (arr[j] > arr[j+1]){
                    swap = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
            }
        }
    }
    
    end = clock();

    totaltime = ((double)(end-start)) /CLOCKS_PER_SEC;
    
    printf("time taken is %lf",totaltime);
    
    printf("Sorted list in ascending order:\n");
    for ( int i = 0 ; i < SIZE ; i++ )
    printf("%d \t", arr[i]);

    return 0;
}