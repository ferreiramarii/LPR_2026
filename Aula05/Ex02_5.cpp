#include <iostream>
#include <iomanip>
#include <random>
using namespace std;


int main(){
    random_device numAleatorio ;
    uniform_int_distribution<> distribuicao(1,100);
    int valorInteiro = distribuicao(numAleatorio);

    int numero;
    int tentativas = 0;

do {
        cout << "Digite seu chute: ";
        cin >> numero;
        tentativas++;

        if (numero > valorInteiro) {
            cout << "Chutou alto.Tente novamente!" << endl;
        } 
        else if (numero < valorInteiro) {
            cout << "Chutou baixo.Tente novamente!" << endl;
        } 
        else {
            cout << "Voce acertou!" << endl;
        }

    } while (numero != valorInteiro); 

    cout << tentativas << " tentativas para vencer." << endl;

    return 0;
}