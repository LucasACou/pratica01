//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0

#include<stdio.h>

int main(void)
{ 
  float base;
  float altura;
  printf("coloque valor da base:");
  scanf("%f", &base);
  printf("coloque valor da altura:");
  scanf("%f", &altura);
  float area = base * altura / 2;
  
  printf("A area do triangulo é %f", area);



  return 0;
}

