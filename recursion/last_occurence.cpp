#include <iostream>
using namespace std;

int lastOccurence(int arr[],int n,int k){
    if(n==0){
        return -1;
    }
    int sub_index=lastOccurence(arr+1,n-1,k);
    if(sub_index==-1){
        if(arr[0]==k){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        sub_index+=1;
    }
    return sub_index;
}

int main(){
    int arr[]={1,2,7,4,7,2};
    int n=6;
    int k=7;
    cout<<lastOccurence(arr,n,k)<<endl;
}