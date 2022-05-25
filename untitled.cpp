#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ifstream file("plik.txt");
	
	if(file){
		cout<<"\ndziala\n";
		string  slowo;
		while(!file.eof()){
			//file>>slowo;
			//cout<<slowo<<"\n";
			getline(file, slowo);
			cout<<slowo<<"\n";
		}
		
		file.close();
	}
	else{
		cout<<"\nnie udalo sie utowrzyc pliku";
	}
		
	
	
	
	return 0;
}
