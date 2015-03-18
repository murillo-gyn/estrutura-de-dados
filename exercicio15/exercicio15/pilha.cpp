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

bool Pilha::expressao(string expressao)
{
    bool x = true;
    for(int i=0; i<expressao.size();i++)
    {
        if(expressao[i]=='{'||expressao[i]=='['||expressao[i]=='(')
        {
            push(expressao[i]);
        }
        if((expressao[i]=='}' && pop()!='{')||(expressao[i]==']' && pop()!='[')||(expressao[i]==')' && pop()!='('))
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

void Pilha::posFixa(string expressao)
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
    cout<<expressaoCalculada(saida);
}


float Pilha::expressaoCalculada(string saida)
{
    PilhaInteiro obj;
    float a=0, b=0;
    for(int i=0; i<saida.size(); i++)
    {
        if((int)saida[i]>47 && (int)saida[i]<58)
        {
            obj.push((int)saida[i]-48);
        }
        else
        {
            if(saida[i]=='+')
            {
                a=obj.pop();
                b=obj.pop();
                obj.push(b+a);
            }
            else
            {
                if(saida[i]=='-')
                {
                    a=obj.pop();
                    b=obj.pop();
                    obj.push(b-a);
                }
                else
                {
                    if(saida[i]=='*')
                    {
                        a=obj.pop();
                        b=obj.pop();
                        obj.push(b*a);
                    }
                    else
                    {
                        if(saida[i]=='/')
                        {
                            a=obj.pop();
                            b=obj.pop();
                            obj.push(b/a);
                        }
                        else
                        {
                            cout<< "A expressao digitada é invalida!";
                            break;
                        }
                    }


                }
            }
        }
    }//fim do for
    return obj.pop();
}
