#include<stdio.h>
int main ()
 {
    int n,row,col;
printf("Enter the value of row:-");
scanf("%d",&n);

for(row=1;row<=n;row++)
{
    //print space
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
    //print for col
    for(col=1;col<=row;col++)
    {
        printf("%d",col);
    }
    printf("\n");
}

return 0;
 }