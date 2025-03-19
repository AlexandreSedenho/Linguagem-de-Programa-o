#include <stdio.h>

int main() {
    
    int soma = 0;
    
    float total = 0;
    
    float numero, media;
    
    printf("Digite uma nota (digite -5 para encerrar): ");
    scanf("%f", &numero);
    
    while( numero != -5) {
        soma++;
        total += numero;
        
        printf("Digite uma nota (digite -5 para encerrar): ");
        scanf("%f", &numero);
        
    }
    
    media = total / soma;
    
    printf("Média: %2.f", media);

    return 0;
}