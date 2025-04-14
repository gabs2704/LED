#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    
    if(A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }
    
    return 0;
}
////Para saber se um número é múltiplo de outro, basta verificar se a divisão entre eles resulta em um número inteiro, ou seja, se o resto da divisão é zero. 
