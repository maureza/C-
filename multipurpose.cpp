#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;

int sum(int a)
{
    system("CLS");
    int counter, numbers, oper = 0;
    for(counter = 1; counter <= a; counter ++)
    {
        system("CLS");
        cout << "Ingresa el numero " << a << endl;
        cin >> numbers;
        oper = oper + numbers;
    }
    cout << "El resultado es " << oper;
    return oper;
}

int res(int a)
{
    int counter, substractn, sub, op = 0;
    cout << "Cu�ntas veces quieres restar? ";
    cin >> substractn;
    for(counter = 1; counter <= substractn; counter++)
    {
        cout << "Ingresa el " << a << "n�mero";
        cin >> sub;
        op = a - sub;
        a = op;
    }
    cout << "La resta es: " << op;
    return op;
}

/*int div(int a)
{

}*/

int main()
{
    setlocale(LC_ALL, "");

    int opt, next;
    //while(opt =! )
    cout << "\t\t***Bienvenido al programa multiusos***\n" << endl;
    cout << "1.-Operaciones numericas" << endl;
    cout << "2.-Operaciones con arreglos" << endl;
    cout << "3.-Ejercicios variados" << endl;
    cout << "4.-Funcionalidades avanzadas" << endl;
    cout << "Escoge tu opci�n" << endl;
    cin >> opt;


    switch(opt)
    {
    case 1:
        system("CLS");
        cout << "Qu� operaci�n deseas realizar?" << endl;
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
            int times;
            cout << "Cu�ntos n�meros deseas sumar? " << endl;
            cin >> times;
            sum(times);
            //cout << "El resultado es " << sum(veces);
            break;
        case 2:
            system("CLS");
        int num;
        cout << "Cantidad que deseas restar: ";
        cin >> num;
        res(num);
            break;
        }
    case 2:
        break;
    case 3:
        break;
    }

    return 5;
}
