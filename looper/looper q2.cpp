#include <stdio.h>

int main() 
{
int number;
int count = 0;
printf("Enter any number:- ");
scanf("%lld", &number);
while (number != 0) {
number /= 10; 
count++; 
}
printf("Total number of digits :- %d\n",count);
}