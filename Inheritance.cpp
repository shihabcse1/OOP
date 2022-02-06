#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Student : public Person{
public:
    int roll;
    float gpa;
    Student(string name, int age, int r, float g) : Person(name, age){
        roll = r;
        gpa = g;
    }
    void display(){
        //display();
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Student Roll : "<<roll<<endl;
        cout<<"Student GPA : "<<gpa<<endl;
    }
};

class Test : public Student{
public:
    int x;
    int y;
    Test(string name, int age, int r, float g, int q, int w) : Student(name, age, r, g){
        x = q;
        y = w;
    }
    void display(){
        //display();
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Student Roll : "<<roll<<endl;
        cout<<"Student GPA : "<<gpa<<endl;
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }
};

int main(){

    Person p("karim", 21);
    p.display();

    cout<<"------------------"<<endl;

    Student s("Rahim", 18, 164026, 3.45);
    s.display();

    cout<<"------------------"<<endl;

    Test t("Abu", 18, 164026, 3.45, 7777, 8888);

    t.display();

    return 0;
}
