#include <stdio.h>

float fahr_to_cels(float fahr);

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 200;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = fahr_to_cels(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

float fahr_to_cels(float fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}
