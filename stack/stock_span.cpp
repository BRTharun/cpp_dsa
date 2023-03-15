#include <iostream>
#include <stack>
using namespace std;

void stockSpan(int arr[],int n,int span[]){
    stack<int> s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<=n-1;i++){
        int cur_price=arr[i];
        while(!s.empty() and cur_price>=arr[s.top()]){
            s.pop();
        }
        if(!s.empty()){
            int prev_highest=s.top();
            span[i]=i-prev_highest;
        }
        else{
            span[i]=i+1;
        }
        s.push(i);
    }
}

int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n= sizeof(arr)/sizeof(int);
    int span[100]={0};
    stockSpan(arr,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}