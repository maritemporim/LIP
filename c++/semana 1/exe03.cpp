// EX03 << Métodos com Retorno de Valor
// Aluna << Mariana Temporim Ferreira

#include <iostream>
using namespace std;

class retangulo {
public:
    float l;
    float h;
    float c;

    void area(){
        c = (l*h);
        cout << c;
    }

};

int main(){

    retangulo info;
    cin >> info.l;
    cin >> info.h;
    info.area();

}
