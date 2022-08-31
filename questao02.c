//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0

#include<stdio.h>

int main(void)
{ 
  float base;
  float altura;
  printf("coloque base:");
  scanf("%f", &base);
  printf("coloque altura:");
  scanf("%f", &altura);
  float area = base * altura / 2;
  printf("%f", area);



  return 0;
}

