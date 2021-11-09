#include <iostream>
using namespace std;

class Worker{
public:
    string name,surname;

    Worker();
    Worker(string pName, string pSurname);

    void getData();

    ~Worker(){
        cout<<"\ndestruktor";
    }

};

Worker::Worker(){
cout<<"\nkonstruktor domyślny";

}

Worker::Worker(string pName, string pSurname){
cout<<"\nkonstruktor parametryczny";
surname=pSurname;
name=pName;
}

void Worker::getData(){
cout<<"\nimie i nazwisko: "<<name<<" "<<surname;

}

void createObjectWorker(string Name,string Surname){
    //Worker object=Worker(Name,Surname);
    Worker object;
    object.getData();
    cout<<"\nwywolanie funkcji createObjectWorker";
}

int main() {
    setlocale(LC_CTYPE,"polish");
    //Worker nowak=Worker("Janusz","Nowak");
    //nowak.getData();

    /*Worker *p_kowalski=new Worker("Krystian","kowalski");
    p_kowalski->getData();
    delete p_kowalski;*/

    createObjectWorker("wuzek","femboy");

    return 0;
}
