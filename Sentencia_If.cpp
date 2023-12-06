#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	
	int edad=0;
	
	cout<<"Digite su edad: "<<endl;
	cin>>edad;
	
	if(edad>=18){
		cout<<"Eres mayor de edad";
	}else{
		cout<<"Eres menor de edad";
	}
	
	return 0;
}
