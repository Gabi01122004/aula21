#include <iostream>
#include <locale.h>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

 int saque;
 int resto;
 int notas;
 int n1 =0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0;

    //O goto correspondente est� na linha 22 
        reset:

    cout << "Quanto deseja sacar? \n";
        cin >> saque;

        if (saque > 2000 || saque < 2){
        cout << "\nS� � possivel fazer saques entre 2R$ e 2000R$\n\n";
        goto reset;
        }
    
    notas = saque/200;
    resto = saque%200;
    saque = resto;
    n1 = notas;
    
        if (resto != 0){
            n2 = saque/100;
        notas = notas + (saque/100);
        resto = (saque % 100);
        saque = resto;

            if (resto != 0){
                n3 = saque/50;
            notas = notas + (saque/50);
            resto = (saque%50);
            saque = resto;

                if (resto != 0){
                    n4 = saque/20;
                notas = notas + (saque/20);
                resto = (saque%20);
                saque = resto;

                    if (resto != 0){
                        n5 = saque/10;
                    notas = notas + (saque/10);
                    resto = (saque%10);
                    saque = resto;

                        if (resto != 0){
                            n6 = saque/5;
                        notas = notas + (saque/5);
                        resto = (saque%5);
                        saque = resto;

                            if (resto != 0){
                                n7 = saque/2;
                            notas = notas + (saque/2);
                            resto = (saque%2);
                            saque = resto;
                            
                                if (resto != 0){
                                        if (saque == 1){
                                            n8 = 1;
                                        };
                                notas = notas +(saque/1);
                                resto = (saque%1);
                                saque = resto;
    }
        }
            }
                }
                    }
                        }
                            }

    cout << "\nVoc� receber� " << n1 << " notas de 200." << "\n";
    cout << "\nVoc� receber� " << n2 << " notas de 100." << "\n";
    cout << "\nVoc� receber� " << n3 << " notas de 50." << "\n";
    cout << "\nVoc� receber� " << n4 << " notas de 20." << "\n";
    cout << "\nVoc� receber� " << n5 << " notas de 10." << "\n";
    cout << "\nVoc� receber� " << n6 << " notas de 5." << "\n";
    cout << "\nVoc� receber� " << n7 << " notas de 2." << "\n";
    cout << "\nVoc� receber� " << n8 << " notas de 1." << "\n";
    cout << "\nTotal de notas a serem recebidas: " << notas << "\n";

return 0;
}