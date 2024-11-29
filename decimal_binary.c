#include<stdio.h>
#include<math.h>
long decimalToBinary(int decimalnum);
int main()
{
int decimalnum;
printf("enter a decimal no:\n");
scanf("%d",&decimalnum);
printf("equivalent binary no is:%ld\n",decimalToBinary(decimalnum));
return 0;
}

long decimalToBinary(int decimalnum)
{
long binarynum = 0;
int rem, temp = 1;
while(decimalnum!=0)
{
rem=decimalnum%2;
decimalnum=decimalnum/2;
binarynum=binarynum + rem*temp;
temp = temp*10;
}
return binarynum;
}
