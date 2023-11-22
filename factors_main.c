#include <stdio.h>
#include "factors.h"
#include <stdlib.h>
/**
  *main - Entry point
  *Return: 0 on Success
  */
int main(int argc, char *argv[])
{
	int num;
	int *res;
	int num_factors;
	FILE *file;



	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}

	file = fopen(argv[1], "r");
	
	while(fscanf(file, "%d", &num) == 1)
	{
	res = factorize_number(num, &num_factors);
	if (res != NULL)
	{
		if (num_factors == 2)
		{
		printf("%d=%d*%d\n", num, res[0] , res[1]);
		}
	}
	
}
fclose(file);
return (0);
}
