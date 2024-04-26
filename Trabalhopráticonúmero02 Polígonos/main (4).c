#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"
#include "poligono.h"

int main() {
    FILE* arquivo;
    arquivo = fopen("vertices.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numVertices;
    fscanf(arquivo, "%d", &numVertices);

    Node* listaPontos = NULL;
    for (int i = 0; i < numVertices; i++) {
        Ponto ponto;
        fscanf(arquivo, "%f %f", &ponto.X, &ponto.Y);
        listaPontos = inserirPonto(listaPontos, ponto);
    }

    fclose(arquivo);

    float areaTotal = 0;
    Node* atual = listaPontos;
    while (atual != NULL && atual->prox != NULL && atual->prox->prox != NULL) {
        areaTotal += AreaTriangulo(atual->ponto, atual->prox->ponto, atual->prox->prox->ponto);
        atual = atual->prox;
    }

    printf("A area do poligono e: %.2f\n", areaTotal);

    liberarLista(listaPontos);

    return 0;
}
