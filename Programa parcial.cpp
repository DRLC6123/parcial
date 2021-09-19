#include <iostream>
#include <stdlib.h>
using namespace std;
// variables
int  cantidad, buscar;
int datos;
float  bonificacion,suel;
char menu='s';
//punteros
int *codigo;
string *nombre,*apellido,*puesto;
float  *sueldo;


void pedir_datos(){
	
codigo = new int[cantidad];
nombre = new string [cantidad];
apellido = new string [cantidad];
puesto = new string [cantidad];
sueldo = new float [cantidad];

	cout<<"Ingrese la cantidad de registros que desea ingresar"<<endl;
	cin>>cantidad;
	
	for (int i=0; i<cantidad; i++){
		cout<<"Ingrese el codigo"<<endl; cin>>codigo[i];
		cout<<"Ingrese el nombre"<<endl; scanf("%s", nombre);
		cout<<"Ingrese el apellido"<<endl; scanf("%s",apellido);
		cout<<"Ingrese el puesto"<<endl; scanf("%s",puesto);
		cout<<"Ingrese el salario"<<endl; cin>>sueldo[i];
		nombre++;
		apellido++;
		puesto++;
	}
}

void buscar_registro(){
	cout<<"Ingrese el codigo de empleado"<<endl; cin>>buscar;
  for(int inicio=0; inicio<cantidad; inicio++){
    if (buscar==codigo[inicio]){
    	cout<<nombre[inicio]<<endl;
    	cout<<apellido[inicio]<<endl;
    	cout<<puesto[inicio]<<endl;
    	cout<<codigo[inicio]<<endl;
    	cout<<sueldo[inicio]<<endl;
	}
  }
}

void modificar(){
		cout<<"Ingrese el codigo de empleado"<<endl; cin>>buscar;
  for(int i=0; i<cantidad; i++){
    if (buscar== codigo[i]){
   		cout<<"Que desea modificar"<<endl;
		cout<<"1) NOMBRE"<<endl;
		cout<<"2) APELLIDO"<<endl;
		cout<<"3) PUESTO"<<endl;
		cout<<"4) SUELDO"<<endl;
		    cin>>datos;
   		switch (datos){
   			case 1: 
			   cout<<"Nombre actual:  "<<nombre[i]<<endl;
			   cout<<"Nombre nuevo:  "; cin>>nombre[i];
			   break;
   			case 2:
   				cout<<"Apellido actual:  "<<apellido[i]<<endl;
			   cout<<"Apellido nuevo:  "; cin>>apellido[i];
   				break;
   			case 3:
   				cout<<"Puesto actual:  "<<puesto[i]<<endl;
			   cout<<"Puesto nuevo:  "; cin>>puesto[i];
   				break;
   			case 4:
   				cout<<"Sueldo actual:  "<<sueldo[i]<<endl;
			   cout<<"Sueldo nuevo:  "; cin>>sueldo[i];
			   break;
   			
		   }
	}
  }
}

float sueldo_total(float x, float y){
	
	return x+y;
}




int main(){
	short int opcion;
	
	
	do {
	
	cout<<"\n ELIJA UNA OPCION"<<endl;
	cout<<"1) Ingresar registros"<<endl;
	cout<<"2) Buscar registro"<<endl;
	cout<<"3) Modificar registo"<<endl;
	cout<<"4) Calcular sueldo"<<endl;
	cin>>opcion;
	switch (opcion){
		case 1: 
		pedir_datos();
		break;
		case 2:
			buscar_registro();
		break;
		case 3:
			modificar();
	    break;
	    case 4:
	    	cout<<"Ingrese su bonificacion"<<endl;
	    	cin>>bonificacion;
	    	cout<<"Ingrese el codigo de empleado"<<endl; cin>>buscar;
  		for(int inicio=0; inicio<cantidad; inicio++){
    		if (buscar==codigo[inicio]){
    		suel= sueldo[inicio];
      		cout<<"su sueldo total es: "<<sueldo_total(bonificacion,suel);
			}
  		}
	    break;
	    
	    cout<<"Desea regresar al menu s/n"<<endl; cin>>menu;
	}
}
while (menu=='s');

	delete [] codigo;
	delete [] nombre;
	delete [] apellido;
	delete [] puesto;
	delete [] sueldo;
}



