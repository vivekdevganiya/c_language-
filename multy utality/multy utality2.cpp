#include<stdio.h>
main()

{
float amount;
float rate;
float time;
float sum;

printf("enter the client amount:");
scanf("%f",&amount);

printf("enter the client rate:");
scanf("%f",&rate);

printf("enter the client time:");
scanf("%f",&time);

sum=(amount*rate*time)/100;
if(sum<0){
printf("your value is nagative i cant see your value");
}else{
printf("your value is positive\n");
printf("%.1f",sum);
}
}