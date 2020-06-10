#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct cliente{
  char nome[MAX];
  char endereco[MAX];
  long int cep;
  int numero;
} cliente;

char menu();
void jogos_pc();
void jogos_ps3();
void jogos_ps4();
void jogos_xbox360();
void jogos_xboxone();
void controles ();
void entrega();
float calculoPag(float totalPag);

float carrinho[]={0,0,0};
float prodPreco[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
int quantProd[10], i=0, escProd,n;
int main(void) {
  char nome[30];
  char endereco[30];
  char resp;
  float totalProd=0,totalPag=0, pagamento;
 	printf("------------------- Loja teste --------------------");
	// loop infinito do programa
	while(1)
	{
		// obtém a escolha do usuário
		resp = menu();
 
		// testa o valor de "resp"
		if(resp == '1')
			jogos_pc();
		else if(resp == '2')
			jogos_ps3();
		else if(resp == '3')
			jogos_ps4();
		else if(resp == '4')
			jogos_xbox360();
		else if(resp == '5')
			jogos_xboxone();
		else if(resp == '6')
			controles();
		else if(resp == '0') // se for igual a 0, então sai do loop while
			break;
		else
		{
			printf("\nOpcao invalida! Pressione <Enter> para continuar...");
			scanf("%*c");
		}
   i++;
	}
  //CÁLCULO DAS COMPRAS, QUANTIDADE E PREÇO DE SAÍDA.
    for(n=0;n<i;n++){
    totalProd=carrinho[n]*quantProd[n];
    totalPag+=totalProd;
    printf("Preço: %.2f Quantidade %d  Total = %.2f\n", carrinho[n], quantProd[n],totalProd);
    }
  printf("Total a pagar: %.2f\n", totalPag);
  pagamento = calculoPag(totalPag);
  printf("%.2f\n", pagamento);

  printf("Digite o nome do pagador: ");
  fgets(nome,30,stdin);
  printf("Endereço: ");
  fgets(endereco,30,stdin);

	printf("\nBye! Visite novamente c:\n");
  return 0;
}

char menu(){
  char resp[2];
 
	printf("\n1 - Jogos de PC\n");
	printf("2 - Jogos de PS3\n");
	printf("3 - Jogos de PS4\n");
	printf("4 - Jogos de Xbox360\n");
	printf("5 - Jogos Xbox One\n");
	printf("6 - Controles\n");
  printf("7 - Estoque de produtos\n");
	printf("0 - Carrinho\n");
	printf("Digite o numero da opcao: ");
	scanf("%1s%*c", resp); // o *c pega o Enter e descarta
	return resp[0];
}

void jogos_pc(){
  printf("| Produto 1=1R | Produto 1=2R | Produto 1=3R |\n");
  printf("------------------------------: ");
  scanf("%d", &escProd);
  if(escProd==1){
  carrinho[i]=prodPreco[0];
  printf("Quantidade: ");
   scanf("%d", &quantProd[i]);
        }
  else if(escProd==2){
  carrinho[i]=prodPreco[1];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
        }
  else if(escProd==3){
  carrinho[i]=prodPreco[2];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
  }
  else
  printf("Número digitado inválido, por favor tente novamente.");
}

void jogos_ps3(){
  printf("| Produto 2=4R | Produto 2=5R | Produto 2=6R |\n");
  printf("------------------------------: ");
  scanf("%d", &escProd);
  if(escProd==1){
  carrinho[i]=prodPreco[3];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
        }
  else if(escProd==2){
  carrinho[i]=prodPreco[4];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
        }
  else if(escProd==3){
  carrinho[i]=prodPreco[5];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
        }
  else
  printf("Número digitado inválido, por favor tente novamente.");
}

void jogos_ps4(){
  printf("| Produto 3=7R | Produto 3=8R | Produto 3=9 |\n");
  printf("------------------------------: ");
  scanf("%d", &escProd);
  if(escProd==1){
  carrinho[i]=prodPreco[6];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
  }
  else if(escProd==2){
  carrinho[i]=prodPreco[7];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);
        }
  else if(escProd==3){
  carrinho[i]=prodPreco[8];
  printf("Quantidade: ");
  scanf("%d", &quantProd[i]);}
        else
  printf("Opção digitada inválida, por favor tente novamente.");
}

void jogos_xbox360(){
  printf("Teste 10");
  printf("Teste 11");
  printf("Teste 12");
}

void jogos_xboxone(){
  printf("Teste 13");
  printf("Teste 14");
  printf("Teste 15");
}

void controles(){
  printf("Teste 16");
  printf("Teste 17");
  printf("Teste 18");
}

float calculoPag(float totalPag){
  int escPag, escPag2, escCard, parcelamento;
  float valor;
  printf("\nQual forma gostaria de efetuar o pagamento?\n");
  printf("| 1- Cartão | 2- Boleto |\n-------------------:");
  scanf("%d", &escPag);
  if(escPag==1){
    printf("| 1- Débito | 2- Crédito |\n------------------:");
    scanf("%d", &escPag2);
      if(escPag2==1){
      valor = totalPag;
      printf("Débito no valor de %.2f", valor);}
      else if(escPag2==2){
      printf("| 1- À Vista | 2- Parcelado |\n-------------------:");
      scanf("%d", &escCard);
        if(escCard==1){
        valor = totalPag;
        printf("Cartão à vista no valor de %.2f\n", valor);}
        else if(escCard==2){
        printf("Deseja parcelar em quantas vezes?\n-------------------:");
        scanf("%d", &parcelamento);
        valor = totalPag/parcelamento;
        }
        else
        printf("Inválido\n");
      }
      else
      printf("Inválido\n");
  }
  else if(escPag==2){
    valor = totalPag;
    printf("Boleto no valor de %.2f\n", valor);
  }
  else
  printf("Inválido\n");

return valor;}

void entrega(){
  printf("Digite o nome do pagador: ");
  fgets(cliente.nome,100,stdin);
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