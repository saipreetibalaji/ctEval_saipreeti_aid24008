//doubt
#include<stdio.h>
int linear(int a[],int n,int key);
int main()
{
int a[10],i,key,n;
printf("how many elements?\n");
scanf("%d",&n);
printf("enter array elements:n\n");
for(i=0;i<n;++i)
{ scanf("%d",&a[i]); }
printf("enter element to search:\n");
scanf("%d",&key);
linear(a,n,key);
}
int linear(int a[],int n,int key)
{
int i;
for(i=0;i<n;i++)
if(a[i]==key)
break;
if(i<n)
printf("Element found at index %d\n",i);
else
printf("Element not found\n");
return 0;
}
