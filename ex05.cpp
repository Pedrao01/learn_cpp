#include <iostream>
using namespace std;

int main() {
    //variaveis
    double area, perimetro, raio;

    //entrada do raio
    cout << "Digite o raio do circulo: " << endl;
        cin >> raio;
    
    //calculos da area e perimetro
    area = (3.14159 * (raio * raio));
    perimetro =  (2 * 3.14159 * raio);

    //saida area e perimetro
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}