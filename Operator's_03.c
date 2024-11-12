#include<stdio.h>
int main()
{
int A=100;
int B=99;
//###
if (A!=B && B>A){
printf("True\n");
}
else { 
printf("False\n");
}
//###
if(A>=B||B==A){
    printf("True\n");
}
else{
    printf("False\n");
}
//###
if(!(A!=B&&B>A)){
printf("True\n");
}
else{
    printf("False\n");
}

if (!(A>B||B==A)){
    printf("True");
}
else{
    printf("False");
}

}