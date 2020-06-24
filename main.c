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


char nomeProdutos[20][20]={"God Of War 4", "The Last of Us II", "Uncharted 3", "Halo Infinite", "Gears 5", "Fifa 20", "New Super Mario", 
"Super Mario Odissey", "Pokémon Sword", "Mouse Steelseries", "Teclado CMQuickFire", "Hyper X Cloud II", "Console Mega Drive", "Playstation I",
  "GameBoy Color", "Mi band 4", "AirDots", "Carregador Turbo"}; //PRODUTOS VENDIDOS
int carrinhoNome[10]={0,0,0,0,0}; //USADO PARA PEGAR O NOME USANDO A POSIÇÃO DO I NO MOMENTO DA COMPRA, JUNTAMENTE COM O CARRINHO
float carrinho[10]={0,0,0}; 	//USADO PARA PEGAR O PREÇO DO PRODUTO
float prodPreco[]={69.0,270.0,55.0,229.0,80.0,120.0,107.0,158.0,109.0,310.0,431.0,500.0,273.0,214.0,75.0,216.0,120.0,60.0}; // PREÇO DE CADA PRODUTO
int quantProd[18], i=0, escProd,n; //USADO PARA QUANTIDADE QUE O CLIENTE QUER. OS DEMAIS SÃO PARA LOOP E PARA ESCOLHA
int estoqueProd[18]={9,8,7,9,7,7,5,6,9,4,3,2,1,8,7,6,4,5}; // ESTOQUE DE CADA ITEM
float totalProd[3]={0,0,0},totalPag=0, pagamento; // PARA CALCULAR O VALOR DOS PRODUTOS
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
	printf("Digite a opção desejada: ");
	scanf("%1s%*c", resp); // o *c pega o Enter e descarta
	return resp[0];
}

void playstation(){
	system("cls");
	printf("\t\t _______________________\n");
	printf("\t\t|\tPLAYSTATION\t|\n");
	printf("\t\t|_______________________|\n");
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[0], nomeProdutos[1], nomeProdutos[2]);
	printf("|    R$: %.2f    |       R$: %.2f     |    R$: %.2f   |\n", prodPreco[0], prodPreco[1], prodPreco[2]);
	printf("|   Estoque: %d    |     Estoque: %d       |   Estoque: %d   |\n", estoqueProd[0],estoqueProd[1],estoqueProd[2]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[0];
			carrinhoNome[i]=0;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[0] || quantProd[i]==estoqueProd[0]){ // Tive que botar "|| quantProd[i]==estoqueProd[0]" porque apesar
				estoqueProd[0]-=quantProd[i];								//de funcionar com "<=" dava como encerrado o programa
			}else if(quantProd[i]>quantProd[0]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 2:
			carrinho[i]=prodPreco[1];
			carrinhoNome[i]=1;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[1] || quantProd[i]==estoqueProd[1]){
				estoqueProd[1]-=quantProd[i];
			}else if(quantProd[i]>quantProd[1]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 3:
			carrinho[i]=prodPreco[2];
			carrinhoNome[i]=2;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[2] || quantProd[i]==estoqueProd[2]){
				estoqueProd[2]-=quantProd[i];
			}else if(quantProd[i]>quantProd[2]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
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
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[3], nomeProdutos[4], nomeProdutos[5]);
	printf("|    R$: %.2f    |  R$: %.2f | R$: %.2f |\n", prodPreco[3], prodPreco[4], prodPreco[5]);
	printf("|    Estoque: %d    | Estoque: %d | Estoque: %d |\n", estoqueProd[3],estoqueProd[4],estoqueProd[5]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[3];
			carrinhoNome[i]=3;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[3] || quantProd[i]==estoqueProd[3]){
				estoqueProd[3]-=quantProd[i];
			}else if(quantProd[i]>quantProd[3]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 2:
			carrinho[i]=prodPreco[4];
			carrinhoNome[i]=4;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[4] || quantProd[i]==estoqueProd[4]){
				estoqueProd[4]-=quantProd[i];
			}else if(quantProd[i]>quantProd[4]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
  		case 3:
		  	carrinho[i]=prodPreco[5];
		  	carrinhoNome[i]=5;
		  	printf("Quantidade: ");
		 	scanf("%d", &quantProd[i]);
		 	if(quantProd[i]<=estoqueProd[5] || quantProd[i]==estoqueProd[5]){
				estoqueProd[5]-=quantProd[i];
			}else if(quantProd[i]>quantProd[5]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
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
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[6], nomeProdutos[7], nomeProdutos[8]);
	printf("| R$: %.2f | R$: %.2f | R$: %.2f |\n", prodPreco[6], prodPreco[7], prodPreco[8]);
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[6],estoqueProd[7],estoqueProd[8]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[6];
			carrinhoNome[i]=6;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[6] || quantProd[i]==estoqueProd[6]){
				estoqueProd[6]-=quantProd[i];
			}else if(quantProd[i]>quantProd[6]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 2:
			carrinho[i]=prodPreco[7];
			carrinhoNome[i]=7;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[7] || quantProd[i]==estoqueProd[7]){
				estoqueProd[7]-=quantProd[i];
			}else if(quantProd[i]>quantProd[7]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 3:
			carrinho[i]=prodPreco[8];
			carrinhoNome[i]=8;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[8] || quantProd[i]==estoqueProd[8]){
				estoqueProd[8]-=quantProd[i];
			}else if(quantProd[i]>quantProd[8]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
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
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[9], nomeProdutos[10], nomeProdutos[11]);
	printf("| R$: %.2f | R$: %.2f | R$: %.2f |\n", prodPreco[9], prodPreco[10], prodPreco[11]);
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[9],estoqueProd[10],estoqueProd[11]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[9];
			carrinhoNome[i]=9;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[9] || quantProd[i]==estoqueProd[9]){ 
				estoqueProd[9]-=quantProd[i];								
			}else if(quantProd[i]>estoqueProd[9]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
  		case 2:
			carrinho[i]=prodPreco[10];
			carrinhoNome[i]=10;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[10] || quantProd[i]==estoqueProd[10]){
				estoqueProd[10]-=quantProd[i];
			}else if(quantProd[i]>quantProd[10]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
    	break;
		case 3:
			carrinho[i]=prodPreco[11];
			carrinhoNome[i]=11;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[11] || quantProd[i]==estoqueProd[11]){
				estoqueProd[11]-=quantProd[i];
			}else if(quantProd[i]>quantProd[11]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
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
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[12], nomeProdutos[13], nomeProdutos[14]);
	printf("| R$: %.2f | R$: %.2f | R$: %.2f |\n", prodPreco[12], prodPreco[13], prodPreco[14]);
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[12],estoqueProd[13],estoqueProd[14]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[12];
			carrinhoNome[i]=12;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[12] || quantProd[i]==estoqueProd[12]){
				estoqueProd[12]-=quantProd[i];
			}else if(quantProd[i]>quantProd[12]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 2:
			carrinho[i]=prodPreco[13];
			carrinhoNome[i]=13;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[13] || quantProd[i]==estoqueProd[13]){
				estoqueProd[13]-=quantProd[i];
			}else if(quantProd[i]>quantProd[13]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 3:
			carrinho[i]=prodPreco[14];
			carrinhoNome[i]=14;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[14] || quantProd[i]==estoqueProd[14]){
				estoqueProd[14]-=quantProd[i];
			}else if(quantProd[i]>quantProd[14]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
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
	printf("| 1- %s | 2- %s | 3- %s |\n", nomeProdutos[15], nomeProdutos[16], nomeProdutos[17]);
	printf("| R$: %.2f | R$: %.2f | R$: %.2f |\n", prodPreco[15], prodPreco[16], prodPreco[17]);
	printf("|Estoque: %d|Estoque: %d|Estoque: %d|\n", estoqueProd[15],estoqueProd[16],estoqueProd[17]);
	printf("------------------------------: ");
	scanf("%d", &escProd);
	switch(escProd){
		case 1:
			carrinho[i]=prodPreco[15];
			carrinhoNome[i]=15;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[15] || quantProd[i]==estoqueProd[15]){
				estoqueProd[15]-=quantProd[i];
			}else if(quantProd[i]>quantProd[15]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 2:
			carrinho[i]=prodPreco[16];
			carrinhoNome[i]=16;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[16] || quantProd[i]==estoqueProd[16]){
				estoqueProd[16]-=quantProd[i];
			}else if(quantProd[i]>quantProd[16]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		case 3:
			carrinho[i]=prodPreco[17];
			carrinhoNome[i]=17;
			printf("Quantidade: ");
			scanf("%d", &quantProd[i]);
			if(quantProd[i]<=estoqueProd[17] || quantProd[i]==estoqueProd[17]){
				estoqueProd[17]-=quantProd[i];
			}else if(quantProd[i]>quantProd[17]){
				printf("Desculpe, estoque do produto insuficiente.\n");
				carrinho[i]=0;
				quantProd[i]=0;}
		break;
		default:
	  		printf("Número digitado inválido, por favor tente novamente.\n");
		break;
	}
}

void carrinhu(){
	system("cls");
	fflush(stdin);
	printf("\t\t _______________________\n");
	printf("\t\t|\tCARRINHO\t|\n");
	printf("\t\t|_______________________|\n");
	int esc_cont; //Escolha para voltar ao menu, finalizar compras ou sair
	int retirarItem; //Escolha caso o cliente queira retirar um produto
	for(n=0;n<i;n++){ //Demonstração do carrinho e calculo Produto*quantidade
    totalProd[n]=carrinho[n]*quantProd[n];
    totalPag+=totalProd[n];
	printf("%d -  %s Preço: %.2f Quantidade: %d Preço Final: %.2f\n", n+1, nomeProdutos[carrinhoNome[n]],carrinho[n], quantProd[n], totalProd[n]);
    }
    if(totalPag==0){ //Caso não tenha nenhum produto no carrinho
    	printf("Carrinho vazio.\n");
    	printf("| 1 - Voltar ao menu principal |\n");
    	printf("--------------------------------------------------------------------:");
		scanf("%d", &esc_cont);
		esc_cont+=1;}
	else{
		printf("| 1 -Finalizar compra | 2 - Continuar comprando | 3 - Retirar um item |\n");
		printf("------------------------------------------------:");
		scanf("%d", &esc_cont);}
	switch(esc_cont){
		case 1:
			entrega();
			break;
		case 2:
			menu();
			break;
		case 3:
			fflush(stdin);
			printf("Qual item deseja retirar?\n");
			printf("------------------------:");
			scanf("%d", &retirarItem);
			fflush(stdin);
			carrinho[retirarItem-1]=0; //Zerando os produtos no carrinho
			quantProd[retirarItem-1]=0;//Zerando a quantidade no carrinho
			carrinhu();
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
	scanf("%ld", &cliente.cep);
	
	fflush(stdin);
	system("cls");
	printf("\t\t _______________________\n");
    printf("\t\t|      NOTA FISCAL      |\n");
	printf("\t\t|_______________________|\n");
	printf("Nome do cliente: %s", cliente.nome);
	printf("Endereço: %s", cliente.endereco);
	printf("Número da residência: %d\n", cliente.numero);
	printf("CEP: %ld\n", cliente.cep);
	for(n=0;n<i;n++){
    totalProd[n]=carrinho[n]*quantProd[n];
    totalPag+=totalProd[n];
	printf("%d -  %s Preço: %.2f Quantidade: %d Preço Final: %.2f\n", n+1, nomeProdutos[carrinhoNome[n]],carrinho[n], quantProd[n], totalProd[n]);}
	printf("Pagamento via boleto bancário\n");
	printf("\nObrigado pela preferência! Visite novamente c:\n");
	exit(0);
}

void sair(){
	printf("\nObrigado pela preferência! Visite novamente c:\n");
	exit(0);
}
