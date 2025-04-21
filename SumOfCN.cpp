#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

   for(int i = 0; i < N ; i++){
       int X,Y;
       cin >> X >> Y;
       
       int soma = 0;
       
       if( X %2 == 0){
           X++;
       }
       for(int j = 0; j < Y; j++){
           soma += X;
           X += 2;
       }
       cout << soma << endl;
   }
    return 0;
}
