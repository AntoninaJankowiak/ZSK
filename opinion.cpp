#include<iostream>

using namespace std;

int main(){
	
	string plec,message=" ";
	bool opinion;
	cout<<"podaj plec";
	cin>>plec;
	if(plec=="kobieta"|||plec=="baba"||plec=="dziewczyna")
		opinion=false;
	else if(plec=="akkra")
		message="femboy furry"; opinion=true;
	else if(plec=="transnigga"||plec=="helikopter"||plec=="mayo"||plec="shrek")
		message="piatek albo ktos inny based"; opinion=true;
	else
		opinion=true;
	
	cout<<"wiadomosc: "<<message<<"\n opinia: "<<opinon;
	
	
	
	return 0;
}
