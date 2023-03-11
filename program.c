//Program to print the largest of two numbers
#include<stdio.h>
int main(void){
	int m1, m2, m3, m4, m5, per;
	printf("Enter marks in 5 subjects: ");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	per = (m1 + m2 + m3 + m4 + m5)*100/500;
	if(per>=60)
		printf("First Division\n");
	
	if((per>=50)&&(per<60))
			printf("Second Division\n");
	if((per>=40)&&(per<50))
			printf("Third Division\n");
	if(per<40)
			printf("Fail\n");
		
	return 0;
}













