#include<iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		void getData();
};

void Worker::getData(){
	cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
}


int main(){
	setlocale(LC_CTYPE, "polish");
	
	Worker kowalski;
	Worker *p_kowalski=&kowalski;
	p_kowalski->name="Jan";
	p_kowalski->surname="Kowalski";
	cout<<"Adres obiektu: kowalski "<<p_kowalski<<endl;
	p_kowalski->getData();
		
	
	return 0;
}
