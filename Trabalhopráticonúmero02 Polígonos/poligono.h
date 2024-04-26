#ifndef POLIGONO_H
#define POLIGONO_H

#include "ponto.h"

typedef struct Node {
    Ponto ponto;
    struct Node* prox;
} Node;

Node* inserirPonto(Node* lista, Ponto ponto);
void liberarLista(Node* lista);

#endif /* POLIGONO_H */
