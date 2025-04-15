#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0, coelhos = 0, ratos = 0, sapos = 0;

    for (int i = 0; i < N; i++) {
        int quantidade;
        char tipo;
        cin >> quantidade >> tipo;

        total += quantidade;

        if (tipo == 'C') {
            coelhos += quantidade;
        } else if (tipo == 'R') {
            ratos += quantidade;
        } else if (tipo == 'S') {
            sapos += quantidade;
        }
    }

    cout << "Total: " << total << " animals" << endl;
    cout << "Total of rabbits: " << coelhos << endl;
    cout << "Total of rats: " << ratos << endl;
    cout << "Total of frogs: " << sapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentage of rabbits: " << (coelhos * 100.0 / total) << " %" << endl;
    cout << "Percentage of rats: " << (ratos * 100.0 / total) << " %" << endl;
    cout << "Percentage of frogs: " << (sapos * 100.0 / total) << " %" << endl;

    return 0;
}
