#include <iostream>
using namespace std;

int main(){
    float valor_jantar;

    cout << "valor do jantar: " << endl;
        cin >> valor_jantar;

    float gorjeta = valor_jantar * 0.10;

    cout << "O valor da gorjeta foi: " << gorjeta << endl;
    cout << "O valor do jantar foi: " << (valor_jantar + gorjeta) << endl;
    
    return 0;
} 