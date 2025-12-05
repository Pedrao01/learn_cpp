#include <iostream>
using namespace std;

int main() {
    double notas[3];
    double media_final = 0;

    for (int i=0; i<3; i++) {
        cout << "digite a nota " << (i+1) << ":" << endl;
        cin >> notas[i];

        media_final += notas[i];
    }
    cout << "Media final: " << (media_final/3) << endl;
}