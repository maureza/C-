#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;

int sum()
{


}



main()
{
    setlocale(LC_ALL, "");

    int opt, next;
    cout << "\t\t***Bienvenido al programa multiusos***\n" << endl;
    cout << "1.-Operaciones numericas" << endl;
    cout << "2.-Operaciones con arreglos" << endl;
    cout << "3.-Ejercicios variados" << endl;
    cout << "4.-Funcionalidades avanzadas" << endl;
    cout << "Escoge tu opci�n" << endl;
    cin >> opt;

    if(opt != 0)
    {
        cout << "\n\nIngresa s�lo n�meros" << endl;
    }

    switch(opt)
    {
    case 1:
        cout << "Qu� operaci�n deseas realizar?" << endl;
        cout << "1.-Suma" << endl;
        cout << "2.-Resta" << endl;
        cout << "3.-Division" << endl;
        cout << "4.-Primo o no" << endl;
        cout << "5.-Entero o no" << endl;
        cout << "Presione cualquier tecla para el siguiente apartado..." << endl;

        cin >> next;
        break;
    case 2:
        break;
    case 3:
        break;
    }

    return 5;
}
