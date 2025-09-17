#include <stdio.h>

int main() {
    int input;
    printf("Enter a number between 65 to 90 \n");
    scanf("%d",&input);
    if (input>=65 && input <=90)
    {
    	printf("Your Entered Number: %d \n",input);
    	printf("ASCII Character : %c \n",input);
    }
    	else {
    	   printf("INVALID NUMBER IS ENTERED");	
		}
		return 0;
	}

