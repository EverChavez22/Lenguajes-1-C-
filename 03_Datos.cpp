//Practica para capturar la informacion
#include<iostream>
using namespace std;
int main()
{
	string nombres, apellido1, apellido2, email, direccion, poblacion;
	int edad; 
	long long telefono;
	cout << "Escribe tus datos"<<endl;
	cout << "Escribe tu nombre(s): "; getline(cin,nombres);
	cout << "Escribe tu primer apellido: "; getline(cin, apellido1);
	cout << "Escribe tu segundo apellido: "; getline(cin, apellido2);
	cout << "Escribe tu e-mail: "; getline(cin, email);
	cout << "Escribe tu direccion: "; getline(cin, direccion);
	cout << "Escribe tu nacionalidad: "; getline(cin, poblacion);
	cout << "Escribe tu edad: "; cin >> edad;
	cout << "Escribe tu telefono: "; cin >> telefono;
	cout << endl << "TUS DATOS" << endl;
	cout << "Nombre: "<< nombres << " " << apellido1 << " " << apellido2 << endl;
	cout << "Edad: " << edad << endl;;
	cout << "E-mail: " << email << endl;
	cout << "Direccion: " << direccion << endl;
	cout << "Nacionalidad: " << poblacion << endl;
	cout << "Telefono: " << telefono << endl;
	 
	return 0;
}