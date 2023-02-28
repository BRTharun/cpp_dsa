#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    //initilizing prority queue(max)
    priority_queue <int> max;

    //initilizing prority queue(min)
    priority_queue <int ,vector <int> ,greater<int> > min ;

    //pushing elements in max prority queue
    max.push(2);
    max.push(9);
    max.push(4);
    max.push(3);

    cout<<"max prority queue values"<<endl;
    //printing elements in max prority queue
    int s=max.size();
    for(int i=0;i<s;i++){
        cout<<max.top()<<" ";
        max.pop();
    };

     //pushing elements in min prority queue
    min.push(2);
    min.push(9);
    min.push(4);
    min.push(3);

    //printing elements in max prority queue

    cout<<endl<<"min prority queue values"<<endl;
    int sm=min.size();
    for(int i=0;i<sm;i++){
        cout<<min.top()<<" ";
        min.pop();
    };




}