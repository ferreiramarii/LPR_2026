#include <iostream>
#include <array>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

//criando struct
struct Filme {
    string titulo;
    string diretor;
    int anoLancamento;
    int duracaoMin;
};

int main(){
    //instanciando a struct
    Filme f1;
    Filme f2;
    Filme f3;
    
    array<Filme,3>dadosInseridos; //criando array dos filmes isneridos

    //entradas do user
    cout << "Titulo do primeiro filme: " << endl;
    getline(cin, f1.titulo); //getline pois é string
    cout << "Diretor do primeiro filme: " << endl;
    getline(cin, f1.diretor);
    cout << "Ano de lancamento do primeiro filme:" << endl;
    cin >> f1.anoLancamento;
    cout << "Duracao do primeiro filme (em min): " << endl;
    cin >> f1.duracaoMin;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Titulo do segundo filme: " << endl;
    getline(cin, f2.titulo);
    cout << "Diretor do segundo filme: " << endl;
    getline(cin, f2.diretor);
    cout << "Ano de lancamento do segundo filme:" << endl;
    cin >> f2.anoLancamento;
    cout << "Duracao do  filme (em min): " << endl;
    cin >> f2.duracaoMin;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Titulo do terceiro filme: " << endl;
    getline(cin, f3.titulo);
    cout << "Diretor do terceiro filme: " << endl;
    getline(cin, f3.diretor);
    cout << "Ano de lancamento do terceiro filme:" << endl;
    cin >> f3.anoLancamento;
    cout << "Duracao do terceiro filme (em min): " << endl;
    cin >> f3.duracaoMin;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    dadosInseridos[0] = f1;
    dadosInseridos[1] = f2;
    dadosInseridos[2] = f3;


    for(int i=0; i < 3; i++){
        cout << "Titulo do filme " << i+1 << ":" << dadosInseridos[i].titulo << endl;
        cout << "Diretor " << i+1 << ":" << dadosInseridos[i].diretor << endl;
        cout << "Ano de lancamento: " << i+1 << ":" << dadosInseridos[i].anoLancamento << endl;
        cout << "Duracao:  " << i+1 << ":" << dadosInseridos[i].duracaoMin << endl;
    }
};