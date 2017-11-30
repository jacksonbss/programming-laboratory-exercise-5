#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void maiuscula()
{
	char palavra[100];
	printf("Digite uma palavra: \n");
	gets(palavra);
	
	printf("A palavra em maiuscula é: %s", strupr(palavra));	
}
int main(void) 
{
	maiuscula();
	return 0;
}
