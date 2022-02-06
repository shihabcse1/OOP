#include<iostream>
using namespace std;

class Number{
    int x, y;
public:
    Number(){
        x = 0;
        y = 0;
    }
    Number(int a, int b){
        x = a;
        y = b;
    }
    friend Number operator + (Number ob1, Number ob2){
        Number ob3;
        ob3.x = ob1.x + ob2.x;
        ob3.y = ob1.y + ob2.y;
        return ob3;
    }

    friend void operator << (ostream &os, Number ob){
        os<<ob.x<<"  "<<ob.y<<endl;
    }
};

int main(){

    Number n1(6, 7), n2(1, 2), n3;

    n3 = n1 + n2;

    cout<<n3;


    return 0;
}
