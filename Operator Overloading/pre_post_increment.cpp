#include<iostream>
using namespace std;

class Number{
    int x,y;
public:
    Number(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<"  "<<y<<endl;
    }
    Number operator ++();
    Number operator ++(int);
};

Number Number :: operator++(){
    x++;
    y++;
    return *this;
}

Number Number :: operator++(int){
    Number temp;
    temp.x = x++;
    temp.y = y++;
    return temp;
}

int main(){

    Number ob(5, 6);

    (++ob).display();
    ob.display();

    (++ob).display();
    ob.display();

    //Post increment

    ob++.display();

    ob++.display();




    return 0;
}
