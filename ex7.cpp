#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int op;
float valor = 100;
char res;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("A idade do conveniado est� entre 31 a 39 anos? (S - Sim ou N - N�o)\n");
	fflush(stdin);
	scanf("%c",&res);
	if(res == 's'|| res == 'S'){
		printf("O valor do convenio ser� de R$%.2f, sem adicional de idade.",valor);
	}else{
		printf("Digite a op��o desejada referente a faixa de idade do conveniado:\n");
		printf("1 - crian�as menores que 10 anos.\n");
		printf("2 - conveniados com idade entre 10 e 30 anos.\n");
		printf("3 - conveniados com idade entre 40 e 60 anos.\n");
		printf("4 - conveniados com idade maior que 60 anos.\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				valor = valor + 80;
				printf("Adicional de idade � R$80\n");
			break;
			case 2:
				valor = valor + 50;
				printf("Adicional de idade � R$50\n");
			break;
			case 3:
				valor = valor + 95;
				printf("Adicional de idade � R$95\n");
			break;
			case 4:
				valor = valor + 130;
				printf("Adicional de idade � R$130\n");
			break;
			default:
				printf("Op��o escolhida invalida....\n");
			break;
		}
		printf("O valor do convenio ser� de R$%.2f",valor);
	}
	
}
