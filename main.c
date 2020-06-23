#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 100

struct cliente{
  char nome[MAX];
  char endereco[MAX];
  long int cep;
  int numero;
}cliente;

char menu();
void playstation();
void xbox();
void nintendo();
void pc();
void retro();
void gadgets();
void carrinhu();
void entrega();
void sair();



float carrinho[10]={0,0,0};
float prodPreco[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0};
int quantProd[17], i=0, escProd,n;
int estoqueProd[17]={9,8,7,9,7,7,5,6,9,4,3,2,1,8,7,6,4};
float totalProd=0,totalPag=0, pagamento;
int addCarrinho;
int main(void) {
  char resp;
  setlocale(LC_ALL,"Portuguese");
  	printf("\t\t\t\t _________________________________________________\n");
 	printf("\t\t\t\t|                   GamePlay                      |\n");
 	printf("\t\t\t\t|             Next level in your life             |\n");
 	printf("\t\t\t\t|  Loja de produtos destinados ao público gamer   |\n");
 	printf("\t\t\t\t|_________________________________________________|\n");
	// loop infinito do programa
	
	while(1)
	{
		// obtém a escolha do usuário
		resp = menu();

		// testa o valor de "resp"
		switch(resp){
			case '1':
				playstation();
				break;
			case '2':
				xbox();
				break;
			case '3':
				nintendo();
				break;
			case '4':
				pc();
				break;
			case '5': 
				retro();
				break;
			case '6':
				gadgets();
				break;
			case '7':
				carrinhu();
				break;
			case '8':
				sair();
				break;
			default:
			printf("\nOpcao invalida! Pressione <Enter> para continuar...");
			scanf("%*c");
			break;
		}
  	 i++;
	}
return 0;
}

char menu(){
	char resp[2];
	setbuf(stdin, NULL);
 	printf("1 - PLAYSTATION\n");
 	printf("2 - XBOX\n");
 	printf("3 - NINTENDO\n");
 	printf("4 - PC\n");
 	printf("5 - RETRO\n");
 	printf("6 - GADGETS\n");
 	printf("7 - CARRINHO\n");
 	printf("8 - SAIR\n");
	printf("Digite o numero da opcao: ");
	scanf("%1s%*c", resp); // o *c pega o Enter e descarta
	return resp[0];
}

void playstation(){
	system("cls");
	printf("\t\t _______________________\n");
	printf("\t\t|\tPLAYSTATION\t|\n");
	printf("\t\t|_______________________|\n");
	printf("| 1- God Of War 3 | 2- The Last Of Us I | 3- Uncharted 3 |\n");
	printf("| R$: 33,00 | R$: 36,00| R$: 45,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[0],estoqueProd[1],estoqueProd[2]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[0];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]>quantProd[0]){
				printf("Desculpe, estoque do produto insuficiente.\n");} // Falta ajeitar isso < ***************************************
			else{
				printf("Deseja adicionar ao carrinho? 1- Sim / 2 - Não\n");
				printf("----------------------------------------------:");
				scanf("%d", &addCarrinho);
				switch(addCarrinho){
					case 1:
						if(quantProd[i]<=estoqueProd[0] || quantProd[i]==estoqueProd[0]){
							estoqueProd[0]-=quantProd[i];}
					break;
					case 2: 
						quantProd[i]=0;
					break;
					default:
						printf("Número digitado inválido, por favor tente novamente.\n");
					break;}
			}
		break;
		case 2:
			carrinho[i]=prodPreco[1];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[1] || quantProd[i]==estoqueProd[1]){
				estoqueProd[1]-=quantProd[i];
			}else if(quantProd[i]>quantProd[1]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 3:
			carrinho[i]=prodPreco[2];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[2] || quantProd[i]==estoqueProd[2]){
				estoqueProd[2]-=quantProd[i];
			}else if(quantProd[i]>quantProd[2]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void xbox(){
	system("cls");
    printf("\t\t _______________\n");
    printf("\t\t|     XBOX      |\n");
	printf("\t\t|_______________|\n");
	printf("| 1- Halo 1 | 2- Gears Of War 2 | 3- Fifa 20 |\n");
	printf("| R$: 33,00 | R$: 36,00| R$: 45,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[3],estoqueProd[4],estoqueProd[5]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[3];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[3] || quantProd[i]==estoqueProd[3]){
				estoqueProd[3]-=quantProd[i];
			}else if(quantProd[i]>quantProd[3]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 2:
			carrinho[i]=prodPreco[4];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[4] || quantProd[i]==estoqueProd[4]){
				estoqueProd[4]-=quantProd[i];
			}else if(quantProd[i]>quantProd[4]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
  		case 3:
		  	carrinho[i]=prodPreco[5];
		  	printf("Quantidade: ");
		 	scanf("%d", &quantProd[i]);
		 	if(quantProd[i]<=estoqueProd[5] || quantProd[i]==estoqueProd[5]){
				estoqueProd[5]-=quantProd[i];
			}else if(quantProd[i]>quantProd[5]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void nintendo(){
	system("cls");
    printf("\t\t ___________________\n");
    printf("\t\t|      NINTENDO     |\n");
	printf("\t\t|___________________|\n");
	printf("| 1- The Last Of Us II | 2- God Of War 4| 3- Gran Turismo |\n");
	printf("| R$: 33,00 | R$: 36,00| R$: 45,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[6],estoqueProd[7],estoqueProd[8]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[6];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[6] || quantProd[i]==estoqueProd[6]){
				estoqueProd[6]-=quantProd[i];
			}else if(quantProd[i]>quantProd[6]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 2:
			carrinho[i]=prodPreco[7];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[7] || quantProd[i]==estoqueProd[7]){
				estoqueProd[7]-=quantProd[i];
			}else if(quantProd[i]>quantProd[7]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 3:
			carrinho[i]=prodPreco[8];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[8] || quantProd[i]==estoqueProd[8]){
				estoqueProd[8]-=quantProd[i];
			}else if(quantProd[i]>quantProd[8]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void pc(){
	system("cls");
    printf("\t\t ___________________\n");
    printf("\t\t|         PC        |\n");
	printf("\t\t|___________________|\n");
	printf("| 1- Dark Souls III | 2- Sekiro | 3- Cyberpunk 2077 |\n");
	printf("| R$: 80,00 | R$: 10,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[9],estoqueProd[10],estoqueProd[11]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[9];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[9] || quantProd[i]==estoqueProd[9]){ // Tive que botar "|| quantProd[i]==estoqueProd[0]" porque apesar
				estoqueProd[9]-=quantProd[i];								//de funcionar com "<=" dava como encerrado o programa
			}else if(quantProd[i]>estoqueProd[9]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
  		case 2:
			carrinho[i]=prodPreco[10];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[10] || quantProd[i]==estoqueProd[10]){
				estoqueProd[10]-=quantProd[i];
			}else if(quantProd[i]>quantProd[10]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
    	break;
		case 3:
			carrinho[i]=prodPreco[11];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[11] || quantProd[i]==estoqueProd[11]){
				estoqueProd[11]-=quantProd[i];
			}else if(quantProd[i]>quantProd[11]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
  			printf("Número digitado inválido, por favor tente novamente.\n");
  		break;
	}
}

void retro(){
	system("cls");
    printf("\t\t ___________________\n");
    printf("\t\t|       RETRO       |\n");
	printf("\t\t|___________________|\n");
	printf("| 1- Recore | 2- Halo Wars 2| 3- Sea Of Thieves |\n");
	printf("| R$: 33,00 | R$: 36,00| R$: 45,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[12],estoqueProd[13],estoqueProd[14]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[12];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[12] || quantProd[i]==estoqueProd[12]){
				estoqueProd[12]-=quantProd[i];
			}else if(quantProd[i]>quantProd[12]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 2:
			carrinho[i]=prodPreco[13];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[13] || quantProd[i]==estoqueProd[13]){
				estoqueProd[13]-=quantProd[i];
			}else if(quantProd[i]>quantProd[13]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 3:
			carrinho[i]=prodPreco[14];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[14] || quantProd[i]==estoqueProd[14]){
				estoqueProd[14]-=quantProd[i];
			}else if(quantProd[i]>quantProd[14]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void gadgets(){
	system("cls");
    printf("\t\t ___________________\n");
    printf("\t\t|      GADGETS      |\n");
	printf("\t\t|___________________|\n");
	printf("| 1- PS4 | 2- Xbox One | 3- Controle para computador |");
	printf("| R$: 33,00 | R$: 36,00| R$: 45,00 |\n");
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[15],estoqueProd[16],estoqueProd[17]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[15];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[15] || quantProd[i]==estoqueProd[15]){
				estoqueProd[15]-=quantProd[i];
			}else if(quantProd[i]>quantProd[15]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 2:
			carrinho[i]=prodPreco[16];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[16] || quantProd[i]==estoqueProd[16]){
				estoqueProd[16]-=quantProd[i];
			}else if(quantProd[i]>quantProd[16]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		case 3:
			carrinho[i]=prodPreco[17];
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[17] || quantProd[i]==estoqueProd[17]){
				estoqueProd[17]-=quantProd[i];
			}else if(quantProd[i]>quantProd[17]){
				printf("Desculpe, estoque do produto insuficiente.\n");}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void carrinhu(){
	system("cls");
	printf("\t\t _______________________\n");
	printf("\t\t|\tCARRINHO\t|\n");
	printf("\t\t|_______________________|\n");
	int esc_cont;
	for(n=0;n<i;n++){
    totalProd=carrinho[n]*quantProd[n];
    totalPag+=totalProd;
	printf("Preço: %.2f Quantidade %d\n", carrinho[n], quantProd[n]);
    }
    if(totalPag==0){
    	printf("Carrinho vazio.\n");
    	printf("| 1 - Voltar ao menu principal | 2 - Sair |\n");
    	printf("--------------------------------------------------------------------:");
		scanf("%d", &esc_cont);
		esc_cont+=1;}
	else{
		printf("Total a pagar: %.2f\n", totalPag);
		printf("| 1 -Finalizar compra | 2 - Continuar comprando |\n");
		printf("------------------------------------------------:");
		scanf("%d", &esc_cont);}
	switch(esc_cont){
		case 1:
			entrega();
			break;
		case 2:
			menu();
			break;
		default:
			printf("Opção digitada inválida, por favor tente novamente.\n");
			system("pause");
			carrinhu();
	}
}

void entrega(){
	system("cls");
	printf("\t\t _______________________________\n");
	printf("\t\t|\tDADOS DO COMPRADOR\t|\n");
	printf("\t\t|_______________________________|\n");
	fflush(stdin);
	printf("Digite o nome do pagador: ");
	fgets(cliente.nome,100,stdin);
	fflush(stdin);
	printf("Endereço: ");
	fgets(cliente.endereco,30,stdin);
	fflush(stdin);
	printf("Número da residência: ");
	scanf("%d", &cliente.numero);
	printf("CEP: ");
	scanf("%d", &cliente.cep);
	
	system("cls");
	printf("\t\t _______________________\n");
    printf("\t\t|      NOTA FISCAL      |\n");
	printf("\t\t|_______________________|\n");
	printf("Nome do cliente: %s", cliente.nome);
	printf("Endereço: %s", cliente.endereco);
	printf("Número da residência: %d", cliente.numero);
	printf("CEP: %d", cliente.cep);
	printf("\nBye! Visite novamente c:\n");
	exit(0);
}

void sair(){
	printf("\nBye! Visite novamente c:\n");
	exit(0);
}


/* Tenho que botar a opção de visualizar
carrinho e retirar o produto do carrinho
(Seria zerar o vetor do produto)

Ideia pra cadastro:
1 - cliente
2 - produtos
3 - Vendas

Opção 1: cliente
  1- Novo cliente
  2- Lista de clientes cadastrados
  3-...
  4- sair
  */