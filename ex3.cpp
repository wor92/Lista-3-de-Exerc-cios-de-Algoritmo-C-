#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int opcao;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite o n�mero da op��o escolhida.\n");
	printf("1 - Domingo\n");
	printf("2 - Segunda\n");
	printf("3 - Ter�a\n");
	printf("4 - Quarta\n");
	printf("5 - Quinta\n");
	printf("6 - Sexta\n");
	printf("7 - Sab�do\n");
	
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Domingo � FIM DE SEMANA");
		break;
		case 2:
			printf("Segunda � DIA DE SEMANA");
		break;
		case 3:
			printf("Ter�a � DIA DE SEMANA");
		break;
		case 4:
			printf("Quarta � DIA DE SEMANA");
		break;
		case 5:
			printf("Quinta � DIA DE SEMANA");
		break;
		case 6:
			printf("Sexta � DIA DE SEMANA");
		break;
		case 7:
			printf("Sab�do � FIM DE SEMANA");
		break;
		default:
			printf("Op��o incorreta...");							
		
	}
}
