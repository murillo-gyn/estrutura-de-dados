#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#include <string>
#include "pilhainteiro.h"
using namespace std;

class Pilha
{
private:
    class Node{
    public:
       char x;
       Node *prox;
    };
    Node  *topo;
public:
    Pilha();
    void push(char);
    char pop();
    bool is_empty();
    void posFixa(string);
    bool expressao(string);
    float expressaoCalculada(string);

};

#endif // PILHA_H
