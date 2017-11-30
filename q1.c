#include <stdio.h>
#include <stdlib.h>

void subtracao(float i,float j)
{
	printf("Subtracao de %.2f - %.2f = %.2f", i, j, (i - j));
}
int main(void)
{
	subtracao(10, 8);
	return 0;
}

