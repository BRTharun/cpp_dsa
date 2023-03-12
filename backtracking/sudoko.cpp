#include<iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int no){
    for(int k=0;k<9;k++){
        if(mat[k][j]==no || mat[i][k]==no){
            return false;
        }
    }
    int sx=(i/3)*3;
    int sy=(j/3)*3;
    for(int i=sx;i<sx+3;i++){
        for(int j=sy;j<sy+3;j++){
            if(mat[i][j]==no){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoko(int mat[][9],int i,int j,int n){
    if (i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<",";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n){
        return solveSudoko(mat,i+1,0,n);
    }
    if(mat[i][j]!=0){
        return solveSudoko(mat,i,j+1,n);
    }

    //check all possible no's
    for(int no=1;no<=n;no++){
        //whether it is safe to insert at that positon or not
        if(isSafe(mat,i,j,no)){
            mat[i][j]=no;
            bool solveSubProblem=solveSudoko(mat,i,j+1,n);
            if(solveSubProblem==true){
                return true;
            }
        }
        mat[i][j]=0;
    }

    //if no option works
    return false;

}

int main(){
    int n=9;
    int mat [9][9] =
{{5,3,0,0,7,0,0,0,0},
{6,0,0,1,9,5,0,0,0},
{0,9,8,0,0,0,0,6,0},
{8,0,0,0,6,0,0,0,3},
{4,0,0,8,0,3,0,0,1},
{7,0,0,0,2,0,0,0,6},
{0,6,0,0,0,0,2,8,0},
{0,0,0,4,1,9,0,0,5},
{0,0,0,0,8,0,0,7,9}};
if(!solveSudoko(mat,0,0,n)){
    cout<<"no solution exist";
}
}