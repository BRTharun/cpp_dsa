#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr , int k,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if (k<arr[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
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
    int position = binarySearch(arr,k,n);
    if(position!=-1)
        cout<<"element fount at "<<position;
    else
        cout<<"element not found";
}