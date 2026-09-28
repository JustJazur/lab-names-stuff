/*
 * Curso: COEN 2210 - Introduction to Programming
 * Nombre: [Jazer E. Ramos Muniz]
 * Lab: 3 - Figuras Geometricas y Arte ASCII
 * Descripcion: [Un programa en el que hacemos figuras matematicamente.]
 * Fecha de entrega: [9/3/2026]
 */

 #include <iostream>
using namespace std;

const double PI = 3.14159;
const double RADIO = 5.4;
const double LARGO = 8.0;
const double ANCHO = 3.0;
const double BASE = 6.0;
const double ALTURA = 4.0;
const double LADO = 7.0;

int main()
{
    double circunferencia;
    circunferencia = 2 * PI * RADIO;
    cout << "La circunferencia del circulo es " << circunferencia << endl;

    return 0;
}