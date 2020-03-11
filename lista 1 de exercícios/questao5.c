#include <stdio.h>

int main(){
	char vitamina;
	
	printf("Digite o tipo de vitamina: ");
	scanf("%c",&vitamina);
	
	switch(vitamina){
		case 'a':
			printf("finge que tem informações d vitamina A");
			break;
		case 'b':
			printf("finge que tem informações d vitamina B");
			break;
		case 'c':
			printf("finge que tem informações d vitamina C");
			break;
		case 'd':
			printf("finge que tem informações d vitamina D");
			break;
	}
}
