//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416

#include <stdio.h>

int main(void)
{
  float raio;
  const double PI = 3.1416;
  printf("coloque valor do raio :");
  scanf("%f", &raio);
  float perimetro = 2 * PI * raio;
 
  printf("valor do perimetro da pizza é %f", perimetro);






  return 0;
}