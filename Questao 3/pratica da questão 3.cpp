#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, media;
	printf("Calcular a média de 2 múmeros\n\n");
	
	printf("Primeiro Número: ");
	scanf("%f", &n1);
	
	printf("Segundo Número: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	printf("O valor calculado da media entre os numeros %f e %f foi: %f", n1, n2, media);
	
	return 0;
}
