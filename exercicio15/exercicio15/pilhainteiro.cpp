#include "pilhainteiro.h"

PilhaInteiro::PilhaInteiro()
{
    topo = NULL;
}

void PilhaInteiro::push(float x)
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

float PilhaInteiro::pop()
{
    if(!topo)
    {
        return 0;
    }
    else
    {
        Node *aux = topo;
        topo = topo->prox;
        float valor = aux->x;
        delete aux;
        return valor;
    }
}

bool PilhaInteiro::is_empty()
{
    if(!topo)
    {
        return true;
    }
    return false;
}
