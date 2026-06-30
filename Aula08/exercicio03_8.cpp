#include <iostream>
#include <array>
#include <iomanip>
#include <string>
#include <limits>
#include <algorithm>
using namespace std;

//criando struct
struct Livro {
    string Titulo;
    string Autor;
    int AnoPublicacao;
    int NumeroPaginas;
    float Preco;
};

int main(){
    Livro l1;
    Livro l2;
    Livro l3;
    float precoTotal = 0;
    float mediaPags = 0;

    array<Livro,3>dadosInseridos;

    cout << "Titulo do 1° livro: " << endl;
    getline(cin, l1.Titulo); 
    cout << "Autor do 1° livro: " << endl;
    getline(cin, l1.Autor);
    cout << "Ano de publicacao do 1° livro: " << endl;
    cin >> l1.AnoPublicacao;
    cout << "Numero de paginas do 1° livro: " << endl;
    cin >> l1.NumeroPaginas;
    cout << "Preco do 1° livro: " << endl;
    cin >> l1.Preco;


    cout << "Titulo do 2° livro: " << endl;
    getline(cin, l2.Titulo); 
    cout << "Autor do 2° livro: " << endl;
    getline(cin, l2.Autor);
    cout << "Ano de publicacao do 2° livro: " << endl;
    cin >> l2.AnoPublicacao;
    cout << "Numero de paginas do 2° livro: " << endl;
    cin >> l2.NumeroPaginas;
    cout << "Preco do 2° livro: " << endl;
    cin >> l2.Preco;


    cout << "Titulo do 3° livro: " << endl;
    getline(cin, l3.Titulo); 
    cout << "Autor do 3° livro: " << endl;
    getline(cin, l3.Autor);
    cout << "Ano de publicacao do 3° livro: " << endl;
    cin >> l3.AnoPublicacao;
    cout << "Numero de paginas do 3° livro: " << endl;
    cin >> l3.NumeroPaginas;
    cout << "Preco do 3° livro: " << endl;
    cin >> l3.Preco;

    cout << fixed << setprecision(2);

    precoTotal = l1.Preco + l2.Preco + l3.Preco;
    cout << "Preco total dos livros: R$" << precoTotal << endl;

    mediaPags = (l1.NumeroPaginas + l2.NumeroPaginas + l3.NumeroPaginas) / 3;
    cout << "Media de paginas: " << mediaPags << endl;
}