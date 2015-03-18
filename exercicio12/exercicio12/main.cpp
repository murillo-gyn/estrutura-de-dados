#include <iostream>
#include "pilha.h"
using namespace std;

int main()
{
    int valor, base;
    Pilha obj;
    cout<<"digite o valor que gostaria de converter: ";
    cin>>valor;
    cout<<"digite a base que gostaria de ver o numero digitado: ";
    cin>>base;
    while(valor/base)
    {
        obj.push(valor%base);
        valor = valor/base;
    }
    obj.push(valor%base);
    while(!obj.is_empty())
    {
        int x=obj.pop();
        if(x==10)
        {
            cout<<"A";
        }
        if(x==11)
        {
            cout<<"B";
        }
        if(x==12)
        {
            cout<<"C";
        }
        if(x==13)
        {
            cout<<"D";
        }
        if(x==14)
        {
            cout<<"E";
        }
        if(x==15)
        {
            cout<<"F";
        }
        if(x==16)
        {
            cout<<"G";
        }
        if(x==17)
        {
            cout<<"H";
        }
        if(x==18)
        {
            cout<<"I";
        }
        if(x==19)
        {
            cout<<"J";
        }
        if(x==20)
        {
            cout<<"K";
        }
        if(x==21)
        {
            cout<<"L";
        }
        if(x==23)
        {
            cout<<"M";
        }
        if(x==24)
        {
            cout<<"N";
        }
        if(x==25)
        {
            cout<<"O";
        }
        if(x==26)
        {
            cout<<"P";
        }
        if(x==27)
        {
            cout<<"Q";
        }
        if(x==28)
        {
            cout<<"R";
        }
        if(x==29)
        {
            cout<<"S";
        }
        if(x==30)
        {
            cout<<"T";
        }

        if(x==31)
        {
            cout<<"U";
        }

        if(x==32)
        {
            cout<<"V";
        }
        if(x==33)
        {
            cout<<"W";
        }

        if(x==34)
        {
            cout<<"X";
        }

        if(x==35)
        {
            cout<<"Y";
        }

        if(x==36)
        {
            cout<<"Z";
        }
        if(x<10&&x>=0)
        {
            cout<<x;
        }
    }
    cout<<endl;
    return 0;
}

