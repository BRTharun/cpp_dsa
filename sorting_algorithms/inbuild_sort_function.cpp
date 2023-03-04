#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compare(int a,int b){
    return a>b;
}

int main(){
    vector<int> arr;
    int n,temp,k;
    cout<<"enter no of elements in array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    //reverse order
    // sort(arr.begin(),arr.end(),compare);
    //inorder
    // sort(arr.begin(),arr.end());
    //in array
    //sort(arr,arr+n)
    //reverse order 
    sort(arr.begin(),arr.end(),greater<int>());
    
    cout<<"sorted array"<<endl;
    for(int m:arr){
        cout<<m<<" ";
    }
}