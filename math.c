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
 int c = (num1 + num2 + num3) / 3;
 printf("Average is %d\n", c);
 if (num1 > num2 && num1 > num3)
  printf("Largest is %d\n", num1);
 else if (num2 > num1 && num2 > num3)
  printf("Largest is %d\n", num2);
 else if (num3 > num1 && num3 > num2)
  printf("Largest is %d\n", num3);
 if (num1 < num2 && num1 <  num3)
  printf("Smallest is %d\n", num1);
 else if (num2 < num1 && num2 < num3)
  printf("Smallest is %d\n", num2);
 else if (num3 < num1 && num3 < num2)
  printf("Smallest is %d\n", num3);

 return 0;
} 


