#include <iostream>
#include <vector>
using namespace std;

int rotatedBinarySearch(vector<int> arr,int n,int k){
    int s=0;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==k){
            return m;
        }
        if(arr[s]<arr[m]){
            if(k>=arr[s] and k<=arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        else{
            if(k<=arr[e] and k>=arr[m]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
}

int main(){
    vector<int> arr={7,8,9,1,2,3};
    int n=6;
    int k=1;
    cout<<rotatedBinarySearch(arr,n,k)<<endl;
}