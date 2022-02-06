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
        cout<<x<<"  "<<y<<endl;
    }
    Number operator=(Number ob);
};

Number Number :: operator=(Number ob){
    x = ob.x;
    y = ob.y;
    return *this;

}

int main(){

    Number n1(6, 7), n2(8, 10), n3;

    n3 = n2 = n1;

    n3.display();

    return 0;
}
