#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, n3, soma, subtracao;
	printf("Exercicio 6 \n\n");
	
	printf("Primeiro Número: ");
	scanf("%d", &n1);
	
	printf("Segundo Número: ");
	scanf("%d", &n2);
	
	printf("Terceiro Número: ");
	scanf("%d", &n3);
	
	soma = n1 + n2;
	subtracao =  soma - n3;

	printf("\n\n\n");
	printf("Resultado das operações: \n%d + %d = %d - %d = %d", n1, n2, soma, n3 , subtracao);
	
	return 0;
}
