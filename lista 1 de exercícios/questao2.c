#include <stdio.h>

int main(){
	int x;
	printf("Digite um número qualquer: ");
	scanf("%d",&x);
	
	if(x%2==0) printf("Número par!");
	else printf("Número impar!");
}
