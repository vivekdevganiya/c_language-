#include<stdio.h>
int main(){

int score;
char grade;

printf("Enter your score : ");
scanf("%d",&score);

if(score>=85 && score<=100){

	printf("Your grade is A.\n");
	grade='A';

}else if(score>=70 && score<=85){

	printf("Your grade is B.\n");
	grade='B';

}else if(score>=55 && score<=70){

	printf("Your grade is C.\n");
	grade='C';

}else if(score>=40 && score<=55){

	printf("Your grade is D.\n");
	grade='D';

}else{

	grade='F';

}

switch(grade){

	case 'A' :
		printf("Excellent work!\n");

		break;

	case 'B' :
		printf("Well done\n");

		break;

	case 'C' :
		printf("Good job\n");

		break;

	case 'D' :
		printf("You passed, but you could do better\n");

		break;

	case 'F' :
		printf("Sorry, you failed\n");

		break;

}

if(score>=40){

	printf("Congratulations! You are eligible for the next level.");

}else{

	printf("Please try.");

}

}