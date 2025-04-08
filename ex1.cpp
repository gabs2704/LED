using namespace std;
#include <iostream>

 int main (){
    int X,Y;
    cin >> X >> Y;
    cout << X << " " << Y << endl;
     if(X > Y){
        int aux = X;
        X = Y;
        aux = Y;
     }
    if(X%2 != 0)
       X += 2;
    else
        X++;
    if(Y%2 == 1)
    Y -= 2;
    else 
        Y--;
    int soma = 0;
     for(int imp = X; imp <= Y; imp += 2){
        soma += imp;
        cout << imp << " ";
     }
     cout << soma << endl;
    return 0;
 }
