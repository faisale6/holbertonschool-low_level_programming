#include <stdio.h>
/**
 * main - A function calculator program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int choice = 1;
 float a = 0;
 float b = 0;
 float result = 0;
 
while (choice != 0)
{
printf("Simple Calculator\n");
printf("1) Add\n");
printf("2) Subtract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");
printf("Choice: ");

scanf("%d", &choice);
if (choice < 0 || choice > 4)
{
printf("Invalid choice\n");
}
 if (choice == 1)
   {
     printf("A: ");
     scanf("%f", &a);
     printf("B: ");
     scanf("%f", &b);
     result = a + b;
     printf("Result: %g\n", result);
   }
 if (choice == 2)
   {
      printf("A: ");
     scanf("%f", &a);
     printf("B: ");
     scanf("%f", &b);
     result = a - b;
     printf("Result: %g\n", result);
   }
 if (choice == 3)
   {
      printf("A: ");
     scanf("%f", &a);
     printf("B: ");
     scanf("%f", &b);
     result = a * b;
     printf("Result: %g\n", result);
   }
 if (choice == 4)
   {
      printf("A: ");
     scanf("%f", &a);
     printf("B: ");
     scanf("%f", &b);

     if (b == 0)
       {
         printf ("Error: division by zero\n");
       }
     else
       {
	 result = a / b;
	 printf("Result: %g\n", result);

       }
   }
     
}
printf("Bye!\n");
return (0);
}
