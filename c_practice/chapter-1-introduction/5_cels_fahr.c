#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 20;

	celsius = lower;
	printf("\n");
	printf("Celsius Fahrenheit table\n");
	printf("========================\n");
	while (celsius <= upper)
	{
		fahr = (9.0 / 5.0) * (celsius) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
