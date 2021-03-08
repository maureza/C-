#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;

int sum(int a)
{
    system("CLS");
    //cout << a;
    int many, numbers, sum;
    for(many = 1; many <= a; many++)
    {
        cout << "Ingresa el número " << many << endl;
        cin >> numbers;
        sum = sum + numbers;
    }
    cout << "La suma total es " << sum << endl;
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
    cout << "Escoge tu opción" << endl;
    cin >> opt;

    if(opt != 0)
    {
        cout << "\n\nIngresa sólo números" << endl;
    }

    switch(opt)
    {
    case 1:
        system("CLS");
        cout << "Qué operación deseas realizar?" << endl;
        cout << "1.-Suma" << endl;
        cout << "2.-Resta" << endl;
        cout << "3.-Division" << endl;
        cout << "4.-Primo o no" << endl;
        cout << "5.-Entero o no" << endl;
        cout << "Presione cualquier tecla para el siguiente apartado..." << endl;
        cin >> next;
        switch(next)
        {
        case 1:
            system("CLS");
            int veces;
            cout << "Cuántos números deseas sumar? " << endl;
            cin >> veces;
            sum(veces);
            break;
        }
        break;
    case 2:
        break;
    case 3:
        break;
    }

    return 5;
}
