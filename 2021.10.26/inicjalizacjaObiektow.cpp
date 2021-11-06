/*wcale nie skradziony kod*/
#include <iostream>

using namespace std;

class Worker{
	const int id {0};
	string name,surname;
	public:
		Worker();
		Worker(int id, string name, string surname);
		
		void getData();
		
};

void Worker::getData(){
	
	cout<<"Dane "<<endl<<"Id: "<<id<<endl<<"Imie:  "<<name<<endl<<"Nazwisko: "<<surname<<endl<< "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
	
}
Worker::Worker():
	id{-1},
	name{"IMIÊ DOMYŒLNE"},
	surname{"NAZWISKO DOMYSLNE"}
{
	cout<<"KONSTRUKTOR domyslny"<<endl;
	
}

Worker::Worker(int pId, string pName, string pSurname):
	id{pId},
	name(pName),
	surname{pSurname}
	{
		cout<<"kontruktor parametryczny "<<endl;
	}




int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");

	Worker nowak;
	nowak.getData();
	
	Worker kowalski(10,"Janusz","Kowalski");
	kowalski.getData();
	
	Worker pracownik=Worker(10, "janusz","kowalski");
	pracownik.getData;
	
	
	
	
	return 0;
}
