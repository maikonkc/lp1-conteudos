#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Digite as medidas do triangulo: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a+b>=c||a+c>=b||b+c>=a){
    if(a==b && a==c) printf("Triangulo equilátero! ");
    if((a==b && a!=c)||(a==c && a!=b)||(c==b && a!=b)) printf("Triangulo isóceles!");
    if(a!=b && b!=c && a!=c) printf("Triangulo escaleno!");
  }else{
    printf("Nao eh um triangulo!");
  }
  return 0;
}
