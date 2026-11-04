#include <stdio.h>
/**
 * main - A function calculator program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int choice = 1;
 int a = 0;
 int b = 0;
 int result = 0;
 
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
     scanf("%d", &a);
     printf("B: ");
     scanf("%d", &b);
     result = a + b;
     printf("Result: %d\n", result);
   }
}
printf("Bye!\n");
return (0);
}
