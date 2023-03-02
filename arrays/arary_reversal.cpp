#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
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
    cout<<"before reversal"<<endl;
    for (int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    reverseArray(arr,n);
    cout<<endl<<"after reversal"<<endl;
    for (int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}