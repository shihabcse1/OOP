#include<iostream>
using namespace std;

template <class T1, class T2>
class Test{

public:

    T1 num;
    T2 name;
    Test(){}

    Test(T1 x, T2 n){
        num = x;
        name = n;
    }
    void display(){
        cout<<"Id : "<<num<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main(){

    Test<int, string> ob1(24, "Rahim");
    ob1.display();

    Test<int, string> ob2(28, "Abdul");
    ob2.display();

    return 0;
}
