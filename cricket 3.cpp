#include<stdio.h>
main()

{
int rows=5;
for (int i=5;i>=1;i--){

for (int j=1;j<=5;j++){
if(j<i){
printf(" ");
}else{
printf("%d",j);
}
}
printf("\n");
}







}