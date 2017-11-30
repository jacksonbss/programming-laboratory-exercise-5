#include <stdio.h>
#include <stdlib.h>

void move_disco(int d, char ori, char dest, char aux)
{
	if(d == 1)
	{
		printf("Mover disco %d de %c para %c\n", d, ori, dest);
	}
	else
	{
		move_disco(d - 1, ori, aux, dest);
		printf("Mover disco %d de %c para %c\n", d, ori, dest);
		move_disco(d - 1, aux, dest, ori);
	}
}


int main(void) 
{
	int discos = 20;
	move_disco(discos, 'A', 'C', 'B');
	return 0;
}
