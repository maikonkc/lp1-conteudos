#include <stdio.h>

int main(){
	int temp;
	printf("Digite a temperatura: ");
	scanf("%d",&temp);
	
	if (temp<0) printf("Tempo congelante!");
	if (temp>=0 && temp<10) printf("Tempo muito frio!");
	if (temp>=10 && temp<20) printf("Tempo frio!");
	if (temp>=20 && temp<30) printf("Nomral!");
	if (temp>=30 && temp<40) printf("Está quente!");
	if (temp>=40) printf("Está muito quente!");
}
