#include "factors.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *factorize_number - Function that returns the factors of a given num
  *@num: Number checked
  *@num_factors: Len of the factors array
  *Return: Factors else 0.
  */
int *factorize_number(int num, int *num_factors) 
{
	int i, j;
	int *factors = NULL;
	*num_factors = 0;
	
	factors = malloc(num * sizeof(int));
	
	for(i = 2, j = 0; i < num && j < 2; i++, j++)
	{
		if(num % i == 0)
		{
			factors[j] = i;
			(*num_factors)++;
		}
	}
	return (factors);
}
