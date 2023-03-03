#include <iostream>
using namespace std;

class persona{
	
	protected : string nombres, apellidos, direccion, fnacimiento;
				int telefono;
	
	protected :
			persona(){
			}
			persona(string nom, string ape, string dir, string fn, int tel){
				nombres=nom;
				apellidos=ape;
				direccion=dir;
				telefono=tel;
				fnacimiento=fn;
			}
	
	void mostrar ();
	
};
