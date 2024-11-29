//Write a C program with nested functions, where one function sum_array() computes the sum of elements of the 1D array and sum_array() call printsum() and print the sum and the printsum() can call count() function and count the number of elements present in the sum and return to the printsum().

#include<stdio.h>
int sum_array(int arr[]);
int printsum(int sum);
int main()
{
int sum;
int count;
int arr[5] = {10,20,30,40,50};
sum=sum_array(arr);
count = sizeof(arr)/sizeof(arr[0]);
printf("no of elements of given array = %d\n",count);
}
int sum_array(int arr[])
{
int sum=0;
int i;
for(i=0;i<5;i++)
{
sum+=arr[i];
}
printsum(sum);
}
int printsum(int sum)
{
printf("sum = %d\n",sum);
}
