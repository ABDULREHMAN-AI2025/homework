#include <stdio.h>

int main(){
	int subject1;
	int subject2;
	int subject3;
	float obtainedNumber;
	float percentage;
	printf("---------------------PERCENTAGE CALCULATOR---------------------\n\n");
	printf("Enter number of subject 1\n");
	scanf("%d",&subject1);
	printf("Enter number of subject 2\n");
	scanf("%d",&subject2);
	printf("Enter number of subject 3\n");
	scanf("%d",&subject3);
	obtainedNumber=subject1+subject2+subject3;
	printf("The Obtained Number are: %.2f \n",obtainedNumber);
	percentage=(obtainedNumber/300)*100;
	printf("OBTAINED PERCENTAGE IS : %.2f %% \n",percentage);
	return 0;
	
	
	
	
}
