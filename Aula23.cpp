#include <iostream>
#include <locale.h>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Portuguese_Brasil");

float n1, n2, n3;

    cout << "Digite 3 numeros e eu direi qual o maior e qual o menor\n";
        cin >> n1;
        cin >> n2;
        cin >> n3;

    if(n1 > n2 && n1 > n3){
        cout << "O 1 numero e maior";

        } else if (n2 > n1 && n2 > n3){
            cout << "o 2 numero e maior";

            } else if (n3 > n1 && n3 > n2){
                cout << "O 3 numero e maior";
                
                } else {
                    cout << "Voce digitou numeros iguais";
                    }
    
    

return 0;
}