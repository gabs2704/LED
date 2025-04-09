#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    // Pesos
    double pesoA = 3.5;
    double pesoB = 7.5;

    double media = (A * pesoA + B * pesoB) / (pesoA + pesoB);

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;

    return 0;
}
