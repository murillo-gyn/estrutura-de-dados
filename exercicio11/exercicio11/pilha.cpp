#include "pilha.h"
Pilha::Pilha()
{
    topo = NULL;
}

void Pilha::push(char x)
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

char Pilha::pop()
{
    if(!topo)
    {
        return 0;
    }
    else
    {
        Node *aux = topo;
        topo = topo->prox;
        char valor = aux->x;
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

bool Pilha::funcao(string expressao)
{
    bool x = true;
    int i=0;
    while(expressao[i]!='#')
    {
        push(expressao[i]);
        i++;
    }
    i++;
    for(;i<expressao.size(); i++)
    {
        if(expressao[i]!=pop())
        {
            x = false;
        }
    }
    if(!is_empty())
    {
        x = false;
    }
    return x;
}
