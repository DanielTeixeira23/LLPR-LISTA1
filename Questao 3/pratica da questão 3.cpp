#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, media;
	printf("Calcular a m�dia de 2 m�meros\n\n");
	
	printf("Primeiro N�mero: ");
	scanf("%f", &n1);
	
	printf("Segundo N�mero: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	printf("O valor calculado da media entre os numeros %f e %f foi: %f", n1, n2, media);
	
	return 0;
}
