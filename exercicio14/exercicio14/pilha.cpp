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

string Pilha::posFixa(string expressao)
{
    string saida;
    for(int i=0; i<expressao.size();i++)
    {
        if(expressao[i]=='(' || expressao[i]=='{' || expressao[i]=='[')
        {
            push(expressao[i]);
        }
        else
        {
            if(expressao[i]=='+' || expressao[i]=='-' || expressao[i]=='*' || expressao[i]=='/')
            {
                if((is_empty()||(topo->x=='*'||topo->x=='/'||topo->x=='+'||topo->x=='-'))&&(expressao[i]=='+'||expressao[i]=='-'))
                {
                    saida=saida+pop();
                    push(expressao[i]);
                }
                else
                {
                    push(expressao[i]);
                }
            }
            else
            {
                if(expressao[i]==')'||expressao[i]=='}'||expressao[i]==']')
                {
                    while(topo->x!='(' && topo->x!='{' && topo->x!='[')
                    {
                        saida=saida+pop();
                    }
                    pop();
                }
                else
                {
                    saida=saida+expressao[i];
                }
            }

        }
    }//fim do for
    while(!is_empty())
    {
        if(topo->x!='(' && topo->x!='{' && topo->x!='[')
        {
            saida=saida+pop();
        }
        else
        {
            pop();
        }
    }

    return saida;
}
