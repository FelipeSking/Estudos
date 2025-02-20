#include <stdio.h> //agora tilizando a função calloc
#include <stdlib.h>

int main() {
    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int)); // aloca memória para 5 inteiros


    if (ponteiro != NULL) { // verifica se a alocação foi bem sucedida
        for (int i = 0; i < 5; i++) {
              printf("%d ", ponteiro[i]);
           
        }
      
       

        free(ponteiro); // libera a memória
    } else {
        printf("Erro na alocação de memória.\n");
    }

    return 0;
}