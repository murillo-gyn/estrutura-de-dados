#include <iostream>
#include "pilha.h"
using namespace std;

int main()
{
    string expressao;
    cout<<"digite a expressao matematica."<<endl;
    getline(cin,expressao);
    Pilha obj;
    cout<<obj.funcao(expressao);
}
