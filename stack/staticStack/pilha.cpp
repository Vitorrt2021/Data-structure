#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];

}

pilha::~pilha(){
    delete[] estrutura;
}
bool pilha::estaCheia(){
    return (tamanho == max_itens);
}
bool pilha::estaVazia(){
    return (tamanho == 0);
}
void pilha::inserir(TipoItem item){
    if(!estaCheia()){
        estrutura[tamanho] = item;    
        tamanho++;
    }else{
        cout << "A pilha esta cheia!!!" <<endl;
    }
}
TipoItem pilha::remover(){
    if(!estaVazia()){

        tamanho--;
        return estrutura[tamanho];
    }else{
        cout << "A pilha está vazia!!!" <<endl;
        return 0;
    }
}
void pilha::imprimir(){
    cout << "Pilha: [";
    for(int i=0;i<tamanho;i++){
        cout << estrutura[i] << " ";
    }
    cout << "]" <<endl;
}
int pilha::qualTamanho(){
    return tamanho ;
}
