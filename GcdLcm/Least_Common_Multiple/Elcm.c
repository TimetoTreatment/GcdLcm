
int* Eprime_generator(int count);


long long int Elcm(int x, int y)
{
	int i;
	int prime_x[40];
	int prime_y[40];
	int max_x;
	int max_y;
	int index;
	int prime;
	int* prime_container;
	int prime_container_size = 14000;
	int* p, * q;
	long long int sum = 1;

	//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	//
	// Part 1 : Prime factorization.
	//
	//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	prime_container = Eprime_generator(prime_container_size);

	for (index = 0, i = 0; i < prime_container_size; i++)
	{
		prime = prime_container[i];

		for (;;)
		{
			if (x % prime == 0)
			{
				prime_x[index] = prime;
				x /= prime;
				index++;
			}
			else
				break;
		}
	}

	if (x != 1)
	{
		prime_x[index] = x;
		index++;
	}
	max_x = index;

	for (index = 0, i = 0; i < prime_container_size; i++)
	{
		prime = prime_container[i];

		for (;;)
		{
			if (y % prime == 0)
			{
				prime_y[index] = prime;
				y /= prime;
				index++;
			}
			else
				break;
		}
	}

	if (y != 1)
	{
		prime_y[index] = y;
		index++;
	}
	max_y = index;

	//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	//
	// Part 2 : Calculation
	//
	//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	for (p = prime_x, q = prime_y;;)
	{
		if (p < prime_x + max_x && q < prime_y + max_y)
		{
			if (*p < *q)
			{
				sum *= *p;
				p++;
			}
			else if (*p == *q)
			{
				sum *= *p;
				p++;
				q++;
			}
			else
			{
				sum *= *q;
				q++;
			}
		}
		else if (p < prime_x + max_x)
		{
			sum *= *p;
			p++;
		}
		else if (q < prime_y + max_y)
		{
			sum *= *q;
			q++;
		}
		else
			break;
	}

	return sum;
}