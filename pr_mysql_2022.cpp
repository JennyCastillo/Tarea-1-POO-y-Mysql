#include <mysql.h>
#include <iostream>
#include "Cliente.h"
using namespace std;
int main()
{
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    cout << "Ingrese nit: ";
    getline(cin, nit);
    cout << "Ingrese Nombre: ";
    getline(cin, nombres);
    cout << "Ingrese Apellido: ";
    getline(cin, apellidos);
    cout << "Ingrese direccion: ";
    getline(cin, direccion);
    cout << "Ingrese Telefono: ";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese Fecha de nacimiento: ";
    cin >> fecha_nacimiento;
    cin.ignore();
    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
    c.crear();
    c.leer();
    system("pause");
    return 0;
}