#include <stdio.h>

int main() 
{
int number, first_digit, last_digit, sum;

printf("Enter a number: ");
scanf("%d", &number);
last_digit = number % 10;
while (number >= 10) {
number /= 10;
}
first_digit = number;
sum = first_digit + last_digit;
printf("Sum of first and last digits: %d\n", sum);
}
