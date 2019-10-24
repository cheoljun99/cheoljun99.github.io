#include <stdio.h>

int main(void)
{
 int num1, num2, num3;
 printf("Enter 3 different integers (1-9):");
 scanf("%d%d%d", &num1, &num2, &num3);
 int a = num1 + num2 + num3;
 printf("Sum is %d\n", a);
 int b = num1 * num2 * num3;
 printf("Product is %d\n", b);

 return 0;

} 

