#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float raio;
    float area;

    cout << "Digite o raio do circulo:" << endl;
    cin >> raio;

    area = 3.14159 * (raio * raio);
    cout << "Area: " << setprecision(4) << area << endl;
    return 0;
}