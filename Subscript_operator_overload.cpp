#include<iostream>
using namespace std;

class Number{
    int x, arr[10];
public:
    Number(){
        x = 1;
        for(int i = 1; i <= 10; i++){
            arr[i] = i*x;
        }
    }
    Number(int a){
        x = a;
        for(int i = 1; i <= 10; i++){
            arr[i-1] = i * x;
        }
    }

    int operator [](int a){
        return arr[a-1];
    }
};

int main(){

    Number n1(4);

    cout<<n1[4]<<endl;
    return 0;
}
