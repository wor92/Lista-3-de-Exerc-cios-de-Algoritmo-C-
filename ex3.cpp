#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int opcao;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o número da opção escolhida.\n");
	printf("1 - Domingo\n");
	printf("2 - Segunda\n");
	printf("3 - Terça\n");
	printf("4 - Quarta\n");
	printf("5 - Quinta\n");
	printf("6 - Sexta\n");
	printf("7 - Sabádo\n");
	
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Domingo é FIM DE SEMANA");
		break;
		case 2:
			printf("Segunda é DIA DE SEMANA");
		break;
		case 3:
			printf("Terça é DIA DE SEMANA");
		break;
		case 4:
			printf("Quarta é DIA DE SEMANA");
		break;
		case 5:
			printf("Quinta é DIA DE SEMANA");
		break;
		case 6:
			printf("Sexta é DIA DE SEMANA");
		break;
		case 7:
			printf("Sabádo é FIM DE SEMANA");
		break;
		default:
			printf("Opção incorreta...");							
		
	}
}
