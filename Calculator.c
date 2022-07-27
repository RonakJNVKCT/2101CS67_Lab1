#include<stdio.h>
int main(){
   int a, b;
   printf("Choose your operation :- \n1:- Addition\n2. Subtraction\n3.Multiplication\n4.Divisoin\n");
   int n;
   scanf("%d", &n);
   printf("Enter two numbers : ");
   scanf("%d%d", &a, &b);
   switch(n){
    case 1:
        printf("Summation of numbers is %d", a+b);
        break;
    case 2:
         printf("Difference of numbers is %d", a-b);
         break;
    case 3:
         printf("Multiplication of number is %d", a*b);
         break;
    case 4:
         printf("Division of two number is %d", a/b);
         break;
  }
  return 0;
 }
 
         
