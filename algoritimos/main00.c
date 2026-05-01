#include <stdio.h>

/**
 * Função: soma_elementos
 * Descrição: Realiza a soma de todos os elementos de um vetor.
 * Complexidade de Tempo: O(n) - Linear
 */
int soma_elementos(int array[], int n) {
    int soma = 0; // Inicializa a variável soma com 0

    // Laço de i = 0 até n-1
    for (int i = 0; i < n; i++) {
        soma += array[i]; // Acumula o valor do elemento atual
    }

    return soma; // Retorna o total acumulado
}

int main() {
    // Exemplo de uso com um array de 5 elementos
    int meu_array[] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    int resultado = soma_elementos(meu_array, tamanho);

    printf("A soma dos elementos e: %d\n", resultado);

    return 0;
}