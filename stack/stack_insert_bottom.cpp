#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &arr,int d){
    if(arr.empty()){
        arr.push(d);
        return;
    }
    int temp=arr.top();
    arr.pop();
    insertAtBottom(arr,d);
    arr.push(temp);
}

void reverse(stack <int> &arr){
    if(arr.empty()){
        return;
    }
    int temp=arr.top();
    arr.pop();
    reverse(arr);
    insertAtBottom(arr,temp);
}

int main(){
    stack <int> arr;
    arr.push(3);
    arr.push(2);
    arr.push(1);
    insertAtBottom(arr,4);
    // while (!arr.empty())
    // {
    //     cout<<arr.top()<<endl;
    //     arr.pop();
    // }
    reverse(arr);
    while (!arr.empty())
    {
        cout<<arr.top()<<endl;
        arr.pop();
    }
    
}