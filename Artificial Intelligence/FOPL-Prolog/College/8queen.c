#include <stdio.h>
int board[8][8];
int isSafe(int row,int col)
{
    int i,j;
    //check the column if there is any queen
    for(i=0;i<8;i++)
    {
        if(board[i][col] == 1)
            return 0;
    }
    //check the row if there is any queen
    for(i=0;i<8;i++)
    {
        if(board[row][i]==1)
            return 0;
    }
    //check the diagonal if there is any queen
     for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return 0;
    for (i = row, j = col; i < 8 && j >= 0; i++, j--)
        if (board[i][j] == 1)
            return 0;
    //if no queen found
    return 1;
}
int solve(int col)
{
    int i,j;
    if(col == 8)
    {
        //shud have finished and will print the board here
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
                printf("%d ",board[i][j]);
            printf("\n");
        }
        return 1;
    }
    for(i=0;i<8;i++)    //check each row if it is safe to keep queen there
    {
        if(isSafe(i,col))
        {
            //put queen there
            board[i][col] = 1;
            if(solve(col+1))
                return 1;
            board[i][col] = 0;
        }
    }
    return 0;
}
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            board[i][j] = 0;
    }
    //solve
    if(!solve(0))  //starting at column 0
        printf("No solution");
}