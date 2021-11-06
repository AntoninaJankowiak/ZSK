#include<iostream>
#include<locale.h>
using namespace std;

class Worker{
	public:
	string name;
	string surname;
	string nationality;
	unsigned short int yearBirthday;
	char gender;
	float height;
	//definicja funkcji cz³onkowskiej
	void showName(){
		cout<<"Twoje imiê to: "<<name;
		
	} 
	//deklaracja (prototyp) metody
	void showSurname();
	void showPersonality();
	void showAllData();
};
//definicja metody showSurname
void Worker::showSurname(){
	cout<<"Nazwisko: "<<surname;
}

void Worker::showPersonality(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
}
void Worker::showAllData(){
	cout<<"Dane Pracownika \n";
	showPersonality();
	cout<<"Narodowoœæ: "<<nationality<<"\n"<<"Data urodzenia: "<<yearBirthday<<" r, wzrost: "<<height<<" cm "<<endl;
}




int main(){
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.name="Janusz";
	pracownik.surname="Kowalski";
	pracownik.nationality="polish";
	pracownik.yearBirthday=2000;
	pracownik.gender='M';
	pracownik.height=180;
	//pracownik.showName();
	pracownik.showPersonality();
	pracownik.showAllData();
	return 0;
}
