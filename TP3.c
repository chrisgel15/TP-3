/*
Ejercicio Conversion de F° a C° con "const", funciones y FOR
Christian Gelman (Leg 144-087-1)
26-4-2015
*/

#include <stdio.h>

float GetCelcius(float);

void main()()
{
	float fahr, celsius;
	const LOWER = 0, UPPER = 300, STEP = 20;
	fahr = UPPER;
	printf("Ejercicio de F° a C° aplicando CONST, FOR y funcion\n");

	for (UPPER;fahr >= LOWER;fahr = fahr - STEP)
	{
		printf("%3.0f %6.1f\n", fahr, GetCelcius(fahr));
	}

}

float GetCelcius(Fahr)
{
	return (Fahr - 32) * (5.0 / 9.0);
}

