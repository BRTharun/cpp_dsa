#include <iostream>
#include<set>
using namespace std;

int main(){
    //initilizing set
    set <int> s;

    //inserting elements in set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    //does not insert 2 becouse it does not allow duplicates
    s.insert(2);

    //printing set
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    //erase set values
    set <int> ::iterator it=s.begin();
    it++;
    
    //erase 1st element
    s.erase(it);

    //printing set after erasing
    for (int i:s){
        cout<<i<<" ";
    }cout<<endl;

    //element is present or not
    cout<<"2 element is present or not ->"<<s.count(2)<<endl;

    //finding element position(address)
    set <int>::iterator itr=s.find(1);

    //printing elemets starting with 2
    for (auto i =itr;i!=s.end();i++){
        cout<<*i<<" ";
    }cout<<endl;
}