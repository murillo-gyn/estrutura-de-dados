#include "pilha.h"
using namespace std;

int main()
{
    Pilha obj;
    int a;
    do{
        cout<<"digite a opcao:"<<endl;
        cout<<"1)Empilhar;"<<endl;
        cout<<"2)Desempilhar;"<<endl;
        cout<<"3)Limpar a pilha"<<endl;
        cout<<"4)Tamanho da pilha"<<endl;
        cout<<"5)Inverter"<<endl;
        cout<<"6)Exibir todos os elementos (forma Iterativa)"<<endl;
        cout<<"7)Exibir todos os elementos (forma Recursiva)"<<endl;
        cout<<"digite a opçao:";
        cin>>a;
        if(a == 1)
        {
            int b;
            cout<<"digite o numero para Empilhar:";
            cin>>b;
            obj.push(b);
        }
        else
        {
            if(a == 2)
            {
                cout<<"Desempilhar:";
                cout<<obj.pop()<<endl;
            }
            else
            {
                if(a == 3)
                {
                    cout<<"Limpar Lista"<<endl;
                    obj.clear();
                }
                else
                {
                    if(a == 4)
                    {
                        cout<<"O tamanho da pilha é: "<<obj.size()<<endl;
                    }
                    else
                    {
                        if(a == 5)
                        {
                            cout<<"inverter Pilha:"<<endl;
                            obj.inverter();
                        }
                        else
                        {
                            if(a == 6)
                            {
                                cout<<"exibir elementos iterativo:";
                                obj.print();
                                cout<<endl;
                            }
                            else
                            {
                                if(a == 7)
                                {
                                    cout<<"exibir elementos recursivo:";
                                    obj.printPilhaRecursivo();
                                    cout<<endl;
                                }
                                else
                                {
                                    cout<<"opçao desejada invalida!";
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        system("clear");
    }while(a);
    return 0;
}
