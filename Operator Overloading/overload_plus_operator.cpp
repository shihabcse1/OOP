#include<iostream>
using namespace std;

class Number{
    int x, y;
public:

    Number(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
    Number operator+(Number ob);
};

Number Number :: operator+(Number ob){
    Number temp;
    temp.x = x + ob.x;
    temp.y = y + ob.y;
    return temp;
}

int main(){

    Number ob1(50, 10), ob2(4, 5), ob3;

    ob3 = ob1 + ob2;

    ob3.display();

    return 0;
}
