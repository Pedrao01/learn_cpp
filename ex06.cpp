#include <iostream>
using namespace std;

int main() {
    //cria um loop infinito
    while (true) {
        //declara o value
        int value;
        cout << "Digite um valor: " << endl;
        cin >> value;

        //verifica se value não é negativo
        if (value > 0){
            //calcula a tabuada
            for (int i=0; i<=10; i++){
                cout << value << " x " << i << " = " << (value*i) << endl;           
        }
        break;
        //mostra um erro se value for negativo
        } else {
            cout << "O valor nao pode ser negativo!" << endl;
        }
    }

    return 0;
}