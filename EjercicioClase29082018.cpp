#include<iostream>
#include<conio.h>
using namespace std;
struct Dato1{
	int dato1;
	string dato2;
};
struct Dato2{
	struct Dato1 dato;
	int datooo;
};
int main(){
	struct Dato2 dato;
	struct Dato2 *ptr;
	ptr=&dato;
	
	/*cout<<"Puntero: "<<&ptr<<endl;//Imprime el valor del puntero
	cout<<"Direccion: "<<ptr<<endl;//Imprime la a donde apunta el puntero*/
	cout<<"Ingresa el puntero: ";
	cin>>ptr->;
	cout<<"Valor ingresado: "<<ptr->dato1<<endl;
	cout<<"Ingresa otro puntero: ";
	cin>>ptr->dato2;
	cout<<"Cadena ingresada: "<<ptr->dato2;
}
