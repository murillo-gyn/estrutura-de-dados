#include <iostream>
#include <stdlib.h>
#include "pilha.h"

using namespace std;

int main()
{
    int a, origem, destino;
    do
    {
        cout<<"digite a quantidade de Discos:";
        cin>>a;
    }while(a<3||a>7);
    Pilha obj[3];
    while(a)
    {
        obj[0].push(a);
        a--;
    }
    do
    {
        for(int i=0; i<3; i++)
        {
            cout<<"pilha "<<i+1<<endl;
            obj[i].print();
            cout<<endl;
        }

        do
        {
            cout<<"digite o pino que gostaria de retirar o disco: ";
            cin>>origem;
            if(origem<1||origem>3)
            {
                cout<<"pino solicitado nao é valido! "<<endl;
            }
        }while(origem<1||origem>3);
        do
        {
            cout<<"digite o pino que gostaria de inserir o disco: ";
            cin>>destino;
            if(destino<1||destino>3)
            {
                cout<<"pino solicitado nao é valido! "<<endl;

            }
        }while(destino<1||destino>3);
        if(obj[origem-1].valor()>obj[destino-1].valor()||obj[origem-1].valor()==9999)
        {
            cout<<"movimento nao pode ser realizado"<<endl;
        }
            else
            {
                obj[destino-1].push(obj[origem-1].pop());
            }

    }while(!obj[0].is_empty()||!obj[1].is_empty());
    for(int i=0; i<3; i++)
    {
        cout<<"pilha "<<i+1<<endl;
        obj[i].print();
        cout<<endl;
    }
    cout<<"parabens!! querido usuario, ja pode se inscrever em ciencias da computacao!!!"<<endl;
}
