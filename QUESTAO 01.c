#include <stdio.h>
#include <locale.h>

int Soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + Soma(n - 1);
    }
}

int main() {
	
	setlocale(LC_ALL, "");
	
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int resultado = Soma(n);
    printf("A soma de todos os numeros de 1 ate %d e: %d\n", n, resultado);
    
    return 0;
}
