#include<iostream>

using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
		string brand, model, color;
		int id;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void getData();
		
		Car();
		
		Car(int pid);
		
		Car(int pid, string pBrand, string pModel);
		
		Car(int pid, string pBrand, string pModel, string pColor);
		
		Car(int pid, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pdateOfProduction);
};


Car::Car(){
	
}

Car::Car(int pid){
	id=pid;
}

Car::Car(int pid, string pBrand, string pModel){
	brand=pBrand;
	model=pModel;
}

Car::Car(int pid, string pBrand, string pModel, string pColor){
	brand=pBrand;
	model=pModel;
	color=pColor;
}


Car::Car(int pid, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pdateOfProduction){
	id=pid;
	brand=pBrand;
	model=pModel;
	color=pColor;
	price=pPrice;
	dateOfProduction=pdateOfProduction;
	power=pPower;
	
}
void Car::getData(){
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model
	<<"\nRok produkcji: "<<dateOfProduction.yyyy<<"\nMoc: "
	<<power<<"\nKolor: "<<color<<"\nCena: "<<price<<endl<<endl;
}


int main(int argc, char** argv){
	setlocale(LC_CTYPE, "Polish");
	Car fiat(10,"fiat","126p","czerwony",100,12000,{5,4,2000});
	fiat.getData();
	Car toyota(15,"Toyota","Yaris","niebieksi");
	toyota.getData();
	
	Car *zsk;
	zsk=&toyota;
	
	cout<<zsk->brand;
	zsk->getData();
	
	return 0;
}
