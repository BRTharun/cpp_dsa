#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //vector initalization (allocates memory dynamically)
    vector<int> a;
    
    //inserting elements in vector
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    //finding element using binary search
    cout<<"finding 3 in vector binarysearch -> "<<binary_search(a.begin(),a.end(),3)<<endl;
    
    //finding upperbound of a value
    cout<<"upperbound of 3 in binarysearch -> "<<upper_bound(a.begin(),a.end(),3)-a.begin()<<endl;
    
    //finding lowerbound of a value
    cout<<"lowerbound of 3 in binarysearch -> "<<lower_bound(a.begin(),a.end(),3)-a.begin()<<endl;

    //max function
    int c=4;
    int d=8;
    cout<<"max of c and d -> "<< max(c,d)<<endl;

    //min function
    cout<<"min of c and d -> "<< min(c,d)<<endl;

    //swap function
    swap(c,d);
    cout<<"swaped c value -> "<< c<<endl;

    //reverse of string
    string acd ="abcdef";
    reverse(acd.begin(),acd.end());
    cout<<"reversed string ->  "<<acd<<endl;

    //rotate a string
    rotate(a.begin()+1,a.begin()+2,a.end());
    cout<<"after rotating vector"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    //sort function
    cout<<"sorting"<<endl;
    sort(a.begin(),a.end());
    for (int i:a){
        cout<<i<<" ";
    }cout<<endl;
}