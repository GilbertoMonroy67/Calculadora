#include <iostream>
#include <cmath>
#include <vector>
#include <stdexcept>

using namespace std;

void ecuacionLineal(double a, double b){
    if (a == 0) {
        if (b == 0) {
                cout << "La ecuación tiene infinitas soluciones." <<endl;
        } 	else {
                cout << "La ecuación no tiene solución." <<endl;
        }
    } else {
        double x = - b / a;
        cout << "La solución es: x = " << x <<endl;
	} 
}

void menu(){
    cout << "  ____      _            _       _             \n";
    cout << " / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ \n";
    cout << "| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n";
    cout << "| |__| (_| | | (__| |_| | | (_| | || (_) | |   \n";
    cout << " \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   \n";
    cout << "                                              \n";
    cout << "          CALCULADORA DE ECUACIONES           \n\n";
	
	cout << "Bienvenido!, por favor, selecciona el tipo de ecuacion a realizar;" <<endl;

    cout<< "1. Ecuacion lineal con una variable  a(x) + b = c" <<endl;
	cout<< "2. Sistema de ecuaciones con dos variables" <<endl;
	cout<< "3. Ecuacion cuadratica" <<endl;
	cout<< "4. Salir" <<endl;
	cout<< "Selecciona el tipo de ecuacion a solucionar: ";
	
}

int main() {
	
    string continuar;
    int opcion;

	do{
        menu();
        cin >> opcion;

        try{
            switch(opcion){
                
                case 1: {
                    double a, b;
                    cout<< "Ecuacion lineal de la forma ax + b= c" <<endl;
                    cout<< "Ingresa el valor de a: ";
                    cin>>a;
                    cout<< "Ingresa el valor de b: ";
                    cin>>b;
                    // cout<< "Ingresa el valor de c: ";
                    // cin>>c;
                    ecuacionLineal(a, b);
                    break;
                }
                case 4: 
                    cout<< "Gracias por usar el programa!" <<endl;
                    break;
                default:
                    cout << "\nOpción no valida, Intente con una opcion del 1 al 4 por favor." << endl;
            }
        } catch(const exception& e){

        }
	

//   if {
//     }
    
    	// cout << "Deseas realizar otra accion? (si/no): ";
		// cin >> continuar;
    
    }while (opcion !=4);
    
    return 0;
	
	
}

