#include <stdio.h>

int main(){
	int n1,n2,n3;
	
	printf("Digite três números: ");
	scanf("%d %d %d", &n1,&n2,&n3);
	
	int maior = n1;
	
	if(n2>maior && n2>n3) printf("Maior número %d",n2);
	else if(n3>maior && n3>n2) printf("Maior número %d",n3);
	else printf("Maior número %d", n1); 
}
