#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int cod, cliente, qtd;
float preco, vtt;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira o c�digo do cliente");
	scanf("%d", &cliente);
	printf("Informe o c�digo do produto, Apresentado no menu.\n ");
	printf("C�digo       Pre�o Unidade\n");
	printf("1001         R$5,32\n");
	printf("1324         R$6,45\n");
	printf("6548         R$2,37\n");
	printf("987          R$5,85\n");
	printf("7623         R$6,50\n");
	fflush(stdin);
	scanf("%d", &cod);
	printf("Insira a quantidade:\n");
	scanf("%d", &qtd);
	
	switch(cod){
		case 1001:
			preco = 5.32;
		break;
		case 1324:
			preco = 6.45;
		break;
		case 6548:
			preco = 2.37;
		break;
		case 987:
			preco = 5.85;
		break;
		case 7623: 
			preco= 6.50;
		break;
		default:
			printf("C�digo de produto invalido!\n");
		break;					
			
	}
	vtt = qtd*preco;
	printf("C�digo do cliente: %d\n", cliente);
	printf("C�digo do produto: %d\n", cod);
	printf("Quantidade %d X Pre�o unitario R$%5.2f\n",qtd,preco);
	printf("Pre�o Total: R$%.2f\n",vtt);
}
