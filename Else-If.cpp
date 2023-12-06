#include <iostream>
/*Libreria principal de c++*/
using namespace std;
int main(){
	
	char ColorL;
	
	cout<<"Digite la inicial de su color: "<<endl;
	cin>>ColorL;
	
	if(ColorL!='V'&&ColorL!='R'){
		cout<<"Su color no es verde ni rojo";
	}
	else if(ColorL=='V'){
		cout<<"Su color es verde";
	}else if(ColorL=='R'){
		cout<<"Su color es Rojo";
	}
	
	return 0;
}
