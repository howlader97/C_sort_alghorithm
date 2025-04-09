#include<stdio.h>
int a[20][20],q[20]={0},visited[20]={0},n,i,j, f=0, r= -1;

main()
{
    int v;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    printf("enter graph data in matrix form:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the starting vertex:");
    scanf("%d",&v);
    bfs(v);
    printf("the node which are reachable are:");
    for(i=0;i<n;i++){
        if(visited[i])
            printf("%d",i);
        else {
            printf("bfs is not possible.not all nodes are reachable");
        }
    }


}
void bfs(int v)
{
    for(i=0;i<n;i++)
        if(a[v][i]==1 && visited[i]==0)
        q[++r]=i;
    if(f<=r){
        visited[q[f]]=1;
        bfs(q[f++]);
    }
}
