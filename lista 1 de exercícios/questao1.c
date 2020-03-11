#include <stdio.h>
#include <math.h>

int main(){
	int x1,x2,y1,y2;
	printf("Quais as cordenadas do primeiro ponto? ");
	scanf("%d %d",&x1,&y1);
	printf("Quais as cordenadas do segundo ponto? ");
	scanf("%d %d",&x2,&y2);	
	
	float distancia;
	distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("A distancia entre os dois pontos: %.4f",distancia);
}
