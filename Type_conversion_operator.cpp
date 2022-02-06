#include<iostream>
using namespace std;

//Build in Data type to class
//class to build in data type
//class to class

class Number{
    int x, y;
public:
    Number(int a, int b = 0){
        x = a;
        y = b;
    }


    void print(){
        cout<<x<<"  "<<y<<endl;
    }

    operator int(){
        return x+y;
    }

};

int main(){

    Number n1(6, 7), n2(2, 3);

    int a = 5;

    a = n1;

    cout<<a<<endl;

    /// Build in to class

    int x = 7;

    n2 = x;

    cout<<n2<<endl;

    return 0;
}
