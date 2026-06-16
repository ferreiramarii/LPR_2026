#include <iostream>
#include <array>
#include <iomanip>
#include <string>
using namespace std;


struct Filme {
    string titulo;
    string diretor;
    int anoLancamento;
    int duracaoMin;
};

int main(){
    Filme f1;
    Filme f2;
    Filme f3;
    
    array<Filme,3>dadosInseridos;


    cout << "Titulo do primeiro filme: " << endl;
    getline(cin, dadosInseridos[0].titulo);
    cout << "Diretor do primeiro filme: " << endl;
    getline(cin, dadosInseridos[0].diretor);
    cout << "Ano de lancamento do primeiro filme:" << endl;
    cout << "Duracao do primeiro filme (em min): " << endl;
    cin >> f1.duracaoMin;

    cout << "Titulo do segundo filme: " << endl;
    getline(cin, dadosInseridos[1].titulo);
    cout << "Diretor do segundo filme: " << endl;
    getline(cin, dadosInseridos[1].diretor);
    cout << "Ano de lancamento do segundo filme:" << endl;
    cin >> f2.anoLancamento;
    cout << "Duracao do  filme (em min): " << endl;
    cin >> f2.duracaoMin;
    
    cout << "Titulo do terceiro filme: " << endl;
    getline(cin, dadosInseridos[2].titulo);
    cout << "Diretor do terceiro filme: " << endl;
    getline(cin, dadosInseridos[2].diretor);
    cout << "Ano de lancamento do terceiro filme:" << endl;
    cin >> f3.anoLancamento;
    cout << "Duracao do terceiro filme (em min): " << endl;
    cin >> f3.duracaoMin; 
};