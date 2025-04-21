#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Lê o valor de N

    if (N <= 0 || N >= 13) {
        cout << "Entrada inválida. N deve estar entre 1 e 12." << endl;
        return 1;  // Encerra o programa com erro
    }

    int fatorial = 1;

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    cout << fatorial << endl;
    return 0;
}
