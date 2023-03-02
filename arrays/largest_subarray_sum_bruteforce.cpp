#include <iostream>
#include<vector>
using namespace std;

int subArraySum(vector<int> arr){
    int n=arr.size();
    int largest_subarray_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarray_sum=0;
            for(int k=i;k<=j;k++){
                subarray_sum+=arr[k];
            }
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

//time n3