#include<iostream>
using namespace std;

class Base{

};

class Derived : public Base{

};

int main(){

    Base b;
    Derived d;

    try{
        throw b;
    }catch(Derived e){
        cout<<"Derived"<<endl;
    }catch(Base e){
        cout<<"Base"<<endl;
    }

    return 0;
}



