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
	subtracao =  (n1 + n2) - n3;
	printf("O valor calculado é a soma entre os numeros %d e %d, foi: %d\n\n", n1, n2, soma);
	printf("O valor calculado é a subtracao da soma dos dois primeiro numeros %d, %d e %d foi: %d\n\n", n1, n2, n3, subtracao);
	
	return 0;
}
