#include <stdio.h>
int main()
{
int num,odd=0,even=0;
do
{
if(num%2==0)
even++;
else
odd++;
printf("enter number");
scanf("%d",&num);
}
printf("total count of odd=%d\ntotal count of even numbers=%d",odd,even);
} while(num!=-99)