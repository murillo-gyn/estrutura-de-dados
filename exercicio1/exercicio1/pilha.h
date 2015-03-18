#ifndef PILHA_H
#define PILHA_H

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
};

#endif // PILHA_H
