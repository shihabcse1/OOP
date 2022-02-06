#include<iostream>
using namespace std;

class exep{
    int id;
    string name;
public:
    exep(int i, string n){
        id = i;
        name = n;
    }
    void print(){
        cout<<"Error id : "<<id<<"  "<<name<<endl;
    }
};

void positive(int a){
    cout<<a<<endl;
    try{
        if(a < 1)
            throw exep(1, "Not a positive");
    }catch(exep e){
        e.print();
    }
}


int main(){

    positive(5);
    positive(-4);
    positive(6);

    return 0;
}
