#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcularArea(float raio)
{
	printf("Area do Circulo: %.2f ", 3.14 * ( raio * raio ));
}

void calcularCumprimento(float raio)
{
	printf("\nCumprimento da circunferência: %.2f ", 2 * 3.14 * raio);
}

int main(void)
{
	calcularArea(15);
	calcularCumprimento(5);
	return 0;
}

