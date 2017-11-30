#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mudaValores(int i, int j)
{
	printf("Valores antigos de i = %d e j = %d \n", i, j);
	int aux = i;
	i = j;
	j = aux;

	printf("Valores trocados de i = %d e j = %d\n ", i, aux);	
}

int main(void)
{
	mudaValores(6,5);
	return 0;
}

