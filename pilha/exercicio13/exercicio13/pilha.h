#ifndef PILHA_H
#define PILHA_H
#include <iostream>

using namespace std;

class Pilha
{
private:
    class Node{
    public:
       int x;
       Node *prox;
    };
    Node  *topo;
public:
    Pilha();
    void push(int);
    int pop();
    bool is_empty();
    int valor();
    void print();
};

#endif // PILHA_H
