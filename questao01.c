//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
#include <stdio.h>

int main(void) 
{
  float a1;
  float a2;
  scanf("%f", &a1);
  scanf("%f", &a2);
  float media = 0.4 * a1 + 0.6 * a2;
  printf("%f", media);
  return 0;

  
  }