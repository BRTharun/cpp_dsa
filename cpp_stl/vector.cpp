#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector initalization (allocates memory dynamically)
    vector<int> a;
    
    //inserting elements in vector
    a.push_back(2);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity"<<a.capacity()<<endl;
    a.push_back(3);
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity"<<a.capacity()<<endl;
    a.push_back(4);
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity"<<a.capacity()<<endl;
    a.push_back(5);
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity"<<a.capacity()<<endl;
    a.push_back(6);
    
    //capacity doubles
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity changes double "<<a.capacity()<<endl;
    
    //acessing element(not used in array)
    cout<<"element at position 1 is-> "<<a[1]<<endl;
    
    //acessing element by at key world (used in array)
    cout<<"element at position 2 is -> "<<a.at(2)<<endl;
    
    //printing staring element(same as array);
    cout<<"startin element is ->"<<a.front()<<endl;
    
    //printing last element (same as array)
    cout<<"ending element is ->"<<a.back()<<endl;
    
    cout<<"befor pop"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    //poping last element from vector
    a.pop_back();
    cout<<"after pop"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    //befor clear size
    cout<<"before clear array size -> "<<a.size()<<endl;
    a.clear();
    cout<<"after clear array size -> "<<a.size()<<endl;
    
    //assigning all vales in vector with 1
    vector<int> b(5,1);
    
    //printing vector
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    //empty or not checking
    cout<<"checking empty or not -> "<<b.empty();
}