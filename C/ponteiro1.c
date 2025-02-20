#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ponteiro;
    ponteiro = (int*) malloc(5 * sizeof(int)); // aloca memória para 5 inteiros


    if (ponteiro != NULL) { // verifica se a alocação foi bem sucedida
        for (int i = 0; i < 5; i++) {
            ponteiro[i] = i + 1; // inicializa os valores manualmente
        }

        for (int i = 0; i < 5; i++) {
            printf("%d ", ponteiro[i]);
        }
        printf("\n");

        free(ponteiro); // libera a memória
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}