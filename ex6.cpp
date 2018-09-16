#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

char codCurso, le;
int codAluno, freq, cred;
float media, notaTese;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira o código do aluno: ");
	scanf("%d", &codAluno);
	printf("Digite a média do aluno: ");
	scanf("%f", &media);
	printf("Foneça a frequencia do aluno (0 a 100): ");
	scanf("%d", &freq);
	printf("Digite o código relacionado ao curso do aluno: \n");
	printf("Código    Curso\n");
	printf("G         Graduação\n ");
	printf("E         Especialização\n");
	printf("M         Mestrado\n");
	printf("D         Doutorado\n");
	fflush(stdin);
	scanf("%c", &codCurso);
	
	switch(codCurso){
		case 'G':
			printf("Forneça a nota Tese do aluno: ");
			scanf("%f",&notaTese);
			if(freq >= 75 && media >= 7 && notaTese >= 7){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		case 'E':
			
			if(freq >= 75 && media >= 7){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		case 'M':
			printf("Forneça a nota Tese do aluno: ");
			scanf("%f",&notaTese);
			printf("Lingua Estrangeira (Forneça A - para aprovado ou R - para reprovado)");
			fflush(stdin);
			scanf("%c",&le);
			printf("forneça o número de créditos do aluno: ");
			scanf("%d",&cred);
			if(freq >= 75 && media >= 7 && (le == 'A' || le == 'a') && notaTese >= 7 && cred >= 24){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		case 'D':
			printf("Forneça a nota Tese do aluno: ");
			scanf("%f",&notaTese);
			printf("Lingua Estrangeira (Forneça A - para aprovado ou R - para reprovado)");
			fflush(stdin);
			scanf("%c",&le);
			printf("forneça o número de créditos do aluno: ");
			scanf("%d",&cred);
			if(freq >= 75 && media >= 8 && (le == 'A' || le == 'a') && notaTese >= 7 && cred >= 48){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		default:
			printf("Código de curso inválido....");
		break;
	}
	
}
