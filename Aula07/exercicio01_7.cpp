#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector<int> numerosDigi(10);
    vector<int> numerosPares;
    vector<int> numerosImpares;

    
    cout << "Digite os 10 numeros: ";
    for(int i=0; i < 10; i++){
        cin >> numerosDigi[i];
    }

    for(int numero : numerosDigi ){
        cout << "Os numeros:"<< numero << endl;
        if(numero % 2 == 0 ){
            numerosPares.push_back(numero);
        }else{
            numerosImpares.push_back(numero);
        }        
    }
    for(int pares : numerosPares){
        cout << "numeros pares: " << pares << endl;
    }
    
    for(int impares : numerosImpares){
        cout << "numeros impares: " << impares << endl;
    }
}