//breadth first search
/*  
     1
    / \
   2    3
  / \  / \
 4   5 6  7

adjacency matrix is
0,1,1,0,0,0,0
1,0,0,1,1,0,0
1,0,0,0,0,1,1
0,1,0,0,0,0,0 
0,1,0,0,0,0,0
0,0,1,0,0,0,0
0,0,1,0,0,0,0
*/

#include <stdio.h>
#define MAX 20

int main()
{
    int size=7,i,j;
    int visited[MAX],node[MAX],queue[MAX];
    int front=0,rear=0;
    for(i=0;i<size;i++)
    {
        node[i] = i+1;
        visited[i] = 0;
    }
    
    int adj[7][7] = {
                {0,1,1,0,0,0,0},
                {1,0,0,1,1,0,0},
                {1,0,0,0,0,1,1},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,0,1,0,0,0,0},
                {0,0,1,0,0,0,0}
                };

    //traversal
    printf("The BFS traversal begining at node %d is ",node[0]);
    queue[rear++] = 0;
    printf("%d ",node[0]);
    visited[0] = 1;
   
   while(front!=rear)
   {
    for(i=0;i<size;i++)
    {
        if(adj[queue[front]][i]==1 && visited[i] == 0)
        {
            queue[rear++] = i;
            printf("%d ",node[i]);
            visited[i] = 1;
        }
    }
    
    front++;
   }
  
}