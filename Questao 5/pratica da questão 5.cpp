#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, quociente, resto;
	printf("Calcular o quociente e o resto entre 2 múmeros\n\n");
	
	printf("Primeiro Número: ");
	scanf("%d", &n1);
	
	printf("Segundo Número: ");
	scanf("%d", &n2);
	
	quociente = n1 / n2;
	resto =  n1 % n2;
	printf("O valor calculado é o quociente entre os numeros %d, %d foi: %d\n\n", n1, n2, quociente);
	printf("O valor calculado é o resto entre os numeros %d, %d foi: %d", n1, n2, resto);
	
	return 0;
}
