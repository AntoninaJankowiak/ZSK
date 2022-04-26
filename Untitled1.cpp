#include<bits/stdc++.h>

using namespace std;


int main(){
	setlocale(LC_CTYPE,"polish");	
	//ofstream out("siuuu.txt");
	//out<<"XD";
	
	ofstream File;
	File.open("C:\\Users\\student\\Desktop\\pliki\\plik.txt");
	string text;
	if(File.is_open()){
		cout<<"podaj dane do zapisu \n";
		getline(cin,text);
		if(text=="pi¹tek")
			text+=" jest gejem";
		File<<text;
		File.close();
	}
	else
		cout<<"error";
	
	
	
	return 0;
}
