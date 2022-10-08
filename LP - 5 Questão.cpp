#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, resto;
	float quociente;
	
	printf("Calcular o quociente e o resto entre 2 múmeros\n\n");
	
	printf("Primeiro Número: ");
	scanf("%d", &n1);
	
	printf("Segundo Número: ");
	scanf("%d", &n2);
	
	quociente = (float) n1 / n2;
	resto =  n1 % n2;
	
	printf("Calcular o quociente entre os numeros %d, %d foi: %.2f\n\n", n1, n2, quociente);
	printf("Calcular o resto entre os numeros %d, %d foi: %d", n1, n2, resto);
	
	return 0;
}
