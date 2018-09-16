#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char op;
float lado, area, base, altura,bMaior;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Escolha qual o tipo de �rea que deseja calcular:\n");
	printf("Q - �rea do quadrado.\n");
	printf("R - �rea do ret�ngulo.\n");
	printf("T - �rea do tri�ngulo.\n");
	printf("P - �rea do trap�zio.\n");
	fflush(stdin);
	scanf("%c",&op);
	
	switch(op){
		case 'Q':
			printf("Informe o tamanho de qualquer lado do quadrado em cm: ");
			scanf("%f",&lado);
			area = pow(lado,2);
			printf("A area do quadrado � de %.2fcm�",area);
		break;
		case 'R':
			printf("Informe o tamanho da base do ret�ngulo em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do ret�ngulo em cm: ");
			scanf("%f",&altura);
			area = base*altura;
			printf("A area do ret�ngulo � de %.2fcm�",area);
		break;
		case 'T':
			printf("Informe o tamanho da base do tri�ngulo em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do tri�ngulo em cm: ");
			scanf("%f",&altura);
			area = (base*altura)/2;
			printf("A area do tri�ngulo � de %.2fcm�",area);
		break;
		case 'P':
			printf("Informe o tamanho da base MAIOR do trap�zio em cm: ");
			scanf("%f",&bMaior);
			printf("Informe o tamanho da base MENOR do trap�zio em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do trap�zio em cm: ");
			scanf("%f",&altura);
			area = ((bMaior+base)*6)/2;
			printf("A area do trap�zio � de %.2fcm�",area);
		break;
		default:
			printf("Tipo inv�lido...");
		break;
	}
}
