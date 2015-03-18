#include "pilha.h"
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

void Pilha::clear()
{
    while(topo)
    {
       Node *aux = topo;
       topo = topo -> prox;
       delete aux;
    }
}
int Pilha::size()
{
    Node *pto = topo;
    int a=0;
    while(pto)
    {
        a++;
        pto=pto->prox;
    }
    return a;
}

void Pilha::print()
{
    Node *pto = topo;
    while(pto)
    {
        cout << pto->x <<" ";
        pto = pto->prox;
    }
}

void Pilha::printPilhaRec(Node *pto)
{
    if(pto->prox)
    {
        printPilhaRec(pto->prox);
    }
    cout<< pto->x<<" ";
}

void Pilha::inverter()
{
    if(topo)
    {
        Pilha aux1, aux2;
        while(!is_empty())
        {
            aux1.push(pop());
        }
        while(!aux1.is_empty())
        {
            aux2.push(aux1.pop());
        }
        while(!aux2.is_empty())
        {
            push(aux2.pop());
        }
    }
}

void Pilha::printPilhaRecursivo()
{
    printPilhaRec(topo);
}
