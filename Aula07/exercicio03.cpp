#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> numeros(10);
    int wanted = 0;
    int pos = 0;

    cout << "Insira os numeros: ";
    for(int i = 0; i < 10; i++){
        cin >> numeros[i];
    }
    cout << "Numero que deseja encontrar: " << endl;
    cin >> wanted;
    auto result = find(numeros.begin(), numeros.end(), wanted);
    cout << "Numero encontrado: " << *result << endl;

    if(result != numeros.end()){
        pos = distance(numeros.begin(), result);
        cout << "Posicao: " << pos << endl;
    }
    else{
        cout << "nao encontrado" << endl;
    }
}