#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int nrAluno, opcao;
float n1, n2, n3, media;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Entre com onúmero do aluno: ");
	scanf("%d", &nrAluno);
	printf("Digite nota 1: ");
	scanf("%f", &n1);
	printf("Digite nota 2: ");
	scanf("%f", &n2);
	printf("Digite nota 3: ");
	scanf("%f", &n3);
	printf("Escolha uma opção de média:\n");
	printf("1 - Média Aritimética\n");
	printf("2 - Média Ponderada\n");
	printf("3 - Média Harmônica\n");
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
			printf("Opção incorreta...\n");
		break;
						
	}
	
		printf("O aluno %d teve média de %.2f ", nrAluno, media);
	
	
	
}
