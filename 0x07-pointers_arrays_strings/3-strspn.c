# include "main.h"
# include <string.h>
/**
* _strspn - a function that gets length of prefix substring
* @s: paramete string for the function _strspn
* @accept: value that is in the string s
* Return: char s
*/
unsigned int _strspn(char *s, char *accept)

{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}

