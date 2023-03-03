#include "propietario.cpp"
#include <iostream>
int main(int argc, char const *argv[])
{
    string n, nom, ape, dir, fn;
    double c;
    int tel;
    
      cout<<"Ingrese su NIT: "<<endl;
      cin>>n;
      cout<<"Ingrese su CUI: "<<endl;
      cin>>c;
      cout<<"Ingrese sus Nombres: "<<endl;
      cin>>nom;
      cout<<"Ingrese sus Apellidos: "<<endl;
      cin>>ape;
      cout<<"Ingrese su Direccion: "<<endl;
      cin>>dir;
      cout<<"Ingrese su numero de Telefono: "<<endl;
      cin>>tel;
       cout<<"Ingrese su Fecha de Nacimiento:"<<endl;
      cin>>fn;

    propietario obj = propietario( nom, ape, dir, tel, fn, n, c);
    
    obj.mostrar();  
    obj.agregar();

    system("pause");
}
