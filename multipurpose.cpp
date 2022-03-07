#include<iostream>
#include<wchar.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;

int sum(int a)
{
    //systemc("CLS");
    int counter, numbers, oper = 0;
    for(counter = 1; counter <= a; counter ++)
    {
        //systemc("CLS");
        cout << "Ingresa el numero " << counter << endl;
        cin >> numbers;
        oper = oper + numbers;
    }
    cout << "El resultado es\n" << oper << endl;
    return oper;
    
}

int res(int a)
{
    int counter, substractn, sub, op = 0;
    cout << "Cuántas veces quieres restar? ";
    cin >> substractn;
    for(counter = 1; counter <= substractn; counter++)
    {
        cout << "Ingresa el " << a << "número";
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
	do{

    int opt, next;
    cout << "\t\t***Bienvenido al programa multiusos***\n" << endl;
    cout << "1.-Operaciones numericas" << endl;
    cout << "2.-Operaciones con arreglos" << endl;
    cout << "3.-Ejercicios variados" << endl;
    cout << "4.-Funcionalidades avanzadas" << endl;
    cout << "Escoge tu opcion" << endl;
    cin >> opt;


    switch(opt)
    {
    case 1:
        //systemc("CLS");
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
            //systemc("CLS");
            int times;
            cout << "Cuántos números deseas sumar? " << endl;
            cin >> times;
            sum(times);
            break;
        case 2:
            //systemc("CLS");
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
	}while(true);
}
