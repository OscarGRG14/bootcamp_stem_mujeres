#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	
	cout << "favor ingrese valor para a.: " << endl;
	cin >> a;
	
	cout << "favor ingrese valor para b.: " << endl;
	cin >> b;
	
	cout << "favor ingrese valor para c.: " << endl;
	cin >> c;
	
	
	
	if(a > b and a > c){
		cout << "El numero " << a << " es mayor a " << b << " y es mayor a " << c << endl;
	}
	else{
		if(b > a and b > c){
			cout << "El numero " << b << " es mayor a " << a << " y es mayor a " << c << endl;
		}
		else{
			cout << "El numero " << c << " es mayor a " << b << " y es mayor a " << a << endl;
			
		}
	}
	
	
	return 0;
}
