#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#include <cstdlib>
#include <string>
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
    bool funcao(string);
};

#endif // PILHA_H
