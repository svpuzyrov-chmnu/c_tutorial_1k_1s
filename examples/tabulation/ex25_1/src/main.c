#include "app.h"

#define SQR(x) (x) * (x)

#define CONDITION_1(x) (x) <= 1.0

#define FUNCTION_1(x) (-2.0 *SQR(x) + 1)

#define CONDITION_2(x) (x) > 1.0 && (x) <= 4.0

#define FUNCTION_2(x) ((SQR(x) - (x) + 4)/(3.0 * SQR(x) + (x) - 5.0))

#define FUNCTION_3(x) (2.0 *SQR(x) - 1)

int main()
{
   
	
	double a = 0.0, b = 5.0, h = 0.1;

	printf("x\t\tf(x)\n");

	double x;

	for (x = a; x <= b; x += h)
	{
		double y = 0.0;

		if (CONDITION_1(x))
		{
			y = FUNCTION_1(x);
		}
		else if (CONDITION_2(x))
		{
			y = FUNCTION_2(x);
		}
		else
		{
			y = FUNCTION_3(x);
		}

		printf("%2.2f\t\t%5.3f\n", x, y);
	}

    return 0;
}
