#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int nrFunc, cod;
float sal, por, salN, dife;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira o n�mero do funcion�rio: ");
	scanf("%d", &nrFunc);
	printf("Forne�a o salario atual: R$ ");
	scanf("%f", &sal);
	printf("De acordo com a a tabela esccolha o cargo do funcion�rio: \n");
	printf("C�digo          CARGO\n");
	printf("101             Gerente\n");
	printf("102             Engenheiro\n");
	printf("103             T�cnico\n");
	printf("104             Administrativo\n");
	printf("105             Auxiliar\n");
	printf("Insira c�digo do cargo: ");
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
	printf("Funcion�rio de n�mero: %d\n", nrFunc);
	printf("Sal�rio antigo: R$%.2f\n", sal);
	printf("Sal�rio novo: R$%.2f\n", salN);
	printf("Diferen�a: R$%.2f\n", dife);
	printf("Aumento: %.0f%%\n", por);
	
	
}
