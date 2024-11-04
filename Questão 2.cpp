#include <stdio.h>

/*2 - Faça um programa que controle o estoque de uma loja de brinquedos. Atualmente, 
no estoque há 2 itens, cada um contendo código (número), descrição, preço de compra, 
preço de venda, quantidade em estoque e estoque mínimo. O programa deverá: 

A. Criar uma rotina para cadastrar os produtos.  

B.  Criar uma rotina para mostrar o valor do lucro obtido com a venda de 
determinado produto e o percentual que esse valor representa.  

C.  Criar uma rotina que mostre os produtos com quantidade em estoque abaixo do 
estoque mínimo permitido.*/

typedef struct Produtos{

    char nome[50];
    int cod;
    char des[100];
    float preco_compra;
    float preco_venda;
    int quantidade_estoque;
    int quantidade_minima;

}Produtos;

int main(){
    Produtos produtos;
    float lucro, per;
    int quant = 0;

    for(int i=0; i<2; i++){
        printf("Coloque o nome do produto: ");
        scanf("%49[^\n]s", produtos.nome);

        printf("Coloque seu codigo: ");
        scanf("%d", &produtos.cod);

        getchar();

        printf("Coloque a descricao do produto: ");
        scanf("%49[^\n]s", produtos.des);

        printf("O preco da compra, em R$: ");
        scanf("%f", &produtos.preco_compra);

        printf("O preco de venda, em R$: ");
        scanf("%f", &produtos.preco_venda);

        printf("A quantidade em estoque: ");
        scanf("%d", &produtos.quantidade_estoque);

        printf("A quantidade em estoque minima: ");
        scanf("%d", &produtos.quantidade_minima);

        lucro = produtos.preco_venda - produtos.preco_compra;
        per = (lucro / produtos.preco_compra) * 100;

        if(produtos.quantidade_minima > produtos.quantidade_estoque){
            quant++;
        }

        printf("\nProduto: %s\n", produtos.nome);
        printf("Codigo: %d\n", produtos.cod);
        printf("Descricao: %s\n", produtos.des);
        printf("Preco de compra: %.2fR$\n", produtos.preco_compra);
        printf("Preco de venda: %.2fR$\n", produtos.preco_venda);
        printf("Lucro na venda: %.2fR$\n", lucro);
        printf("Percentual do lucro: %.2f por cento\n", per);
        printf("Quantidade minima no estoque: %d\n", produtos.quantidade_minima);
        printf("Em estoque: %d\n\n", produtos.quantidade_estoque);

        getchar();

    }

    printf("O numero de produtos com o estoque abaixo do minimo e %d", quant);

    return 0;
}