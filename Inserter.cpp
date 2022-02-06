#include<iostream>
using namespace std;

class Student{
public:
    int id;
    string name;

    Student(int i, string n){
        id = i;
        name = n;
    }
};

ostream &operator << (ostream &stream, Student s){
    stream << s.name << " ";
    stream << s.id;
    return stream; //must return
}

istream &operator >> (istream &stream, Student &s){
    stream >> s.name;
    stream >> s.id;
    return stream; //must return
}

int main(){

    Student s1(4, "ABC");
    cout<< s1 <<endl;
    return 0;
}




