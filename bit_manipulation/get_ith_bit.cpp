#include <iostream>
using namespace std;

int getIthBit(int n,int i){
    int mask = 1<<i;
    return (n&mask) > 0 ? 1 : 0;
}

int clearIthBit(int n,int i){
    int mask =1<<i;
    return (n&(~mask));
}

void setIthBit(int &n,int i){
    int mask =1<<i;
    n=n|mask;
}

void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask =v<<i;
    n=n|mask;
}

void clearLastIbits(int &n,int i){
    int mask=(-1<<i);
    n=n&mask;
}

void clearBitsInRange(int &n ,int i ,int j){
    int a= -1<<(j+1);
    int b= (1<<i) -1;
    int mask =a|b;
    n=n&mask;
}

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<getIthBit(n,i)<<endl;
    cout<<clearIthBit(n,i)<<endl;
    setIthBit(n,i);
    cout<<n<<endl;
    // cout<<"enter v value"<<endl;
    // int v;
    // cin>>v;
    // updateIthBit(n,i,v);
    // cout<<n<<endl;
    // clearLastIbits(n,i);
    // cout<<n<<endl;
    int j;
    cout<<"enter j"<<endl;
    cin>>j;
    clearBitsInRange(n,i,j);
    cout<<n<<endl;
}