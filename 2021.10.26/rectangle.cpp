#include<iostream>

using namespace std;

class Rectangle{
	private:
		double sideA, sideB;
	public:
		Rectangle();
		Rectangle(double sideA, double sideB);
		//prototyp konstruktora kopiujacego
		Rectangle(const Rectangle &);
};



int main(){
	
	
	return 0;
}
