#include <iostream>
#include <vector>
using namespace std;

void bubbleSort (vector<int> &arr,int n){
    for (int i=1;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr,n);
    cout<<"sorted array"<<endl;
    for(int m:arr){
        cout<<m<<" ";
    }
}