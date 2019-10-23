#include <stdio.h>
int main ()
{
int nu1,nu2,opt;
printf("Enter two numbers:");
scanf("%d %d",&nu1,&nu2);
printf("1.+ \n2.- \n3.* \n4./ \n");
printf("Please enter your Choice");
scanf("%d",&opt);
switch (opt)
{
case 1:printf("Sum is %d",nu1+nu2);break;
case 2:printf("sub is %d",nu1-nu2);break;
case 3:printf("Multi is %d",nu1*nu2);break;
case 4:printf("Divide is %d",nu1/nu2);break;
default:printf("Invalid input");
}
}