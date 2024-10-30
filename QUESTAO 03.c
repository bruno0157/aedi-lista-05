#include <stdio.h>
#include <locale.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	
	setlocale(LC_ALL, "");
	
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    printf("O %d° termo da sequencia de Fibonacci e: %d\n", n, fibonacci(n));
    
    return 0;
}
