#include <iostream>
#include "queue_array.h"
using namespace std;

int main(){
    Queue myQueue(7);
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(5);
    myQueue.push(3);
    myQueue.push(9);
    myQueue.push(6);
    myQueue.pop();
    myQueue.pop();
    myQueue.push(7);
    while (!myQueue.empty())
    {
        cout<<myQueue.getFront()<<endl;
        myQueue.pop();
    }
    
}