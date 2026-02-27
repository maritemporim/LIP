// EX04 << Criar uma Classe Simples
// Aluna << Mariana Temporim Ferreira

#include <iostream>
#include <iomanip>
using namespace std;

class retangulo {
public:
    float l;
    float h;
    float c;

    void area(){
        c = l*h;

        cout << fixed << setprecision(2);

        cout << "Largura: " << l;
        cout << ", Altura: " << h;
        cout << "\nArea do retangulo: " << c;
    }

};

int main(){

    retangulo info;
    cin >> info.l;
    cin >> info.h;
    info.area();

}
