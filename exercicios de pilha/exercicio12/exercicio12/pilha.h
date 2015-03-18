#ifndef PILHA_H
#define PILHA_H
#include <iostream>
#include <cstdlib>
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
    void clear();
    int size();
    void print();
    void printPilhaRec(Node*);
    void printPilhaRecursivo();
    void inverter();
};

#endif // PILHA_H
