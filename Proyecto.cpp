#include <iostream>

using namespace std;

int main() {
	

    cout << "  ____      _            _       _             \n";
    cout << " / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ \n";
    cout << "| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n";
    cout << "| |__| (_| | | (__| |_| | | (_| | || (_) | |   \n";
    cout << " \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   \n";
    cout << "                                              \n";
    cout << "          CALCULADORA DE ECUACIONES           \n\n";
	
	cout << "�Bienvenido!, por favor, selecciona el tipo de ecuacion a realizar;" <<endl<<endl;
	string continuar;
	do{
	
	int opcion;
	
	cout<< "1. Ecuacion lineal con una variable  a(x) + b = c" <<endl;
	cout<< "2. Sistema de ecuaciones con una variable" <<endl;
	cout<< "3. Sistema de ecuaciones con dos variables" <<endl<<endl;
	cout<< "Selecciona el tipo de ecuacion a solucionar: " <<endl;
	cin>> opcion;
	
	if (opcion==1) {
		float a, b, c, x;
		cout<< "Ecuacion lineal de la forma ax + b= c" <<endl;
		cout<< "Ingresa el valor de a: ";
        cin>>a;
        cout<< "Ingresa el valor de b: ";
        cin>>b;
        cout<< "Ingresa el valor de c: ";
        cin>>c;

        if (a == 0) {
            	if (b == c) {
                cout << "La ecuacion tiene infinitas soluciones." <<endl<<endl;
            } 	else {
                cout << "La ecuacion no tiene solucion." <<endl<<endl;
            }
      } else {
            x = (c - b) / a;
            cout << "La solucion es: x = " << x <<endl<<endl;
	} 
  } else {
        cout << "\nOpcion no valida." << endl;
    }
    
    	cout << "Deseas realizar otra accion? (si/no): ";
		cin >> continuar;
    
   }while (continuar== "si");
	cout<< "Gracias por usar el programa!" <<endl<<endl;
    
    return 0;
	
	
}

