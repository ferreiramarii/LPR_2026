#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int A;
    int B;

    cout << "A:";
    cin >> A;
    cout << "B:";
    cin >> B;
    
    if(A > B){
        if(A % B == 0){
            cout << "Sao multiplos.";
        }else {
            cout << "Nao sao multiplos.";
        }
    }
    else{
        if(B % A == 0){
            cout << "Sao multiplos.";
        }else{
            cout << "Nao sao multiplos.";
        }
    }
}


