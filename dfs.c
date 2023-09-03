#include<stdio.h>
#include<stdlib.h>
int adjmat[20][20],n,v,visited[20];
int  s[20],top=-1,count=0;
int main()
{
	int choice,i,j;
	printf("enter the no. of cities");
	scanf("%d",&n);
	printf(" enter the adjacent matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adjmat[i][j]);
		}
	}
	while(i){
		printf("\n1.dfs\n2.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("enter the vertices");
		scanf("%d",&v);
		printf("the nodes reachable from %d are:",v);
		dfs(v);
		break;
		case 2 :exit(0);
		default:printf("\ninvalid");
		
		}
	}
}
int dfs(int v)
{
	
	int i;
	visited[v]=1;
	for(i=1;i<n;i++)
	{
		if(adjmat[v][i]==1&&visited[i]==0)
		{
			printf("%d\t",i);
			dfs(i);
		}
	}
}
















