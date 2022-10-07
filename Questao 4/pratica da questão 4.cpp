#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, n3, n4, produto;
	printf("Calcular o produto de 4 múmeros\n\n");
	
	printf("Primeiro Número: ");
	scanf("%d", &n1);
	
	printf("Segundo Número: ");
	scanf("%d", &n2);
	
	printf("Terceiro Número: ");
	scanf("%d", &n3);
	
	printf("Quarto Número: ");
	scanf("%d", &n4);
	
	produto = (n1 * n2 * n3 * n4);
	printf("O valor calculado do produto entre os numeros %d, %d, %d e %d foi: %d", n1, n2, n3, n4, produto);
	
	return 0;
}
