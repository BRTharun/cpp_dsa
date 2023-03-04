#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> &arr, int n){
    for(int i=0;i<=n-2;i++){
        int current=arr[i];
        int min_position=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min_position]){
                min_position=j;
            }
        }
        swap(arr[i],arr[min_position]);
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
    selectionSort(arr,n);
    cout<<"sorted array"<<endl;
    for(int m:arr){
        cout<<m<<" ";
    }
}