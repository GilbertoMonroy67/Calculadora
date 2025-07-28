#include <iostream>
#include <cmath>
#include <sstream>
#include <windows.h>

using namespace std;

void ecuacionLineal(double a, double b, double c){
    if (a == 0) {
        	if (b == 0) {
            cout << "La ecuacion tiene infinitas soluciones." << endl<< endl;
        } 	else {
            cout << "La ecuacion no tiene solucion." << endl<< endl;
        }
    } 
	 else {
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
            cout << "El sistema no tiene solucion." << endl<< endl;
  	} else {
        double x = Dx / D;
        double y = Dy / D;
        cout << "La solucion del sistema es:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl<< endl;
    }
}

void ecuacionCuadratica(double a3, double b3, double c3) {
    if (a3 == 0) {
        cout << "No es una ecuacion cuadratica (a no puede ser cero)." << endl;
        return;
    }

    double discriminante = b3*b3 - 4*a3*c3;

    if (discriminante > 0) {
        double x1 = (-b3 + sqrt(discriminante)) / (2*a3);
        double x2 = (-b3 - sqrt(discriminante)) / (2*a3);
        cout << "La ecuacion tiene dos soluciones reales distintas:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b3 / (2*a3);
        cout << "La ecuacion tiene una unica solucion real:" << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "La ecuacion no tiene soluciones reales." << endl;
    }
}

void menu(){
    cout << ""<<endl;
	cout << "1. Ecuacion lineal con una variable   a(x) + b = c"<<endl;
    cout << "2. Sistema de ecuaciones con dos variables"<<endl;
    cout << "3. Ecuacion cuadratica"<<endl<<endl;
    cout << "4. Salir de la calculadora"<<endl<<endl;
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
    cout << "Bienvenido, a continuacion, el tipo de ecuaciones que puedo realizar:" <<endl<<endl;
label1:    
	string continuar ; 
	int opcion ;	
    menu();
    string entrada;
    getline(cin, entrada);
    stringstream ss(entrada);

        if (!(ss >> opcion) || opcion < 1 || opcion > 4 || !ss.eof()){
            system("cls");
            cout<<"Opcion no valida. Intente con una opcion del 1 al 4"<<endl;
            goto label1;
        }
			
        try {
            switch (opcion) {
                    case 1: 
                        double a, b, c;
                        system("cls");
                        cout << "Ecuacion lineal de la forma ax + b = c"<<endl;
                        cout << "Ingresa el valor de a: ";
                        cin >> a;
                        cout << "Ingresa el valor de b: ";
                        cin >> b;
                        cout << "Ingresa el valor de c: ";
                        cin >> c;
                        ecuacionLineal(a, b, c);
                        break;
                    
                    case 2: 
                        double a1, b1, c1, a2, b2, c2;
                        system("cls");
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
                    
                    case 3: 
                        double a3, b3, c3;
                        system("cls");
                        cout << "Ecuacion cuadratica de la forma ax^2 + bx + c = 0" << endl;
                        cout << "Ingresa el valor de a: ";
                        cin >> a3;
                        cout << "Ingresa el valor de b: ";
                        cin >> b3;
                        cout << "Ingresa el valor de c: ";
                        cin >> c3;
                        ecuacionCuadratica(a3, b3, c3);
                        break;
                    
                    case 4: 
                        goto label2;
                        
                    default: 
                        system("cls");
                        cout << "Opcion no valida. Intente con una opcion del 1 al 4." <<endl;
                        goto label1; 
                        
            } 
            
        } catch (const exception& e) {
            cout << "Ocurrio un error inesperado." <<endl;
        }

        cout << "Regresando al menu..." << endl;
        Sleep(3000);

        cin.ignore();
        cout << "Deseas realizar otra accion? (si/no): ";
        getline(cin, continuar);

		if (continuar == "si" || continuar == "Si" || continuar == "s" || continuar == "S" || continuar == "SI") {			
			system("cls");
			goto label1; 		
		} else if(continuar == "no" || continuar == "No" || continuar == "NO" || continuar == "n" || continuar == "N"){
                goto label2;
        }else{
            cout << "\nEntrada no reconocida, regresando al menu..."<<endl;
            Sleep(3000);
            system("cls");
            goto label1;
        }
				

label2:
	system("cls");
    cout << "Gracias por usar el programa!";

    return 0;

}

