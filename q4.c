#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcularMenor(float i, float j, float k)
{
	
	if(i < j && i < k)
	{
		printf("Menor valor: %.2f \n\n", i);	
	}else if(j < i && j < k)
	{
		printf("Menor valor: %.2f \n\n", j);
	}else if(k < j && k < i)
	{
		printf("Menor valor: %.2f \n\n", k);	
	}	
}


int main(void)
{
	calcularMenor(15,5,6);
	return 0;
}

