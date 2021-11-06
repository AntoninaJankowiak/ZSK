#include<iostream>
using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Car{
	public:
		int id;
		string brand,model,color;
		unsigned short int power;
		float price;
		Date dateOfProduction;
	
		void getData();
		void setData();
		
		Car(int pId, string pBrand, string pModel, string pColor,  unsigned short int pPower, float pPrice, Date pDateOfProduction);
};


Car::Car(int pId, string pBrand, string pModel, string pColor,  unsigned short int pPower, float pPrice, Date pDateOfProduction){
	id=pId;	
	brand=pBrand;	
	model=pModel;	
	color=pColor;	
	power=pPower;	
	price=pPrice;	
	dateOfProduction=pDateOfProduction;	
	
}

void Car::getData(){
	cout<<"id: "<<id<<"\nmarka: "<<brand<<"\nmodel: "<<model<<"\nkolor: "<<color<<"\nmoc: "<<power<<"KM \ncena: "<<price<<" pln \ndata produkcji: "
	<<dateOfProduction.dd<<"-"<<dateOfProduction.mm<<"-"<<dateOfProduction.yyyy<<endl;
}

/*void Car::setData(){
	cout<<"podaj id, marke, model, kolor, moc, cene, dzien produkcji, miesiac produkcji, rok produkcji \n";
	cin>>id>>brand>>model>>color>>power>>price>>dateOfProduction.dd>>dateOfProduction.mm>>dateOfProduction.yyyy;
}*/

 
int main(){
	setlocale(LC_CTYPE,"polish");
	
	Car fiat(1, "x", 2,2.1,{1,2,3});
	//fiat.setData();
	fiat.getData();
	
	return 0;
}
