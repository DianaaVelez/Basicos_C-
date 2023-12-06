#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	
	int numero=0,cantidad=0,resultado=0;
	
	cout<<"Digite el numero a multiplicar: "<<endl;
	cin>>numero;
	cout<<"Digite el numero de repeticiones: "<<endl;
	cin>>cantidad;
	
	
	for(int i=1;i<=cantidad;i++){
		resultado = numero*i;
		cout<<numero<<" x "<<i<<" = "<<resultado<<endl;
	}
	
	return 0;
}
