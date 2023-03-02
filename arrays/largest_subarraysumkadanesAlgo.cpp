#include <iostream>
#include<vector>
using namespace std;

int subArraySum(vector<int> arr){
    int n=arr.size();
    vector<int> prefix(n,0);
    int current_sum=0;
    int largest_subarray_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        largest_subarray_sum=max(largest_subarray_sum,current_sum);
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