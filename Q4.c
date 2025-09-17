#include<stdio.h>
int main(){
	float grossSalary;
	float houseRentAllowance;
	float basicSalary;
	float dearnessAllowance;
    printf("---------------------GROSS SALARY CALCULATOR---------------------\n\n");
    printf("Enter your Basic Salary $ \n");
    scanf("%f",&basicSalary);
    houseRentAllowance=0.1*basicSalary;
    dearnessAllowance=0.05*basicSalary;
    grossSalary=houseRentAllowance+dearnessAllowance+basicSalary;
    printf("YOUR GROSS SALARY IS: %.2f $ \n",grossSalary);
    return 0;
    
}
