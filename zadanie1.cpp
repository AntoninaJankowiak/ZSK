#include<iostream>
#include<locale.h>

using namespace std;

class Rectangle{
	public:
	float lenghtA;
	float lenghtB;
	float area;
	float circumference;

	float calculateArea();
	float calculateCircumference();
	float showResults();

};

	float Rectangle::calculateCircumference(){
		if(lenghtA<=0||lenghtB<=0){
			cout<<"liczby musza byc wiekze od zera";
			return 0;
		}
		circumference=2*lenghtA+2*lenghtB;
		
		return circumference;
		
	}
	
	float Rectangle::calculateArea(){
		if(lenghtA<=0||lenghtB<=0){
			cout<<"liczby musza byc wiekze od zera";
			return 0;
		}
		area=lenghtA*lenghtB;
		
		return area;
	}

	float Rectangle::showResults(){
		calculateCircumference();
		calculateArea();
		cout<<"pole wynosi: "<<area<<endl;
		cout<<"obwod wynosi: "<<circumference<<endl;
	}



int main(){
	setlocale(LC_CTYPE, "polish");
	
	Rectangle rectangle;
	cin>>rectangle.lenghtA;
	cin>>rectangle.lenghtB;
	
	rectangle.showResults();
	
	
	return 0;
	
	}
