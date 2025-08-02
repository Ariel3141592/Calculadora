#include <iostream>
using namespace std;

int factorial(int numero);

int main() {
	int a;
	cin >> a;
	cout << "El factorial de " << a << " es " << factorial(a) << endl;
	return 0;
}

int factorial(int numero) {
	if (numero <= 1) {
		return 1;
	} else {
		return numero * factorial(numero - 1);
	}
}
