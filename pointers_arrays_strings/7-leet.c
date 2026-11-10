#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to encode
 *
 * Return: Pointer to the modified string
 */

char *leet(char *str)
{
int j = 0;
int i = 0;
char letters[] = "aeotl";
char numbers[] = "43071";

while (str[i] != '\0')
{
j = 0;

while (letters[j] != '\0')
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
{
str[i] = numbers[j];
}
j++;
}
i++;
}
return (str);
}
