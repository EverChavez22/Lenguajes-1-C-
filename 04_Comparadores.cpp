//Manejo de comparadores logicos y estructura de control if

#include <iostream>
using namespace std;
int main()
{
	int numero1=0;
	int numero2=0;
	
	cout << "Escribe dos valores enteros a comparar: ";
	cin >> numero1 >> numero2;
	if (numero1 == numero2)
		cout << numero1 << " = " << numero2 << endl;
	if (numero1 != numero2)
		cout << numero1 << " != " << numero2 << endl;
	if (numero1 > numero2)
		cout << numero1 << " > " << numero2 << endl;
		else
		cout << numero1 << " < " << numero2 << endl;		
	return 0;
}