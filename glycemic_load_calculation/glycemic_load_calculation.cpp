// This is a C programing language code

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	double glycemic_load, carbonhydrate, glycemic_index;//initialize the integer

	printf("Enter Glycemic Index Of Meal : ");
	scanf("%lf", &glycemic_index);
	printf("Enter Net Amount Of Carbonhydrate :  ");
	scanf("%lf", &carbonhydrate);

	glycemic_load = (glycemic_index / 100) * carbonhydrate;//Calculate the Glycemic Load

	if (0 <= glycemic_load && glycemic_load <= 10)//if else chain
		printf("Glycemic load of meal is low.");
	else if (glycemic_load <= 19)
		printf("Glycemic load of meal is medium.");
	else
		printf("Glycemic load of meal is high.");

	return 0;

}