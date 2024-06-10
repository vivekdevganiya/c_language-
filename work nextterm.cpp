#include<stdio.h>

main()
{
	int n,i;
	int t1=0, t2=1, nextterm;
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
	
if(i==1){
printf("%d\n",t1);
continue;
}
if(i==2){
printf("%d\n",t2);
continue;
}

nextterm=t1+t2;
t1=t2;
t2=nextterm;
printf("%d\n",nextterm);

	}
	
	}