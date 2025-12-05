#include <iostream>
using namespace std;

int main() {
    float media;
    int frequencia;
    cout << "Digite a média: " << endl;
        cin >> media;
    cout << "Digite a frequência(%): " << endl;
        cin >> frequencia;
    
    cout << "passou de ano: " << ((media >= 7.0) && (frequencia > 75));

    return 0;
}