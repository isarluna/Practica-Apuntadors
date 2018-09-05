#include <iostream>
#include <conio.h>

using namespace std;

struct producto{
    char nombre[10];
    float precio;
    struct producto *ptr;
} producto1, producto2, *inicio;

int main (int argc, char** argv){
    inicio=&producto1;
    inicio->ptr=&producto2;
    cout<<"Precio producto 1 ";
    cin>>inicio->precio;
    cout<<"Nombre producto 1 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    cout<<"Precio producto 2 ";
    cin>>inicio->ptr->precio;
    cout<<"Nombre producto 2 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    int totalProductos=10;

    struct producto producto3;
    inicio->ptr->ptr=&producto3;

    struct producto producto4;
    inicio->ptr->ptr->ptr=&producto4;

    cout<<"Precio del producto 3 ";
    cin>>inicio->ptr->ptr->precio;
    cout<<"Nombre del producto 3 ";
    cin.getline(inicio->nombre,10,'\n');
    cin.getline(inicio->nombre,10,'\n');

    cout<<"Direccion de inicio "<<&inicio<<endl;
    cout<<"Direccion producto 1"<<&producto1<<endl;
    cout<<"Direccion producto 2"<<&producto2<<endl;
    cout<<"Precio guardado 1"<<inicio->precio<<endl;
    cout<<"Nombre guardado 1"<<inicio->nombre<<endl;
    cout<<"Precio guardado 2"<<(inicio+1)->precio<<endl;
    cout<<"Nombre guardado 2"<<(inicio+1)->nombre<<endl;
    cout<<"Nombre 3"<<inicio->ptr->ptr->nombre<<endl;
    cout<<"Precio 3"<<inicio->ptr->ptr->precio<<endl;
    cout<<"Nombre 4"<<inicio->ptr->ptr->ptr->nombre<<endl;
    cout<<"Precio 4"<<inicio->ptr->ptr->ptr->precio<<endl;
getch();
return 0;
}
