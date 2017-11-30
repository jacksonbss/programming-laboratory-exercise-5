#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void consoante()
{
	char nome[40];
	int i, j, tamanho, consoante;
	i = 0;
	j = 0;
	tamanho = 0;
	consoante = 0;
	
	printf("Digite uma palavra: \n");
	gets(nome);
	
	tamanho = strlen(nome);
	
	for (i = 0; i <= tamanho; i++)
	{
		if(nome[i] == 'a' || nome[i] == 'A' || nome[i] == 'e' || nome[i] == 'E' || nome[i] == 'i' || nome[i] == 'I' || nome[i] == 'o' || nome[i] == 'O' || nome[i] == 'u' || nome[i] == 'U')
		{
			j++;
		}
	}
	consoante = tamanho - j;
	printf("A Palavra tem %d consoantes", consoante);
}
int main(void) 
{
	consoante();
	return 0;
}
