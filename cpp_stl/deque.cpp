#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque <int> d;
    //inserting in deque from back
    d.push_back(2);
    //inserting in deque from front
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

      //printing staring element(same as array vector);
    cout<<"startin element is ->"<<d.front()<<endl;
    
    //printing last element (same as array vector)
    cout<<"ending element is ->"<<d.back()<<endl;

    cout<<"printing elements"<<endl;
    //printing elements in deque
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //poping front element
    d.pop_front();
    
    cout<<"printing elements after poping front"<<endl;

    //after poping front element
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    //poping back element
    d.pop_back();
    
    cout<<"printing elements after poping back"<<endl;

    //after poping back element
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //empty or not checking
    cout<<"checking empty or not -> "<<d.empty()<<endl;

    cout<<"earse first 2 elements in deque"<<endl;
    //earse first 2 elements in deque 
    d.erase(d.begin(),d.begin()+2);

    //after earseing elements
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
  /////////////////////////////////**********************imp************************///////////////////////////
  //list is same as deque
  /////////////////////////////////**********************imp************************///////////////////////////
}