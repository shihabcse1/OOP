#include<iostream>
using namespace std;

class Base{
public:
    void print(){
        cout<<"Base"<<endl;
    }
};

class Derived : public Base{
public:
    void print(){
        cout<<"Derived"<<endl;
    }
};
int main(){

    Base d;
    d.print();
    return 0;
}
