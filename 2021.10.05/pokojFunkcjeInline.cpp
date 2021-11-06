#include<iostream>
using namespace std;

class Room{
	public:
		float lenght, width,height;
		
	inline float getArea(float lenght, float width){
		return lenght*width;
	}	
	inline float getVolume(float lenght, float width, float height){
		return lenght*width*height;
	}	
	
};






int main(){
	setlocale(LC_CTYPE, "polish");
	
	Room pokoj;
	pokoj.lenght=3.5;
	pokoj.width=4.1;
	pokoj.height=3;
	float pole=pokoj.getArea(pokoj.lenght,pokoj.width);
	float objetosc=pokoj.getVolume(pokoj.lenght,pokoj.width,pokoj.height);
	
	cout<<"dlugosc pokoju: "<<pokoj.lenght<<" m\nszerokosc pokoju: "<<pokoj.width<<"m "<<"\nobjetosc pokoju: "<<objetosc<<" m^3"<<endl;
	
	return 0;
}
