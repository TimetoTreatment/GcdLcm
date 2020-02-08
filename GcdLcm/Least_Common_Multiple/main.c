#include <stdio.h>
#include <math.h>
#include <time.h>

long long int Elcm(int x, int y);
long long int Elcm_old(int x, int y);


int main(void)
{
	int x, y;
	long long int value;
	clock_t clock1;
	clock_t clock2;


	printf("\n * input X : ");
	scanf("%d", &x);
	printf(" * input Y : ");
	scanf("%d", &y);

	clock1 = clock();
	value = Elcm(x, y);
	clock2 = clock();
	printf("\n\n");
	printf("      :: Elcm ::\n");
	printf(" ---------------------\n");
	printf("  - GCD Value : %lld\n", value);
	printf("  - Time (ms) : %d\n", clock2 - clock1);
	printf(" ---------------------\n");

	clock1 = clock();
	value = Elcm_old(x, y);
	clock2 = clock();
	printf("\n\n");
	printf("    :: Elcm_old ::\n");
	printf(" ---------------------\n");
	printf("  - GCD Value : %lld\n", value);
	printf("  - Time (ms) : %d\n", clock2 - clock1);
	printf(" ---------------------\n");


	return 0;
}