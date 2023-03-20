#include <iostream>
#include "hash.h"
using namespace std;

int main(){
    Hashtable<int> h;
    h.inserst("mango",242);
    h.inserst("apple",240);
    h.inserst("banana",262);
    h.inserst("orange",222);
    h.inserst("grapes",222);
    h.inserst("kiwi",222);
    h.inserst("papaya",222);

    string fruit;
    cin>>fruit;

    int *p=h.search(fruit);
    if(p!=NULL){
        cout<<"price of fruit is "<<*p<<endl;
    }
    else{
        cout<<"fruit not found"<<endl;
    }

    h["lichi"]=200;
    cout<<"new fruit cost "<<h["lichi"]<<endl;
    h["lichi"]+=20;
    cout<<"new fruit cost(*updated*) "<<h["lichi"]<<endl;
    h.print();
}