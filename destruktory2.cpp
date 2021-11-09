#include <iostream>
using namespace std;

class Animal{
public:
    static int s_count;

    Animal(){
       //cout<<"\nkonstruktor";
        s_count++;
    }

    ~Animal(){
       // cout<<"\nDestruktor";
        s_count--;
    }

};
int Animal::s_count=0;

void animalCount(){
    cout<<"\nIlosc obiektow: "<<Animal::s_count;
}

int main() {
    setlocale(LC_CTYPE,"polish");
    animalCount();
    Animal dog;
    animalCount();
    Animal cat;
    animalCount();

    auto *p_cow=new Animal();
    animalCount();
    delete p_cow;
    animalCount();
    

    return 0;
}
