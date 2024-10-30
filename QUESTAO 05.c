#include <stdio.h>
#include <locale.h>

int MCD(int a, int b) {
    if (b == 0) {
        return a;
    } 
    else {
        return MCD(b, a % b);
    }
}

int main() {
	
	setlocale(LC_ALL, "");
	
    int n1 = 103;
    int n2 = 77;

    int resultado = MCD(n1, n2);

    printf("O MCD de %d e %d eh: %d\n", n1, n2, resultado);

    return 0;
}
