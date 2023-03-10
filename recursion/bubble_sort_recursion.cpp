#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr,int n,int j){
    if (n==1){
        return;
    }
    if(j==n-1){
    bubbleSort(arr,n-1,0);
    return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubbleSort(arr,n,j+1);
}

int main(){
    vector<int> arr={1,5,2,8,3,9};
    int n=6;
    bubbleSort(arr,n,0);
    for(int i:arr){
        cout<<i<<" ";
    }
}