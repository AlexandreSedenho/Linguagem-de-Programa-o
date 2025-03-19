#include <stdio.h>

int main() {
    float diam;
    float circ;
    float area;
    float raio;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    diam = 2 * raio;
    circ = (2 * 3.14 * raio );
    area = 3.14 * ( raio * raio );
    
    printf("Diâmetro: %.2f\n", diam);
    printf("Circunferência: %.2f\n", circ);
    printf("Área: %.2f", area);
    
    return 0;
}