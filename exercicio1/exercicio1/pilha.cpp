#include "pilha.h"
#include <stdlib.h>
Pilha::Pilha()
{
    topo = NULL;
}

void Pilha::push(int x)
{
    if(!topo)
    {
        topo = new Node;
        topo->x = x;
        topo->prox = NULL;
    }
    else
    {
        Node *aux = new Node;
        aux->x = x;
        aux ->prox = topo;
        topo = aux;
    }

}

