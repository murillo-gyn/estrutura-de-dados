#ifndef PILHAINTEIRO_H
#define PILHAINTEIRO_H

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class PilhaInteiro
{
private:
    class Node{
    public:
      float x;
       Node *prox;
    };
    Node  *topo;
public:
    PilhaInteiro();
    void push(float);
    float pop();
    bool is_empty();
};

#endif // PILHAINTEIRO_H
