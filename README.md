# programming-laboratory-exercise-5


1. Faça um programa que contenha uma função subtração, que receba dois valores e retorne a subtração dos dois.
2. Faça um programa que contenha uma função que receba um nome e escreva “Bom dia” para esse nome recebido.
3. Faça um programa que contenha duas funções que recebam o raio de um círculo e retornem: uma a área da circunferência e a outra o comprimento da mesma.
4. Faça um programa que contenha uma função que receba três valores e retorne o menor entre eles.
5. Faça um programa que contenha uma função que receba uma string e retorne quantas consoantes existem na string recebida.
6. Faça um programa que contenha uma função que receba uma string e retorne outra string com todas as letras substituídas pela correspondente maiúscula.
7. Faça um programa que contenha uma função que receba um número e verifique se ele é primo ou não.
8. Faça um programa que contenha uma função que receba dois parâmetros inteiros por referência e troque o valor dessas variáveis.
9. Faça um programa que contenha uma função que receba três parâmetros por referência e os ordene, alterando para ser o primeiro parâmetro o menor, o segundo parâmetro o intermediário e o terceiro parâmetro o maior.
10. Implemente, através de funções recursivas o algoritmo conhecido como torres de Hanoi. Nesse problema você tem n pinos na torre A, cada um de um tamanho, e deve movê-los para a torre B com a ajuda de uma torre auxiliar C. A única restrição é que um pino maior não deve ficar sobre um menor. Dica: Esse problema é parecido com o fatorial, para resolver o problema grande devemos resolver o problema imediatamente menor (n - 1) e assim por diante até chegarmos ao problema mais simples, onde há somente um pino em A para movê-lo para B. Veja o esquema:
hanoi(n, A, B) =
hanoi(n-1, A, C)
passa o pino grande de A para B
hanoi(n-1, C, B)
