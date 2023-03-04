#include<iostream>
#include<vector>
using namespace std;

//3 5 8 4 6
int countSort(vector<int> &arr,int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    vector <int> count(10,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
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
    countSort(arr,n);
    cout<<"sorted array"<<endl;
    for(int m:arr){
        cout<<m<<" ";
    }
}