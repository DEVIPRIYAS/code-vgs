#include<stdio.h>
 
int main() 
{
   int *p1, *p2;
   int n;
   printf("\nEnter two numbers : ");
   scanf("%d %d", p1, p2);
   n = *p1 + *p2;
   printf("Sum = %d", n);
   return (0);
}
