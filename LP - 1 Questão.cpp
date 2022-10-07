#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, n3, media;
	printf("Calcular a média de 3 múmeros\n\n");
	
	printf("Primeiro Número: ");
	scanf("%f", &n1);
	
	printf("Segundo Número: ");
	scanf("%f", &n2);
	
	printf("Terceiro Número: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	printf("O valor calculado da media entre os numeros %.2f, %.2f e %.2f foi: %.2f", n1, n2, n3, media);
	
	return 0;
}
