#include<iostream>
using namespace std;

class School{
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name,surname;
		
		void getData();
		void setNameSurname(string name, string surname);
		
		static string s_getSchool();
		static void s_setSchool(string pSchool){
			s_school=pSchool;
		}
};


	string School::s_school="ZSK";
	string School::s_jobPosition="Student";
	
	void School::getData(){
		cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
	}
	void School::setNameSurname(string name, string surname){
		School::name=name;
		School::surname=surname;
		
	}
 
 	string School::s_getSchool(){
 		return s_school;
	 }
 
int main(){
	setlocale(LC_CTYPE,"polish");
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	School kowal;
	kowal.setNameSurname("janusz","kowal");
	kowal.getData();
	School::s_jobPosition="wyk³adowca";
	cout<<"stanowisko "<<School::s_jobPosition;
	
	kowal.s_jobPosition="dziekan";
	cout<<"\nstanowisko "<<kowal.s_jobPosition<<endl;
	cout<<School::s_jobPosition<<endl;
	cout<<School::s_getSchool();
	
	School::s_setSchool("zsx");
	cout<<"\n"<<School::s_getSchool()<<endl;
	
	return 0;
}
