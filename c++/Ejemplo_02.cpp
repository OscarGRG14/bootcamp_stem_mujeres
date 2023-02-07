/*Desarrollar un programa que 
determine el multiplo de 2 de 
10 numero naturales enteros*/

#include <iostream>
using namespace std;


int main() {
	int a=1, b=10;
	
	for(int i =1; i< b; i++){
		if (2%a==0){
			cout << a;
		}
	}
	return 0;
}

