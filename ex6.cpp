#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

char codCurso, le;
int codAluno, freq, cred;
float media, notaTese;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira o c�digo do aluno: ");
	scanf("%d", &codAluno);
	printf("Digite a m�dia do aluno: ");
	scanf("%f", &media);
	printf("Fone�a a frequencia do aluno (0 a 100): ");
	scanf("%d", &freq);
	printf("Digite o c�digo relacionado ao curso do aluno: \n");
	printf("C�digo    Curso\n");
	printf("G         Gradua��o\n ");
	printf("E         Especializa��o\n");
	printf("M         Mestrado\n");
	printf("D         Doutorado\n");
	fflush(stdin);
	scanf("%c", &codCurso);
	
	switch(codCurso){
		case 'G':
			printf("Forne�a a nota Tese do aluno: ");
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
			printf("Forne�a a nota Tese do aluno: ");
			scanf("%f",&notaTese);
			printf("Lingua Estrangeira (Forne�a A - para aprovado ou R - para reprovado)");
			fflush(stdin);
			scanf("%c",&le);
			printf("forne�a o n�mero de cr�ditos do aluno: ");
			scanf("%d",&cred);
			if(freq >= 75 && media >= 7 && (le == 'A' || le == 'a') && notaTese >= 7 && cred >= 24){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		case 'D':
			printf("Forne�a a nota Tese do aluno: ");
			scanf("%f",&notaTese);
			printf("Lingua Estrangeira (Forne�a A - para aprovado ou R - para reprovado)");
			fflush(stdin);
			scanf("%c",&le);
			printf("forne�a o n�mero de cr�ditos do aluno: ");
			scanf("%d",&cred);
			if(freq >= 75 && media >= 8 && (le == 'A' || le == 'a') && notaTese >= 7 && cred >= 48){
				printf("Aluno %d aprovado, por favor retirar o diploma daqui a 30 dias.",codAluno);
			}else{
				printf("Aluno %d reprovado.",codAluno);
			}
		break;
		default:
			printf("C�digo de curso inv�lido....");
		break;
	}
	
}
