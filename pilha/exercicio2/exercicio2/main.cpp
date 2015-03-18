#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    Pilha obj;
    int a;
    cout<<"digite um valor para ser empilhado diferente de 0 ";
    while(cin>>a, a)
    {
        obj.push(a);
        cout<<"digite um valor para ser empilhado diferente de 0 ";
    }
    cout<<obj.pop()<<endl;
    return 0;
}
