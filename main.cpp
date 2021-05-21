#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int cont = 0, casos, carrinhos = 0, bonecas = 0;
    string crianca, sexo;
    cin >> casos;
    while (cont < casos){
        cin >> crianca;
        cin >> sexo;
        if (sexo[0] == 'F'){
            bonecas++;
        }else{
            carrinhos++;
        }
        cont++;
    }
    cout << carrinhos << " carrinhos" <<endl;
    cout << bonecas << " bonecas" <<endl;
    return 0;
}
