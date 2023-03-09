#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(int arr[],int n,int k){
    if(n==0){
        return -1;
    }
    if(arr[0]==k){
        return 0;
    }
    int sub_index=firstOccurence( arr+1, n-1, k);
    if(sub_index!=-1){
        return sub_index+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int k;
    cin>>k;
    cout<<firstOccurence(arr,n,k);

}