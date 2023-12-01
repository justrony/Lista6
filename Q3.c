#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DadosVetor {
    int *ponteiroMatriz;
    int qtdElementos;
    float media;
};

void gerarVetorEMedia(struct DadosVetor *dados) {
    int soma = 0;

    dados->ponteiroMatriz = (int *)malloc(dados->qtdElementos * sizeof(int));

    for (int i = 0; i < dados->qtdElementos; i++) {
        dados->ponteiroMatriz[i] = rand() % 100;  
        soma += dados->ponteiroMatriz[i];
    }
    dados->media = (float)soma / dados->qtdElementos;
}

int main() {

    srand(time(NULL));

    struct DadosVetor dados;

    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &dados.qtdElementos);

    gerarVetorEMedia(&dados);

    printf("Vetor gerado:\n");
    
    for (int i = 0; i < dados.qtdElementos; i++) {
        printf("%d ", dados.ponteiroMatriz[i]);
    }

    printf("\nMedia do vetor: %.2f\n", dados.media);

    free(dados.ponteiroMatriz);

    return 0;
}
