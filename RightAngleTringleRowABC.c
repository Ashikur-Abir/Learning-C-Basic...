#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the value of row:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64); //for small latter have to sum +96
        }
        printf("\n");
    }

return 0;
}