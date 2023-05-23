//depth first search
/*
        1
       / \
      2    6
     /    / \
    4     5  7
   /
   3
adjacency matrix is
                {0,1,0,0,0,1,0},
                {1,0,0,1,0,0,0},
                {0,0,0,1,0,0,0},
                {0,1,1,0,0,0,0},
                {0,0,0,0,0,1,0},
                {1,0,0,0,1,0,1},
                {0,0,0,0,0,1,0}

*/

#include <stdio.h>
#define MAX 20

int main()
{
    int size=9,i,j;
    int visited[MAX],node[MAX],stack[MAX];
    int tos=-1;
    for(i=0;i<size;i++)
    {
        node[i] = i+1;
        visited[i] = 0;
    }
    
    int adj[9][9] = {
                {0,1,0,0,0,1,0},
                {1,0,0,1,0,0,0},
                {0,0,0,1,0,0,0},
                {0,1,1,0,0,0,0},
                {0,0,0,0,0,1,0},
                {1,0,0,0,1,0,1},
                {0,0,0,0,0,1,0}
                };

    //traversal
    printf("The DFS traversal begining at node %d is ",node[0]);
    stack[++tos]=0;
    printf("%d ",node[0]);
    visited[0] = 1;
   
   while(tos>-1)
   {
    for(i=0;i<size;i++)
    {
        // printf("check for %d and %d \n",node[tos],node[i]);
        if(adj[stack[tos]][i]==1 && visited[i] == 0)
        {
            stack[++tos] = i;
            // printf("push %d in stack\n",node[i]);
            printf("%d ",node[i]);
            visited[i] = 1;
            i=0;
        }
    }
    tos--;
    }
  
}