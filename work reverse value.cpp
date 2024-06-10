#include<stdio.h>
#include<string.h>

main()
{
int var1,var2,temp;
scanf("%d",&var1);
scanf("%d",&var2);

printf("var1=%d\n",var1);
printf("var2=%d\n",var2);

temp=var1;
var1=var2;
var2=temp;

printf("reverse value var1=%d\n",var1);
printf("reverse value var2=%d\n",var2);




}