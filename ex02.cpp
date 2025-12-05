#include <iostream>
using namespace std;

int main() {
    int ndias;

    cout << "digite uma quantidade de dias: " << endl;
        cin >> ndias;
    
    int anos, restoAno, meses, dias;
    anos =  (ndias / 365);
    restoAno = (ndias % 365);
    meses = (restoAno / 30);
    dias = (restoAno % 30);

    cout << anos << " ano(s), " << meses << "mes(es), " << dias << "dia(s)." << endl;
    
    return 0;

}