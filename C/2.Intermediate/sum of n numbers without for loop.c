#include<stdio.h>
#include<conio.h>

int main(){
   clrscr();
   int number,sum;
   printf("Enter the end number till which you want the sum of eg- if you enter 5 then(1+2+3+4+5)=15.\n");
   scanf("%d", &number);
   sum = number * (number + 1)/2;
   printf("The sum is: %d\n", sum); 
   return 0;
}