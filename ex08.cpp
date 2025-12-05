#include <iostream>
using namespace std;

double calcular_media(double notas[], int tamanho) {
    double soma = 0;

    for(int i = 0; i < tamanho;i++) {
        soma += notas[i];
    }
    
    return soma / tamanho;
}

int main() {
    int tamanho = 3;
    double notas[tamanho];

    for(int i=0; i < tamanho; i++) {
        cout << "digite a nota " << (i+1) << ":" << endl;
        cin >> notas[i];
    }
    cout << "Media: " << calcular_media(notas, tamanho);

    return 0;
}