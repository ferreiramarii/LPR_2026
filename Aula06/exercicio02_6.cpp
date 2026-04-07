#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int numero;

int randNum(int numero){
    random_device numAleatorio ;
    uniform_int_distribution<> distribuicao(1,100);
    int valorInteiro = distribuicao(numAleatorio);
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

int main(){
    int opcao = 0;
    cout << "========Selecione uma opcao========" << endl;
    cout << "1-Calcular media aritmetica de numeros pares" << endl;
    cout << "2-Encontrar a soma de todos os números ímpares e múltiplos de 3 entre 50 e 500" << endl;
    cout << "3-Calcular a soma dos dígitos do quadrado de um número" << endl;
    switch(opcao){
        case 1:
            cout << "Opção 1 selecionada" << endl;
        case 2:
            cout << "Opção 2 selecionada" << endl;
            randNum(numero);    


    }
}