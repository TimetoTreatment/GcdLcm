#include <stdio.h>


int Egcd_old(int x, int y);


int main(void)
{
	int x, y;


	scanf("%d %d", &x, &y);

	printf("%d", Egcd_old(x, y));












	return 0;
}