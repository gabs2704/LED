#include <bits/stdc++.h>
using namespace std;

    //função é um paradigma de programação modular ou procedual
    //função que não retorna valor é um pprocedimento 

    //tipo_retorno id_função(lista_parametros) cabeçalho da função 
    //tipo_retorno id_funcao(lista_parametros0; protótipo da função

    void desenha_ambiente(){
        for(int i = 1; i <= 5; i++)
            cout << "+---";
        cout << "+" << endl; 
        
        for(int i = 1; i <= 5; i++)
            cout << "|   ";
        cout << "|" << endl; 
        
        for(int i = 1; i <= 5; i++)
            cout << "+---";
        cout << "+" << endl; 
        
    }
    int main(){
        desenha_ambiente();
    return 0; //revela que o programa não obteve erros 
}
