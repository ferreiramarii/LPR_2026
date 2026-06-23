#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int distancias[4][4] = {
        {0, 524, 521, 882},
        {524, 0, 434, 586},
        {521, 434, 0, 429},
        {882, 586, 429, 0},
    };

    int origem = 0;
    int destino = 0;
    
    std::cout << "0- Vitoria" << std::endl;
    std::cout << "1- Belo Horizonte" << std::endl;
    std::cout << "2- Rio de Janeiro" << std::endl;
    std::cout << "3- Sao Paulo" << std::endl;
    
    std::cout << "Digite a origem: " << std::endl;
    std::cin >> origem;
    std::cout << "Digite o destino: " << std::endl;
    std::cin >> destino;

    if(origem != destino){
        std::cout << "A distancia entre sua origem e seu destino e: " << distancias[origem][destino] << std::endl;
    }
    else{
        std::cout << "Programa encerrado" << std::endl;
        return 0;    
    }


}