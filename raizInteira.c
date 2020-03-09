#include <stdio.h>
#include <math.h>

int main(void) {
  int x;
  printf("HI. Diga um numero:\n");
  scanf("%d",&x);

  int raiz = sqrt(x);

  if(pow(raiz,2)==x) printf("Raiz exata!");
  else printf("Raiz nao exta!");

  return 0;
}
