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

int Pilha::pop()
{
    if(!topo)
    {
        return 0;
    }
    else
    {
        Node *aux = topo;
        topo = topo->prox;
        int valor = aux->x;
        delete aux;
        return valor;
    }
}

bool Pilha::is_empty()
{
    if(!topo)
    {
        return true;
    }
    return false;
}
