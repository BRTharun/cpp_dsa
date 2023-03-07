#include <iostream>
using namespace std;

int ** createdarray(int r,int c){
    int **arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i]= new int[c];
    }

    int v=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=v;
            v++;
        }
    }
    return arr;
}

int main(){
    int r,c;
    cin>>r>>c;
    int **arr =createdarray(r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}