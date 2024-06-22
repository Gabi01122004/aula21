#include <iostream>
#include <locale.h>

using namespace std;



int main(void){
    setlocale(LC_ALL, "Portuguese_Brasil");

string sexo;

        cout << "Digite M para Masculino e F para Feminino\n";
            cin >> sexo;
        
        if(sexo == "M" || sexo == "m"){
            cout << "Masculino selecionado!\n";
        }
        if(sexo == "F" || sexo == "f"){
            cout << "Feminino selecionado!\n";
        }
        if(sexo != "F" && sexo != "M" && sexo != "f" && sexo != "m"){
            cout << "Valor invalido!\n";
        }

return 0;
}