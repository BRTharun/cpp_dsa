#include <iostream>
#include<vector>
using namespace std;

int subArraySum(vector<int> arr){
    int n=arr.size();
    vector<int> prefix(n,0);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest_subarray_sum=0;
    for(int i=0;i<n;i++){
        int subarray_sum=0;
        for(int j=i;j<n;j++){
            subarray_sum=i>0?prefix[j]-prefix[i-1]:prefix[j];
            largest_subarray_sum=max(largest_subarray_sum,subarray_sum);
        }
    }
    return largest_subarray_sum;
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
    int sum =subArraySum(arr);
    cout<<"largest sub array sum is -> "<<sum;
}