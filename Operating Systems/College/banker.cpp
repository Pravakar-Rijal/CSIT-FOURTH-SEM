#include <stdio.h>
#include <conio.h>
int max[10][10], alloc[10][10], need[10][10];
int avail[10], i, j, p, r, finish[10] = {0}, flag = 0;

int fun()
{
    while (1)
    {
        for (flag = 0, i = 0; i < p; i++)
        {
            if (finish[i] == 0)
            {
                for (j = 0; j < r; j++)
                {
                    if (need[i][j] <= avail
                                          [j])
                        continue;
                    else
                        break;
                }
                if (j == r)
                {
                    for (j = 0; j < r; j++)
                        avail[j] += alloc[i][j];
                    flag = 1;
                    finish[i] = 1;
                }
            }
        }
        if (flag == 0)
            break;
    }
    return 0;
}

int main()
{
    printf("\n\nSIMULATION OF DEADLOCK PREVENTION");
    printf("\nEnter no. of processes, resources\n");
    scanf("%d%d", &p, &r);
	printf("\nEnter allocation matrix\n");
	for(i=0;i<p;i++)
	for(j=0;j<r;j++)
	scanf("\n%d",&alloc[i][j]);
printf("\nenter max matrix\n");
for(i=0;i<p;i++) /*reading the maximum matrix and availale matrix*/ for(j=0;j<r;j++)
scanf("\n%d",&max[i][j]); 
printf("\nenter available matrix\n"); 
for(i=0;i<r;i++)
scanf("\n%d",&avail[i]); 
for(i=0;i<p;i++);
for(j=0;j<r;j++) 
need[i][j]=max[i][j]-
alloc[i][j]; fun(); /*calling function*/
if(flag==0)
{
        if (finish[i] != 1)
        {
            printf("\n\n Failing :Mutual exclusion");
            for (j = 0; j < r; j++)

            { /*checking for mutual exclusion*/
                if (avail[j] < need[i][j])
                    avail[j] = need[i][j];
            }
            fun();
            printf("\n By allocating required resources to process %d dead lock is prevented ", i);
            printf("\n\n lack of preemption");
            for (j = 0; j < r; j++)
            {
                if (avail[j] < need[i][j])
                    avail[j] = need[i][j];
                alloc[i][j] = 0;
            }
            fun();
            printf("\n\n daed lock is prevented by allocating needed resources"); 
            printf(" \n \n failing:Hold and Wait condition ");
for(j=0;j<r;j++)
{
                if (avail[j] < need[i][j])
                    avail[j] = need[i][j];
}
fun( );
printf("\n AVOIDING ANY ONE OF THE CONDITION, U CAN PREVENT DEADLOCK");
        }
}
getch( );
return 0;
}
