#include "poligono.h"
#include <stdlib.h>

Node* inserirPonto(Node* lista, Ponto ponto) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->ponto = ponto;
    novo->prox = lista;
    return novo;
}

void liberarLista(Node* lista) {
    Node* atual = lista;
    while (atual != NULL) {
        Node* proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}
