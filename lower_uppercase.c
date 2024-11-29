#include<stdio.h>
int main()
{
char ch;
printf("enter your character:\n");
scanf("%c",&ch);
if (ch>='A' && ch<='Z')
{ printf("the character is in upper case\n"); }
else if (ch>='a' && ch<='z')
{ printf("the character is in lower case\n"); }
else
{ printf("it is neither in upper case nor lower case\n"); }
}
