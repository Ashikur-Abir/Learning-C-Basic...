#include<stdio.h>
int main(){
    double num1,num2;
    char op;
    printf("Enter the num1:---");
    scanf("%lf",&num1);
    printf("Enter the operator:");
    scanf(" %c",&op);
    printf("Enter the num2:---");
    scanf("%lf",&num2);

    if(op =='+'){
        printf("Both number sum value is %.2f",num1+num2);
    }

   else if (op == '-') {
     printf("Both number substract value is %.2f",num1-num2);
   }
    
    else if (op == '*') {
     printf("Both number multification value is %.2f",num1*num2);
   }

   else if (op == '/') {
     printf("Both number devision value is %.2f",num1/num2);
   }

   else{
    printf("Invalid operator");
   }


   return 0;
}