// EX05 << Métodos com parâmetro e retorno
// Aluna << Mariana Temporim Ferreira

#include <iostream>
#include <iomanip>
using namespace std;

class circulo{
public: 
    float r;

    void ler(){

        cin >> r;
    }

    float c(){

        return (2*3.1415*r);
    }

    void print(){

        cout << fixed << setprecision(2);

        cout << "Raio:" << r;
        cout << "\nCircunferencia do circulo: " << c();
    }
};

int main(){
    circulo i;
    i.ler();
    i.c();
    i.print();
}