//Creado por: Neil Aldhair Canchingre Tamayo
#include<iostream>
using namespace std;
int main()
{
	int NACT_i=0,NACT_l;
	float NACT_x,NACT_s=0;
	cout<<"ingrese el limite NACT_l="; cin>>NACT_l;
	do{

	cout<<"ingrese el numero NACT_x="; cin>>NACT_x;
	NACT_i=NACT_i+1;
	NACT_s=NACT_s+NACT_x;



	}while(NACT_i<NACT_l);
	cout<<"Se ingresaron "<<NACT_l<<" numeros "<< "que sumaron "<<NACT_s<<endl;
	return 0;
}
