#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha:  \n"<<endl;

    do{
        cout << "Digite 0 para parar o programa" <<endl;
        cout << "Digite 1 para inserir um elemento" <<endl;
        cout << "Digite 2 para remover um elemento" <<endl;
        cout << "Digite 3 para imprimir a pilha" <<endl;
        cout << "Digite 4 para imprimir o tamanho da pilha" <<endl;
        

        cin >>opcao;
        
        switch(opcao){
            case 1:
                cout << "Digite o elemento a ser inserido:\n";
                cin >> item;
                pilha1.inserir(item);
                break;
            case 2:
                item = pilha1.remover();
                cout << "Elemento " << item << " removido:" <<endl;              
                break;
            case 3:
                pilha1.imprimir();
                break;
            case 4:
                cout << "O tamanho da pilha é  " << pilha1.qualTamanho()<<endl;              
                break;
        }

    }while(opcao != 0);
}