/*Desarrollar un programa en c++ que nos premita calgular operaciones basicas aritmeticas ("Una Calculadora")*/

#include <iostream>


using namespace std;

// Prototipo de la funcion
void suma();
void resta();
void multiplicacion();
void division();
void menu();

void menu(){
	char nombre[20], apellido[20];
	int opc;
	
	cout << "\nFavor ingrese su nombre.: ";
	getline(cin, nombre);
	
	cout << "\nFavor ingrese su apellido.: ";
	getline(cin, apellido);
	
	do{
		cout << "\nBinvenido al sistema sr/a.: " << nombre << " " << apellido;
		
		cout << "\n***********************************";
		cout << "\n*1. sumar                         *";
		cout << "\n*2. restar                        *";
		cout << "\n*3. multiplicar                   *";
		cout << "\n*4. dividir                       *";
		cout << "\n*5. salir del programa            *";
		cout << "\n***********************************";
		cout << "\n*Seleccione una opcion.: ";
		cin >> opc;
		
		if(opc == 1){
			suma();
		}
		
		if(opc == 2){
			resta();
		}
		
		if(opc == 3){
			multiplicacion();
		}
		
		
		if(opc == 4){
			division();
		}
		system("pause"); system("clear");
	} while(opc !=5);
	
}
	
void suma(){
	
	int a, b;
	
	cout << "\nIngrese el valor para a.: ";
	cin >> a;
	
	cout << "\nIngrese el valor para b.: ";
	cin >> b;
	
	cout << "\nEl resultado para la suma es.: " << a+b;
	
}
	


void resta(){
	int a, b;
		
	cout << "\nIngrese el valor para a.: ";
	cin >> a;
		
	cout << "\nIngrese el valor para b.: ";
	cin >> b;
		
	cout << "\nEl resultado para la resta es.: " << a-b;
		
}
	
void multiplicacion(){
	int a, b;
		
	cout << "\nIngrese el valor para a.: ";
	cin >> a;
		
	cout << "\nIngrese el valor para b.: ";
	cin >> b;
		
	cout << "\nEl resultado para la multiplicacion es.: " << a*b;
		
}

	
void division(){
	float a, b;
		
	cout << "\nIngrese el valor para a.: ";
	cin >> a;
		
	cout << "\nIngrese el valor para b.: ";
	cin >> b;
		
	cout << "\nEl resultado para la division es.: " << a/b;
		
}

int main() {
	
	menu();
	
	system("pause");
	return 0;
}

