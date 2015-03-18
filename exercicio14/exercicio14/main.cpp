#include <iostream>
#include "pilha.h"
using namespace std;

int main()
{
    string expressao;
    cout<<"digite a expressao matematica:";
    getline(cin,expressao);
    Pilha obj;
    cout<<obj.posFixa(expressao)<<endl<<endl<<endl;
    return 0;
}
