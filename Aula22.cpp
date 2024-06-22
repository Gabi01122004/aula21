#include <iostream>
#include <locale.h>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Portuguese_Brasil");
string letra;


    cout << "Digite uma letra e descubra se ela e vogal ou consoante\n";
        cin >> letra;
    
    if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
   
        cout << "A letra e uma vogal";
    } else {
        cout << "A letra e uma consoante";
    }
    
return 0;
}