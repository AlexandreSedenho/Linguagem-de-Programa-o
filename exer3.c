#include <stdio.h>

int main() {
    int a, b, c, prim, seg, terc;
    
    while(1) {
        printf("Digite três valores (digite -1 para encerrar): ");
        scanf("%d", &a);
        
        if( a == -1 ) {
            return 0;
        }
        
        scanf("%d %d", &b, &c);
        
        prim = a;
        seg = b;
        terc = c;
        
        if( b > prim ) {
            prim = b;
            seg = a;
            terc = c;
        }
        
        if( c > prim ) {
            prim = c;
            seg = a;
            terc = b;
        }
        
        if( prim*prim == seg*seg + terc*terc ){
            printf("Pode formar um triângulo retangulo\n");
        }else{
            printf("Não pode formar um triângulo retângulo\n");
        }
    }
    return 0;
}