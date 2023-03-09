#include <iostream>
using namespace std;

int fastExp(int a,int n){
    int ans=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans=ans*a;
        }
        a*=a;
        n=n>>1;
    }
    return ans;
}

int main(){
    int a,n;
    cin>>a>>n;
    cout<<fastExp(a,n)<<endl;
}