#include <stdio.h>

void troca(int *x, int *y) {

puts("===> FUNCAO");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);


    int aux = *x;
    *x = *y;
    *y = aux;

    puts("===> depois da FUNCAO");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&aux = %p, z = %d\n\n", &aux, aux);

    
}
int main() {
    int a = 10;
    int b = 20;
    puts("### ANTES DE CHAMAR A FUNCAO");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    //printf("aux = %d\n\n", aux);


    
    troca(&a, &b);


    printf("a = %d, b = %d\n", a, b);

    return 0;
    }