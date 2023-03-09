#include <iostream>
#include <vector>
using namespace std;

// bool isSorted(vector<int> arr,int n){
//     if(n==1 or n==0){
//         return true;
//     }
//     if((arr[0]<arr[1]) and (isSorted(vector<int>(arr.begin()+1, arr.end()),n-1))){
//         return true;
//     }
//     return false;
// } 

bool isSorted(int arr[], int n){
    if (n == 1 or n == 0){
        return true;
    }
    cout<<"value of n is "<<n<<endl;
    if (arr[0] < arr[1] and isSorted(arr+1, n-1)){
        return true;
    }
    return false;
}

bool isSorted1(vector<int> v, int n)
{
    if (n == 1)  // base case
        return true;

    // Recursive call
    bool sorted = isSorted1(v, n-1);

    // Check if the last element is greater than or equal to the second-last element
    if (sorted && v[n-1] >= v[n-2])
        return true;
    else
        return false;
}


int main(){
    cout<<"enter size";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    vector<int> arr1(n);
    cout<<"enter values of 1"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    cout<<isSorted(arr,n)<<endl;
    cout<<isSorted1(arr1,n);
}