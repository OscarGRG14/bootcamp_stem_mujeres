#include <iostream>

using namespace std;

int main(){
	int a, b;
	
	cout << "\n\nIngrese un la contidad de numero que desea sacar multiplos.: ";
	cin >> a;
	
	cout << "\nIngrese el multiplo que desea sacar.: ";
	cin >> b;
	
	cout << "\nLos multiplos de " << b << ".: " << endl;
	for(int i=1; i <=a; i++){
		if(i % b == 0){
			cout << i << endl;
		}
	}
	
	
	return 0;
}