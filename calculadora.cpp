//Programa que presenta las operaciones básicas
//Creado por Neio Aldhair Canchingre Tamayo 
//Fecha: 24-09-2022

#include<iostream>
using namespace std;

int main()
{
	float NACT_x,NACT_y,NACT_s,NACT_m,NACT_d,NACT_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de NACT_x=:";
	cin>>NACT_x;
	cout<<"Ingrese en valor de NACT_y=:";
	//Operaciones 
	cin>>NACT_y;
	NACT_s=NACT_x+NACT_y;
	NACT_m=NACT_x*NACT_y;
	NACT_d=NACT_x/NACT_y;
	NACT_r=NACT_x-NACT_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<NACT_x<<" + "<<NACT_y<<" = "<<NACT_s<<endl;
	cout<<"Las multiplicacion de "<<NACT/x<<" * "<<NACT_y<<" = "<<NACT_m<<endl;
	cout<<"Las division de "<<NACT_x<<" / "<<NACT_y<<" = "<<NACT_d<<endl;
	cout<<"Las resta de "<<NACT_x<<" - "<<NACT_y<<" = "<<NACT_r<<endl;
	return 0 ;

}
