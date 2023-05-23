//a* search 
#include <stdio.h>

int main()
{
    
    int adj[6][6]={
                        {0,9,100,8,100,100},
                        {9,0,7,100,8,100},
                        {100,7,0,5,100,6},
                        {8,100,5,0,100,10},
                        {100,8,100,100,0,9},
                        {100,100,6,10,9,0}};
    int h[] = {12,4,3,6,7,0};
    int f[20];
    int visited[] ={0,0,0,0,0,0};
    int g[] = {100,100,100,100,100,100};
    int i,j,size=6,current;
    int temp;
    int count=0;
//    for(i=0;i<size;i++)
//    {
//    	for(j=0;j<size;j++)
//    		printf("%d ",adj[i][j]);
//    	printf("\n");
//	}
//	for(i=0;i<size;i++)
//		printf("%d ",h[i]);
	int queue[20];
	int front=0,rear=0;
	queue[rear] = 0;
	rear++;
	g[0] = 0;
	f[0] = g[0] + h[0];
	visited[0] = 1;
	while(front<rear)
	{
		//do stuff
		current= queue[front];
		for(i=0;i<size;i++)
		{
			if(visited[i] == 0)
			{
				if(adj[current][i] !=0 && adj[current][i] != 100)
				{
					queue[rear] = i;
					rear++;
					if(g[i]>g[current] + adj[current][i])
					{
//						printf("since %d > %d + %d\n",g[i],g[current],adj[current][i]);
						g[i] = g[current] + adj[current][i];
					}
					f[i] = g[i] + h[i];
//					printf("%d + %d = %d",g[i],h[i],f[i]);
				}
			}
		}
		front++;
		visited[current] = 1;
		//sort queue
		for(i=front;i<rear;i++)
		{
			for(j=front;j<rear;j++)
			{
				if(f[queue[i]]<f[queue[j]])
				{
					temp = queue[i];
					queue[i] = queue[j];
					queue[j] = temp;
				}
			}
		}
		
	}
	printf("The functional value of each node is:\n");
	for(i=0;i<size;i++)
	printf("%d node: %d\n",i,f[i]);
}