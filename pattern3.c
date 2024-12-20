#include<stdio.h>
int main ()
 {
    int n,row,col;
printf("Enter the value of row:-");
scanf("%d",&n);

//for frist loop
for(row=1;row<=n;row++)
{
for(col=1;col<=row;col++)    
{
    printf("%d ",row);
}
printf("\n");
}

//for alphabet value change just have to add row/col+64/96

//for second loop
for(row=n-1;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
        printf("%d ",row);
    }
    printf("\n");
}

}