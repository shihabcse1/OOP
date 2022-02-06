#include<iostream>
using namespace std;

int main(){

    try{
        cout<<"Test"<<endl;
        throw 1.5;
    }
    catch(int e){
        cout<<"Exception integer "<<e<<endl;
    }
    catch(double e){
        cout<<"Exception Double "<<e<<endl;
    }

    return 0;
}
