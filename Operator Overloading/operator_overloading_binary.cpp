#include<iostream>
using namespace std;

class Number{
public:
    int x;
    int y;
    Number(){
        x = 0;
        y = 0;
    }
    Number(int a, int b){
        x = a;
        y = b;
    }
    Number operator+(Number ob){
        Number temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }
    Number operator++(){
        x++;
        y++;
        return *this;
    }
    Number operator++(int){
        Number tmp;
        tmp.x = x++;
        tmp.y = y++;
        return tmp;
    }
    bool operator<(Number ob);
};

bool Number :: operator < (Number ob){
    return (x + y) < (ob.x + ob.y);
}

int main(){

    Number n1(5, 799), n2(23, 78);

    if(n1 < n2){
        cout<<"n1 is Smaller than n2"<<endl;
    }else{
        cout<<"bigger"<<endl;
    }

    return 0;
}
