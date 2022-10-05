//Capturar un dato por teclado e imprimirlo

#include <iostream>
using namespace std;
int main()
{
	string nombre;
	cout << "Escribe tu Nombre: ";
	//cin >> nombre; //Lectura desde teclado de una sola palabra 
	getline(cin,nombre);
	cout << "Hola "<<nombre<<endl;
	
	return 0;
}