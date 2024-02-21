#include"Cliente.cpp"
#include<iostream>

using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar nombres: ";
	cin>>nombres;
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar direccion: ";
	cin>>direccion;
	cout<<"Ingresar telefono: ";
	cin>>telefono;
	
//instancia de un objeto
Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
obj.mostrar();

	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	cout<<obj.getNit();

}
