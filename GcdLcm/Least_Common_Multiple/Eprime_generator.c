#include <stdlib.h>
#include <stdio.h>


int* Eprime_generator(int count)
{
	int i, j;
	int index = 0;
	int max = count * 17;
	int* prime_container;
	_Bool* prime_check;

	prime_container = (int*)malloc(count * sizeof(int));
	if (prime_container == NULL)
	{
		printf("Memory Error : \"prime_container\"\n");
		exit(-1);
	}

	prime_check = (_Bool*)calloc(max, sizeof(_Bool));
	if (prime_check == NULL)
	{
		printf("Memory Error : \"prime_check\"\n");
		exit(-1);
	}

	for (i = 2; i < max; i++)
	{
		for (j = i; (double)i * j < max; j++)
			prime_check[i * j] = 1;
	}

	for (i = 2; index < count; i++)
	{
		if (prime_check[i] == 0)
		{
			prime_container[index] = i;
			index++;
		}
	}

	free(prime_check);

	return prime_container;
}