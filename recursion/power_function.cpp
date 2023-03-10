#include <iostream>
using namespace std;

int power(int a,int n){
    if(n==0){
        return 1;
    }
    return a*power(a,n-1);
}

int fastPower(int a,int n){
    if(n==0){
        return 1;
    }
    int sub_problem=fastPower(a,n/2);
    int sub_problem_sqr=sub_problem*sub_problem;
    if(n&1){
        return a*sub_problem_sqr;
    }
    return sub_problem_sqr;
}

int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fastPower(a,n)<<endl;
}