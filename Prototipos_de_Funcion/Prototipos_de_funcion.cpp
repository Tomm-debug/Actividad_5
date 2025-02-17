#include <iostream>
using namespace std;

// Prototipo de la función
double calcularAreaTriangulo(double base, double altura);

int main() {
    double base, altura;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    
    // Llamada a la función calcularAreaTriangulo
    double area = calcularAreaTriangulo(base, altura);
    
    cout << "El area del triangulo es: " << area << endl;
    
    int abc ;
    cin >> abc ;
    return 0;
}

// Definición de la función
double calcularAreaTriangulo(double base, double altura) {

    return (base * altura) / 2;

}

