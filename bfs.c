#include<stdio.h>
void BFS(int[20][20],int,int[20],int);
void main()
    {
    int n,a[20][20],i,j,visited[20],start;

    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("\nenter adjacency matrix\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        visited[i]=0;
    }
    printf("\nEnter the start node:");
    scanf("%d",&start);

    visited[start]=1;
    BFS(a,start,visited,n);

    for(i=1;i<=n;i++)
    {
        if(visited[i]!=0)
            printf("\nnode %d is reachable",i);
        else
            printf("\nnode %d is not reachable",i);
    }

}
void BFS(int a[20][20], int start, int visited[20], int n){

    int unvisited[20];
    int front=0;
    int rear=0;
    unvisited[0]=start;

    while(front<=rear)
    {
        int u=unvisited[front++];
        for(int v=1;v<=n;v++)
        {
            if(a[u][v]==1&&visited[v]==0)
            {
                unvisited[++rear]=v;
                visited[v]=1;
            }
        }
    }
}
