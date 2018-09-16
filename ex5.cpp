#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int nrFunc, cod;
float sal, por, salN, dife;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira o número do funcionário: ");
	scanf("%d", &nrFunc);
	printf("Forneça o salario atual: R$ ");
	scanf("%f", &sal);
	printf("De acordo com a a tabela esccolha o cargo do funcionário: \n");
	printf("Código          CARGO\n");
	printf("101             Gerente\n");
	printf("102             Engenheiro\n");
	printf("103             Técnico\n");
	printf("104             Administrativo\n");
	printf("105             Auxiliar\n");
	printf("Insira código do cargo: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 101:
			por = 0.12;
		break;
		case 102:
			por = 0.26;
		break;
		case 103:
			por = 0.32;
		break;
		case 104:
			por = 0.37;
		break;
		case 105:
			por = 0.41;
		break;
		default:
			por = 0.52;
		break;	
		
			
							
	}
	
	dife = por*sal;
	salN = dife+sal;
	por = por*100;
	printf("Funcionário de número: %d\n", nrFunc);
	printf("Salário antigo: R$%.2f\n", sal);
	printf("Salário novo: R$%.2f\n", salN);
	printf("Diferença: R$%.2f\n", dife);
	printf("Aumento: %.0f%%\n", por);
	
	
}
