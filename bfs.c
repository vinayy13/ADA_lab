#include<stdio.h>
#include<time.h>
#include<windows.h>
void bfs(int a[20][20],int source,int visited[20],int n)
{
int q[20],front,u,rear,v;
front=rear=0;
q[rear]=source;
visited[source]=1;
while(front<=rear)
{
u=q[front];
front=front+1;
for(v=1;v<=n;v++)
if(a[u][v]==1&&visited[v]==0)
{
q[++rear]=v;
visited[v]=1;
}
}
}
void main()
{
clock_t s,e;
int n,a[20][20],i,j,visited[20],source;
printf("Enter the no of vertex:");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
printf("Enter the source node: \n");
scanf("%d",&source);
s=clock();
bfs(a,source,visited,n);
Sleep(200);
e=clock();
for(i=1;i<=n;i++)
{
if(visited[i]!=0)
printf("\n node %d is reachable ",i);
else
printf("\n node %d is not reachable",i);
}
printf("\nthe time taken for sorting the elements where n:%d is %f",n,((double)(e-s))/CLK_TCK);
}
