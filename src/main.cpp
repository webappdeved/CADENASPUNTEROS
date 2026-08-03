/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año 3° División
   Profesor: Prof. York 
   Estudiante: Fuseneco Dardo
   Archivo: main.cpp
   Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
   ====================================================================
*/

#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la dirección de memoria física de 'edad'

    cout << "=====================================================" << endl;
    cout << "   CONTROL DE ACCESO RAM - ESTUDIANTE: Fuseneco Dardo   " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese su edad: ";
    
    // Captura mediante desreferenciación directa
    cin >> *p;

    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;
    
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }

    cout << "=====================================================" << endl;
    return 0;
}