#include <stdio.h>

int main(void) {
  char x;
  printf("Clique uma tecla: ");
  scanf("%c",&x);

  int x1;
  x1=x;

  if((x1>64 && x1<91)||(x1>96 && x1<123)) printf("É uma letra!");
  else if(x1>47 && x1<58) printf("É um número!");
    else printf("É um caractere especial!");
  return 0;
}
