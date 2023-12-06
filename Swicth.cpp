#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	
	int opcion;
	char Vocal;
	
	cout<<"Ingrese un numero del 1 al 3: "<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"La opcion es 1"<<endl;
			break;
		case 2:
			cout<<"La opcion es 2"<<endl;
			break;
		case 3:
			cout<<"La opcion es 3"<<endl;
			break;
		default:
			cout<<"Opcion invalida"<<endl;
			break;
	}
	cout<<"Ingrese una vocal: "<<endl;
	cin>>Vocal;
	
	switch(Vocal){
		case 'a':
			cout<<"La a es una vocal"<<endl;
			break;
		case 'e':
			cout<<"La e es una vocal"<<endl;
			break;
		case 'i':
			cout<<"La i es una vocal"<<endl;
			break;
		case 'o':
			cout<<"La o es una vocal"<<endl;
			break;
		case 'u':
			cout<<"La u es una vocal"<<endl;
			break;
		case 'A':
			cout<<"La A es una vocal"<<endl;
			break;
		case 'E':
			cout<<"La E es una vocal"<<endl;
			break;
		case 'I':
			cout<<"La I es una vocal"<<endl;
			break;
		case 'O':
			cout<<"La O es una vocal"<<endl;
			break;
		case 'U':
			cout<<"La U es una vocal"<<endl;
			break;
		default:
			cout<<"Su letra no es una vocal"<<endl;
			break;
	}
	
	return 0;
}
