int Egcd_old(int small, int large)
{
	int i;
	int temp;
	
	if (small > large)
	{
		temp = small;
		small = large;
		large = temp;
	}

	for (i = small; i > 1; i--)
	{
		if (small % i == 0 && large % i == 0)
		{
			return i;
		}
	}

	return i;
}