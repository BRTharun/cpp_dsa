#include <iostream>
#include<vector>
using namespace std;

int linearSearch (const vector<int> &arr,int n,int k){
    for (int i=0;i<n;i++){
        if (arr[i]==k)
            return i;
    }
    return -1;
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
    cout<<"enter the element to search";
    cin>>k;
    int position = linearSearch(arr,n,k);
    if(position!=-1)
        cout<<"element fount at "<<position;
    else
        cout<<"element not fount";
}