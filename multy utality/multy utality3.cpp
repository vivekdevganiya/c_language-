#include<stdio.h>
main()

{
int first_angel,second_angel;
int third_angel;

printf("enter your first angel value:");
scanf("%d",&first_angel);

printf("enter your second angel value:");
scanf("%d",&second_angel);

third_angel=180-(first_angel+second_angel);
printf("%d",third_angel);

}