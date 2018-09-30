#include <stdio.h>
#include <stdlib.h>
void function(float weight);

/* ANSI/ISO C function prototyping */
int main(void)
{
	float weight;    /* user weight             */

	printf("How many water molecules are there?\n");
	printf("Let's check it out.\n");
	printf("Please enter weight of the water in quarts: ");/*get input from the user  */
	scanf("%f", &weight);      /* assume platinum is $1700 per ounce          */
	function(weight);
	getchar();
	return 0;
}

void function(float weight)       /* start of function definition */
{
	float value;     /* platinum equivalent     */
	value = (weight * 950) / (3.0e-23);
	printf("weight = %f\n", weight);
	printf("The number of water molecules is $%.2f.\n", value); // 소숫점 두자리 출력
	system("pause");
}