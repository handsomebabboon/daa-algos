#include<stdio.h>


int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

void warshall(int arr[10][10],int n){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j] = max(arr[i][j],(arr[i][k] && arr[k][j]));
            }
        }
    }
}

int main(){
    int vertices;
    int mat[10][10];

    printf("enter the the number of vertices\n");
    scanf("%d",&vertices);

    printf("enter the transition matrix\n");

    for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    warshall(mat,vertices);


     for(int i=1;i<=vertices;i++){
        for(int j=1;j<=vertices;j++){
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}