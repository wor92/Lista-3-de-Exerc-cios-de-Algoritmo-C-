#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char op;
float lado, area, base, altura,bMaior;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Escolha qual o tipo de área que deseja calcular:\n");
	printf("Q - Área do quadrado.\n");
	printf("R - Área do retângulo.\n");
	printf("T - Área do triângulo.\n");
	printf("P - Área do trapézio.\n");
	fflush(stdin);
	scanf("%c",&op);
	
	switch(op){
		case 'Q':
			printf("Informe o tamanho de qualquer lado do quadrado em cm: ");
			scanf("%f",&lado);
			area = pow(lado,2);
			printf("A area do quadrado é de %.2fcm²",area);
		break;
		case 'R':
			printf("Informe o tamanho da base do retângulo em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do retângulo em cm: ");
			scanf("%f",&altura);
			area = base*altura;
			printf("A area do retângulo é de %.2fcm²",area);
		break;
		case 'T':
			printf("Informe o tamanho da base do triângulo em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do triângulo em cm: ");
			scanf("%f",&altura);
			area = (base*altura)/2;
			printf("A area do triângulo é de %.2fcm²",area);
		break;
		case 'P':
			printf("Informe o tamanho da base MAIOR do trapézio em cm: ");
			scanf("%f",&bMaior);
			printf("Informe o tamanho da base MENOR do trapézio em cm: ");
			scanf("%f",&base);
			printf("Informe o tamanho da altura do trapézio em cm: ");
			scanf("%f",&altura);
			area = ((bMaior+base)*6)/2;
			printf("A area do trapézio é de %.2fcm²",area);
		break;
		default:
			printf("Tipo inválido...");
		break;
	}
}
