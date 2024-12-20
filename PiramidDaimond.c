#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the value of row:");
    scanf("%d",&n);

//upper part
    for(row=1;row<=n;row++)
   {
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
    for(col=1;col<=row;col++)
    {
        printf("* ");
    }
    printf("\n");
   }

//lower part
for(row=n-1;row>=1;row--)
   {
    for(col=1;col<=n-row;col++)
    
        printf(" ");
    
    for(col=1;col<=row;col++)
    
        printf("* ");
    
    printf("\n");
   }


return 0;
}