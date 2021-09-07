#include<iostream>

using namespace std;


 class Worker{
 	public:
	/*deklaracja zmiennej członkowieskiej*/
	string name;
	string surname;
	unsigned short int age;
	
//definicja funkcji członkowskiej
	void showName(){
		cout<<"twoje imie:  "<<name<<endl;
	}
	
}; 

int main(){
	setlocale(LC_CTYPE, "Polish");
	 Worker pracownik;
	 
	 pracownik.surname="Nowak";
	 
	 pracownik.showName();
	// cout<<pracownik.surname;	 
	 pracownik.age=16;
	 cout<<"wiek: "<<pracownik.age<<endl;
	 
	return 0;
}
