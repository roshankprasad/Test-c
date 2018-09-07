#include<stdio.h>
int main(){
int i,j,n;
//printf("enter the value of n:\n");
//scanf("%d",&n);

printf("Hello World");
Printf("Hello Pondicherry");

for(i=1;i<=5;i++){
	for(j=1;j<=9;j++){
	
	if(j>=6-i && j<=4+i)
	printf("*");
	else printf(" ");
	if(j>=5-i || j<=5+i )	
		printf("*");
	else printf(" ");
}
	
	//else printf(" ");}
	
printf("\n");

}
/*
for(i=0;i<=5;i++){
	for(j=1;j<=9;j++){
	if(j<=5-i || j>=5+i)
	printf(" ");
	else 
	printf("*");}
	
printf("\n");
} */
/*
for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){
	
	if(j<=6-i)
	printf("*");
	else 
	printf(" ");



/* if(j<=n-i)		
	printf(" ");
	else
		printf("*");
printf("\n");*/
//printf("\n");
return 0;
}
