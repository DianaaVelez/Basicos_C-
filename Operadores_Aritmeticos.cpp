#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	                      //opcional
	//Tipo de dato-nombre-valor;
	int num1 = 0,num2=0,suma=0,resta=0,multi=0;
	float divi=0;
	
	
	cout<<"Digite el numero 1: "<<endl;//Muesta un mensaje
	cin>>num1;//Lee un avariable
	
	cout<<"Digite el numero 2: "<<endl;//Muesta un mensaje
	cin>>num2;//Lee un avariable
	
	suma=num1+num2;//Se suman las variables.
	resta=num1-num2;//Se restan las variables.
	multi=num1*num2;//Se multiplican las variables.
	divi=num1/num2;//Se dividen las variables.
	
	cout<<num1<<" + "<<num2<<" = "<<suma<<endl;
	cout<<num1<<" - "<<num2<<" = "<<resta<<endl;
	cout<<num1<<" x "<<num2<<" = "<<multi<<endl;
	cout<<num1<<" / "<<num2<<" = "<<divi<<endl;
	
	return 0;
}
