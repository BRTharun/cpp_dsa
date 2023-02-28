#include <iostream>
#include <array>
using namespace std;


int main(){
    //array initialization
    array<int ,3> a ={2,3,4};
    //array printing
    for(int i =0;i<a.size();i++){
    cout<<a[i];
    }
    //array acessing
    cout<<endl<<"array acessing"<<endl;
    cout<<a.at(2)<<endl;
    cout<<"staring element"<<endl;
    cout<<a.front();
    cout<<endl<<"ending element"<<endl;
    cout<<a.back();
    //check array empty or not
    cout<<endl<<"array empty or not"<<endl;
    cout<<a.empty();
    

    
}

