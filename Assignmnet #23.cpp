/*Ezigbo Ugochukwu 11/26/2020 ~Happy Thanksgiving~ Calculates maximum n*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	/*declare variables*/
	int n;
	float total, sum;
	
	/*get input variable*/
	printf("Enter total:");
	scanf("%f", &total);
	
	/*error check*/
	while(total<1)
	{
		printf("Invalid input. The total must be positive. Enter the total again:");
		scanf("%f", &total);
	}
	
	/*initiate*/
	n = 1;
	sum = 0;
	
	/*loop*/
	while(total >= sum)
	{
		sum = sum + sqrt(n);
		if(total < sum)
		{
			n--;
			break;
		}
		else
			n++;
	}
	printf("The maximum n is %d", n);
	return 0;
}

/*Enter total:0
Invalid input. The total must be positive. Enter the total again:1
The maximum n is 1
Enter total:5
The maximum n is 3*/
