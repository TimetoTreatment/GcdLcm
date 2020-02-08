long long int Elcm_old(int small, int large)
{
	long long int i;
	int temp;
	long long int max = (long long int)small * large;

	if (small > large)
	{
		temp = small;
		small = large;
		large = temp;
	}

	for (i = large; i < max; i++)
	{
		if (i % small == 0 && i % large == 0)
		{
			return i;
		}
	}

	return i;
}