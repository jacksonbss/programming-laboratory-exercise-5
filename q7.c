#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificaPrimo(int i)
{
	
	if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0 && i % 7== 0 && i % 11 == 0)
	{
		printf("Numero Primo: %d \n\n", i);	
	}
	else
	{
		printf("Numero nao primo: %d \n\n", i);
	}	
}

int main(void)
{
	verificaPrimo(6);
	return 0;
}

