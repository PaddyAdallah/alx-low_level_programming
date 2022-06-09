#include "main.h"

/**
* _isupper - checks for uppercase letter
* @c: variable
*
* Return: 1 if it is uppercase
* Return: 0 if it is lowecase 
*/

int _isupper(int c)
{
if (c >= 'A' && c<='Z')
{
return (1);
}
else
{
return (0);
}
}
