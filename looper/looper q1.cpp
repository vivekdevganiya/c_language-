#include <stdio.h>

int main() 
{

char current_char = 'a';
do {
printf("%c , ", current_char);
current_char += 4; 
} while (current_char <= 'z');
    
printf("\n");
}