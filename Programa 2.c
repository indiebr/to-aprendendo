/*
Pedro Henrique Melo - 2111562

Programa 2: Preencha um vetor de 10 valores inteiros aleatórios e escreva de forma ordenada.

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
  int i;
  
  printf("Gerando 10 valores aleatorios:\n\n");
  
  for (i = 0; i < 10; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */
    printf("%d ", rand() % 100);
  }
  
  getch();
  return 0;
}
