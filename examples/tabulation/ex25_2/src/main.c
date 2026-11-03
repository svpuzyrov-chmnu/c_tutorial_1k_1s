#include "app.h"

#define Z(x, y) (2 * sin((x) + 4 * sqrt(y)))

int main()
{
   
	double a = 0.0, b = 4.0, hx = 0.2;
	double c = 0.0, d = 2.0, hy = 0.1;

	printf("y\\x\t");

	double x = 0;
	
	for (x = a; x <= b; x += hx)
	{
		printf("%2.2f\t", x);
	}

	printf("\n");


	for (double y = c; y <= d; y += hy)
	{
		printf("%2.2f\t", y);
		for (double x = a; x <= b; x += hx)
		{
			double z = Z(x, y);

			printf("%4.2f\t", z);
		}
		printf("\n");
	}

	
    return 0;
}
