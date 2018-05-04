#include<stdio.h>
#include<conio.h>

int main(){
   clrscr();
   int num,sum;
   printf("Enter the end number till which you want the sum of eg- if you enter 5 then(1+2+3+4+5)=15.\n");
   scanf("%d", &num);
   sum = num(num+1)/2;
   printf("The sum is: %d\n", sum); 
}