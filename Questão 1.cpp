#include <stdio.h>

typedef struct Funcionario{
	char Nome[50];
	float mes1, mes2, mes3;

}Funcionario;

int main(){
	Funcionario funcionario[2];
	float soma[2], somaT;
	
	for(int i=0; i<2; i++){
		printf("Coloque o nome do funcionario %d: ", i+1);
		fgets(funcionario[i].Nome, 50, stdin);
		printf("\n");
		
		printf("Vendas mensais do funcionario %s", funcionario[i].Nome);
		
		printf("Mes 1: ");
		scanf("%f", &funcionario[i].mes1);
		
		printf("Mes 2: ");
		scanf("%f", &funcionario[i].mes2);
		
		printf("Mes 3: ");
		scanf("%f", &funcionario[i].mes3);
		
		getchar();
		
		soma[i] = (funcionario[i].mes1 + funcionario[i].mes2 + funcionario[i].mes3) * 0.001;
		somaT += funcionario[i].mes1 + funcionario[i].mes2 + funcionario[i].mes3;
		
		printf("\nPontuacao do Funcionario %s", funcionario[i].Nome);
		printf("Pontuacao: %.2f", soma[i]);
		
		printf("\n\n");
	}
	
	if(soma[0] < soma[1]){
		printf("Funcionario com a maior pontuacao: %s", funcionario[1].Nome);
		printf("Pontuacao: %.2f\n\n", soma[1]);
	}else{
		printf("Funcionario com a maior pontuacao: %s", funcionario[0].Nome);
		printf("Pontuacao: %.2f\n\n", soma[0]);
	}
	
	printf("O valor total vendido foi %.2fR$", somaT);
	
	return 0;
}
