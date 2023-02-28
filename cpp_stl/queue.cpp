#include<iostream>
#include<queue>
using namespace std;

int main(){
    //queue initalization
    queue <string> q;
    
    //pushing elements 

    q.push("tarun");
    q.push("kumar");

    //viewing front value
    cout<<"front value"<<q.front()<<endl;

    //poping in queue front
    q.pop();
    
    cout<<"front element poped -> "<<q.front();


}