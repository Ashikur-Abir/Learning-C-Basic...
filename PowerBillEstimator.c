#include<stdio.h>
int main()
{
float Bill=0,Unit;
char type;
printf(" Please enter the user type (d for domestic, c for commercial):");
scanf("%c",&type);

printf("Unit value:");
scanf(" %f",&Unit);

if(type=='d'){
if(Unit<=100)
{
    Bill=Unit*3.5;
}
else if(Unit<=300)
{
    Bill=Unit*4.5;
}
else if(Unit<=500)
{
    Bill=Unit*5.5;
}
else 
{
    Bill=Unit*3.5;
}
}

//next part
else if(type=='c')
{
if(Unit<=100)
{
    Bill=Unit*5.00;
}
else if(Unit<=300)
{
    Bill=Unit*6.5;
}
else if(Unit<=500)
{
    Bill=Unit*7.5;
}
else 
{
    Bill=Unit*8.5;
}}

else
{
    printf("Error\n");
}


printf("Total Bill=%.2f",Bill);



return 0;
}