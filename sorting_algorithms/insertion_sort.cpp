#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &arr,int n){
    for(int i=1;i<=n-1;i++){
        int current = arr[i];
        int prev=i-1;
        while (prev>=0 and arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev-=1;
        }
        arr[prev+1]=current;
    }
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
    insertionSort(arr,n);
    cout<<"sorted array"<<endl;
    for(int m:arr){
        cout<<m<<" ";
    }
}