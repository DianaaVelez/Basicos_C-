#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	
	int numero=0,cantidad=0,resultado=0,aux=1;
	
	cout<<"Digite el numero a multiplicar: "<<endl;
	cin>>numero;
	cout<<"Digite el numero de repeticiones: "<<endl;
	cin>>cantidad;
	
	
	while(aux<=cantidad){
		resultado = numero*aux;
		cout<<numero<<" x "<<aux<<" = "<<resultado<<endl;
		aux++;
	}
	
	return 0;
}
