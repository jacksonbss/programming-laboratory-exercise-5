#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenaNumeros(int i, int j, int k)
{
	
	printf("Valores passados por parametro de i = %d e j = %d e k = %d \n\n",i,j,k);

	if(i < j && i < k && j < k)
	{
		printf("Valores em ordem crescente de i = %d e j = %d e k =%d \n\n", i, j, k);
	}

	else if(i < j && i < k && k < j){
		printf("Valores em ordem crescente de j = %d e k = %d e j =%d \n\n", i, k, j);
	}

	else if(j < i && j < k && i < k){
		printf("Valores em ordem crescente de j = %d e i = %d e k =%d \n\n", j, i, k);
	}

	else if(j < i && j < k && k < i){
		printf("Valores em ordem crescente de j = %d e k = %d e i =%d \n\n", j, k, i);
	}

	else if(k < i && k < j && i < j){
		printf("Valores em ordem crescente de k = %d e i = %d e j =%d \n\n", k, i, j);
	}

	else if(k < i && k < j && j < i){
		printf("Valores em ordem crescente de k = %d e j = %d e i =%d \n\n", k, j, i);
	}else{
		printf("Algum dos valores esta igual !");
	}	
		
}

int main(void)
{

	int i,j,k;
	printf("Digite os valores de i: ");
	scanf("%d", &i);
	printf("Digite os valores de j: ");
	scanf("%d", &j);
	printf("Digite os valores de k: ");
	scanf("%d", &k);
	ordenaNumeros(i,j,k);
	return 0;
}

