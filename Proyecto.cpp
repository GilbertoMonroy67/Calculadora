#include <iostream>
#include <cmath>
#include <vector>
#include <stdexcept>

using namespace std;

void ecuacionLineal(double a, double b, double c){
    if (a == 0) {
        if (b == 0) {
            cout << "La ecuacion tiene infinitas soluciones." << endl<< endl;
        } else {
            cout << "La ecuacion no tiene soluci�n." << endl<< endl;
        }
    } else {
        double x = (c - b) / a;
        cout << "La solucion es: x = " << x << endl << endl;
    }
}

void sistemaDosVariables(double a1, double b1, double c1, double a2, double b2, double c2) {
	double D = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if (D == 0) {
       
        if (Dx == 0 && Dy == 0)
            cout << "El sistema tiene infinitas soluciones." << endl<< endl;
        else
            cout << "El sistema no tiene soluci�n." << endl<< endl;
    } else {
        double x = Dx / D;
        double y = Dy / D;
        cout << "La soluci�n del sistema es:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl<< endl;
    }
}

void menu(){
    cout << ""<<endl;
	cout << "1. Ecuacion lineal con una variable   a(x) + b = c"<<endl;
    cout << "2. Sistema de ecuaciones con dos variables"<<endl;
    cout << "3. Ecuacion cuadratica"<<endl;
    cout << "4. Salir"<<endl<<endl;
    cout << "Selecciona el tipo de ecuacion a solucionar: ";
}

int main() {
    cout << "  ____      _            _       _             \n";
    cout << " / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ \n";
    cout << "| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n";
    cout << "| |__| (_| | | (__| |_| | | (_| | || (_) | |   \n";
    cout << " \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   \n";
    cout << "                                              \n";
    cout << "          CALCULADORA DE ECUACIONES           \n\n\n";
    cout << "Bienvenido!, a continuacion, el tipo de ecuaciones que puedo realizar:" <<endl<<endl;
    int opcion;
    string continuar = "si" ;

    do {
        menu();
        cin >> opcion;
            if (cin.fail()) {
             cin.clear();
             cin.ignore(1000, '\n');
             cout << "Entrada invalida. Debes ingresar un numero entre 1 y 4." <<endl<<endl;
             continue;
}
        try {
            switch (opcion) {
                case 1: {
                    double a, b, c;
					cout << endl;
					cout << "Ecuacion lineal de la forma ax + b = c"<<endl;
                    cout << "Ingresa el valor de a: ";
                    cin >> a;
                    cout << "Ingresa el valor de b: ";
                    cin >> b;
                    cout << "Ingresa el valor de c: ";
                    cin >> c;
                    ecuacionLineal(a, b, c);
                    break;
                }
                case 2: {
                    double a1, b1, c1;
                    double a2, b2, c2;
					cout << endl;
                    cout << "Sistema de ecuaciones con dos variables:" << endl;
    				cout << "Ecuacion 1 (a1*x + b1*y = c1)" << endl;
    				cout << "Ingresa a1: ";
    				cin >> a1;
    				cout << "Ingresa b1: ";
    				cin >> b1;
    				cout << "Ingresa c1: ";
    				cin >> c1;

    				cout << "Ecuacion 2 (a2*x + b2*y = c2)" << endl;
    				cout << "Ingresa a2: ";
    				cin >> a2;
    				cout << "Ingresa b2: ";
    				cin >> b2;
    				cout << "Ingresa c2: ";
    				cin >> c2;
    				sistemaDosVariables(a1, b1, c1, a2, b2, c2);
                    break;
                }
                case 3: {
                    cout << "(Opcion 3 aun no implementada)" <<endl;
                    break;
                }
                case 4: 
                    cout << "Gracias por usar el programa!" <<endl;
                    return 0; 
                default:
                    cout << "Opcion no valida. Intente con una opcion del 1 al 4." <<endl;
                    continue; 
            }

            
            cout << "Deseas realizar otra accion? (si/no): ";
            cin >> continuar ; 

        } catch (const exception& e) {
            cout << "Ocurrio un error inesperado." <<endl;
        }

    } while (continuar == "si");

    cout << "Gracias por usar el programa!";
    return 0;
}
