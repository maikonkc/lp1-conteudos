#include <stdio.h>

int main(){
	int x;
	printf("Digite um n�mero qualquer: ");
	scanf("%d",&x);
	
	if(x%2==0) printf("N�mero par!");
	else printf("N�mero impar!");
}
