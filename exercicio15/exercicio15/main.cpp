#include <iostream>
#include "pilha.h"
using namespace std;

int main()
{
    string expressao;
    cout<<"digite a expressao matematica:"<<endl;
    getline(cin,expressao);
    Pilha obj;
    if(obj.expressao(expressao))
    {
        obj.posFixa(expressao);
    }
    else
    {
        cout<<"A expressao digitada nao é valida!"<<endl;
    }
    return 0;
}
