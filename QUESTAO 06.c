#include <stdio.h>
#include <locale.h>

    int maiorNum(int n1, int n2, int n3){
    int maior = n1;
    
    if(n2 > maior){
    maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }
    
    return maior;
}

int main(){
	
	setlocale(LC_ALL, "");
    
    int n1, n2, n3;
    
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int maiornumero = maiorNum(n1, n2, n3);
    
    printf("O maior numero eh: %d", maiornumero);
}