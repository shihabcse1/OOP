#include<iostream>
using namespace std;

template <class T>
void inter_change(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    double a = 4.9, b = 9.7;

    cout<<a<<" "<<b<<endl;

    inter_change(a, b);

    cout<<"After Interchange : ";

    cout<<a<<" "<<b<<endl;

    return 0;
}

