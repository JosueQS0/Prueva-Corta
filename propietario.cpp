#include "persona.cpp"
#include <iostream>
using namespace std;

class propietario : persona {

	private : string nit;
			  double cui; 
	
	public : 
	propietario (){
	}
	
	propietario (string nom, string ape, string dir, string fn, int tel, string n, double c) : persona (nom,ape,dir,fn,tel){ 
		nit = n; 
		cui = c;	
	}
	
	void setnit(string n){nit= n;}
	void setcui(double c){cui= c;}
	void setnombre(string nom){nombres= nom;}
	void setapellidos(string ape){apellidos= ape;}
	void setdireccion(string dir){direccion= dir;}
	void setfnacimiento(string fn){fnacimiento= fn;}
	void settelefono(int tel){telefono= tel;}

	string getnit(){return nit;}
	double getcui(){return cui;}
	string getnombres(){return nombres;}
	string getapellidos(){return apellidos;}
	string getdireccion(){return direccion;}
	string getfnacimiento(){return fnacimiento;}
	int gettelefono(){return telefono;}
	
	
	void mostrar (){
		cout<<"______________________________"<<endl;
		cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fnacimiento<<","<<telefono<<endl;
		}
		
	void agregar(){
            cout<<"_________________________"<<endl;
            cout<<"los atributos han sido agregados exitosamente"<<endl;
		
	}
};

