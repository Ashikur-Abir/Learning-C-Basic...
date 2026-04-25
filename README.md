# Learning-C-Basic...
Topics:-


#include<stdio.h>
int main(){
int n,r,i,j,count=0,safefound=0;
printf("Process: ");
scanf("%d",&n);
printf("Resources: ");
scanf("%d",&r);

int alloc[n][r],max[n][r],need[n][r],avail[r],finished[n],safe_sequence[n];
printf("Enter the allocation matrix: ");
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++)
    {
        scanf("%d",&alloc[i][j]);
    }
}
printf("Enter the max matrix: ");
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++)
    {
        scanf("%d",&max[i][j]);
    }
}
printf("Enter the available resources: ");
for(i=0;i<r;i++)
{
    scanf("%d",&avail[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++)
    {
        need[i][j]=max[i][j]-alloc[i][j];
    }
}
for(i=0;i<n;i++)
{
    finished[i]=0;
}
while(count<n)
{
    safefound=0;
    for(i=0;i<n;i++)
    {
        if(finished[i]==0)
        {
            int safe=1;
            for(j=0;j<r;j++)
            {
                if(need[i][j]>avail[j]){
                safe=0;
                break;
            }}
            if(safe)
            {
                for(int k=0;k<r;k++)
                {
                    avail[k]=avail[k]+alloc[i][k];
                }
                safe_sequence[count++]=i;
                finished[i]=1;
                safefound=1;
                
            }
        }
    }
    if(!safefound)
    {
        printf("Deadlock");
        return 0;
    }
}
printf("safe");
for(i=0;i<n;i++)
{
    printf("p%d ",safe_sequence[i]);
}

}
