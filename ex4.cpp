#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int nrAluno, opcao;
float n1, n2, n3, media;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Entre com on�mero do aluno: ");
	scanf("%d", &nrAluno);
	printf("Digite nota 1: ");
	scanf("%f", &n1);
	printf("Digite nota 2: ");
	scanf("%f", &n2);
	printf("Digite nota 3: ");
	scanf("%f", &n3);
	printf("Escolha uma op��o de m�dia:\n");
	printf("1 - M�dia Aritim�tica\n");
	printf("2 - M�dia Ponderada\n");
	printf("3 - M�dia Harm�nica\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			media = (n1+n2+n3)/3;
		break;
		case 2:
			media = ((n1*3)+(n2*3)+(n3*4))/10;
		break;
		case 3:
			media = 3/((1/n1)+(1/n2)+(1/n3));
		break;
		default:
			printf("Op��o incorreta...\n");
		break;
						
	}
	
		printf("O aluno %d teve m�dia de %.2f ", nrAluno, media);
	
	
	
}
