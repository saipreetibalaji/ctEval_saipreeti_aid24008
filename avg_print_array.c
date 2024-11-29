#include<stdio.h>
float findavg(int marks[]);
int printarray(int marks[]);
int main()
{
float avg;
int marks[5] = {99,90,96,93,95};
printarray(marks);
printf("program done\n");
}
int printarray(int marks[])
{
int i;
float avg;
for(i=0;i<5;i++)
{
printf("%d\t",marks[i]);
}
avg = findavg(marks);
printf("average marks = %lf\n",avg);
printf("average done\n");
}
float findavg(int marks[])
{
int i;
float sum=0;
float avg;
for(i=0;i<5;i++)
{
sum+=marks[i];
}
printf("sum = %lf\n",sum);
avg=sum/5;
return avg;
}
