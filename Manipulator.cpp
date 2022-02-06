#include<iostream>
#include<iomanip>
using namespace std;

ostream &form(ostream &os){
    cout<<setw(15);
    cout<<setprecision(4);
    cout<<left;
    cout<<setfill('#');
    cout<<showpos;
    cout<<fixed;
    return os;
}

int main(){
    double p;
    cin>>p;
    cout<<form<<p<<endl;
    return 0;
}
