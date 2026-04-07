#include <iostream>
#include <iomanip>
using namespace std;

int numInvert = 0;
    

int inverso(int num){
    while (num > 0){
        numInvert = numInvert * 10 + num % 10;
        num /= 10; 
        return numInvert;
    }
}
int main(){
    int num;

    cout << "Insira o numero:" << endl;
    cin >> num;
    int resultado = inverso(num);
    cout << "Inverso: " << resultado << endl;
    return 0;
}