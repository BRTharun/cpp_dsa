#include<iostream>
#include <cstring>
using namespace std;

class Person {
    string *name;
    int age;
public:
    

    // Default constructor
    Person() {
        cout<<"this is deafult";
        name = nullptr;
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = new string(n);
        age = a;
    }

    //shallo copy constructor
    // Person(const Person &obj) {
    //     name = obj.name;
    //     age = obj.age;
    // }

    // deep Copy constructor
    Person(const Person &obj) {
        name = new string(*obj.name);
        age = obj.age;
    }
    
    void setAge(int val){
        age=val;
    }
    void setName(string a){
        *name = a;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return *name;
    }

    // Destructor
    ~Person() {
        delete name;
    }
};

int main(){
    Person p1("Krishna",100);
    Person p2(p1); // Calls copy constructor to create a new object p2 that is a copy of p1

    p2.setName("Ram");
    p2.setAge(180);
    cout<<p1.getName()<<endl; // Output: Ram
    cout<<p2.getName()<<endl; // Output: Krishna
    cout<<p1.getAge()<<endl;
    cout<<p2.getAge()<<endl;

    return 0;
}
