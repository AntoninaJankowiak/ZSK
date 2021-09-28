#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, rrrr;
};

struct Student{
	string name, surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5]; 
};



int main(){
	setlocale(LC_CTYPE, "polish");
	Student kowalski{"Janusz", "Nowak", 100,{28,9,2021},{5,4,2,3,4}};
	
	cout<<"Imiê i nazwisko: "<<kowalski.name<<" "<<kowalski.surname
	<<"\nIdentyfikator: "<<kowalski.id<<"\nData urodzenia: "<<kowalski.dateBirthday.dd<<"-"<<kowalski.dateBirthday.mm
	<<"-"<<kowalski.dateBirthday.rrrr;
	return 0;
}
