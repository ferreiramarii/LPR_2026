#include <iostream>
#include <locale>
#include <list>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double digitados = 0;
    list <int> numero;
    double acumulador = 0;
    double contador = 0;

    cout << "Média de números pares" << endl;
    cout << "Quantidade de números a serem digitados e números: " << endl;
    cin >> digitados ;

    cout << "Digite o primeiro número: " << endl;
    cin >> numero[0];

    while (digitados > contador){

        if(numero % 2 == 0){
        acumulador+=numero;
        }
        else{
            numero = 0;
        }
    
        cout << "Digite o próximo número: " << endl;
        cin >> numero;
        contador++;
    }
    cout << "Média: " << acumulador/digitados;
}