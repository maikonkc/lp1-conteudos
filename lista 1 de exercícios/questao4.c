#include <stdio.h>

int main(){
	int dias, meses,anos, numero;
	
	printf("Digite a quantidade de dias: ");
	scanf("%d",&numero);
	
	anos = numero/365;
	numero = numero - (anos*365);
	meses = numero/30;
	numero = numero -(meses*30);
	dias = numero;
	
	printf("%d:%d:%d",anos,meses,dias);
}
