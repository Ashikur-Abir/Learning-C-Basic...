#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the value of row:");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row); //for coloum value print have to used just col //for binary vlue print just have to do %2
        }
        printf("\n");
    }

return 0;
}