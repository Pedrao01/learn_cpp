#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cout << "Digite os valores A, B (separados por espaços): " << endl;
        cin >> a >> b;

    cout << "O valor de A era: " << a << endl;
    cout << "O valor de B era: " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "O valor de A é: " << a << " O valor de B é: " << b << endl;

    return 0;
}