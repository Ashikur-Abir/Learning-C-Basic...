#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the value of row:");
    scanf("%d",&n);

    //first part
    for(row=1;row<=n;row++)
   {
    for(col=1;col<=n-row;col++)
    {
        printf("  ");
    }
    for(col=1;col<=2*row-1;col++)
    {
        printf("* ");
    }
    printf("\n");
   }

//2nd part
    for(row=n-1;row>=1;row--)
   {
    for(col=1;col<=n-row;col++)
    {
        printf("  ");
    }
    for(col=1;col<=2*row-1;col++)
    {
        printf("* ");
    }
    printf("\n");
   }


return 0;
}