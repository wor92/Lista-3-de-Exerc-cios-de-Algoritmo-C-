#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int codMonth;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o número correspondente ao mês:\n");
	printf("1 - Janeiro\n");
	printf("2 - Fevereiro\n");
	printf("3 - Março\n");
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
			printf("Mês de Janeiro é ALTA TEMPORADA");
		break;
		case 2:
			printf("Mês de Fevereiro é ALTA TEMPORADA");
		break;
		case 3:
			printf("Mês de Março é BAIXA TEMPORADA");
		break;
		case 4:
			printf("Mês de Abril é BAIXA TEMPORADA");
		break;
		case 5:
			printf("Mês de Maio é BAIXA TEMPORADA");
		break;
		case 6:
			printf("Mês de Junho é ALTA TEMPORADA");
		break;
		case 7:
			printf("Mês de Julho é ALTA TEMPORADA");
		break;
		case 8:
			printf("Mês de Agosto é BAIXA TEMPORADA");
		break;
		case 9:
			printf("Mês de Setembro é BAIXA TEMPORADA");
		break;
		case 10:
			printf("Mês de Outubro é BAIXA TEMPORADA");
		break;
		case 11:
			printf("Mês de Novembro é BAIXA TEMPORADA");
		break;
		case 12:
			printf("Mês de Dezembro é ALTA TEMPORADA");
		break;
		default:
			printf("Código do mês inválido....");												
	}
}
