#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int codMonth;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o n�mero correspondente ao m�s:\n");
	printf("1 - Janeiro\n");
	printf("2 - Fevereiro\n");
	printf("3 - Mar�o\n");
	printf("4 - Abril\n");
	printf("5 - Maio\n");
	printf("6 - Junho\n");
	printf("7 - Julho\n");
	printf("8 - Agosto");
	printf("9 - Setembro\n");
	printf("10 - Outubro\n");
	printf("11 - Novembro\n");
	printf("12 - Dezembro\n");
	
	scanf("%d", &codMonth);
	
	switch(codMonth){
		case 1:
			printf("M�s de Janeiro � ALTA TEMPORADA");
		break;
		case 2:
			printf("M�s de Fevereiro � ALTA TEMPORADA");
		break;
		case 3:
			printf("M�s de Mar�o � BAIXA TEMPORADA");
		break;
		case 4:
			printf("M�s de Abril � BAIXA TEMPORADA");
		break;
		case 5:
			printf("M�s de Maio � BAIXA TEMPORADA");
		break;
		case 6:
			printf("M�s de Junho � ALTA TEMPORADA");
		break;
		case 7:
			printf("M�s de Julho � ALTA TEMPORADA");
		break;
		case 8:
			printf("M�s de Agosto � BAIXA TEMPORADA");
		break;
		case 9:
			printf("M�s de Setembro � BAIXA TEMPORADA");
		break;
		case 10:
			printf("M�s de Outubro � BAIXA TEMPORADA");
		break;
		case 11:
			printf("M�s de Novembro � BAIXA TEMPORADA");
		break;
		case 12:
			printf("M�s de Dezembro � ALTA TEMPORADA");
		break;
		default:
			printf("C�digo do m�s inv�lido....");												
	}
}
