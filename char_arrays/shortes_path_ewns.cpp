#include <iostream>
#include <vector>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    // vector<char> lines(0);
    // lines.push_back(line);
    int x=0;
    int y=0;
    for(char i:line){
        switch (i)
        {
        case 'N':y++;
            break;
        case 'S':y--;
            break;
        case 'E':x++;
            break;
        case 'W':x--;
            break;
        }
    }
    cout<<"x and y are"<<x<<" "<<y<<endl;
    if (x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if  (x<=0 and y<=0){
        while(y++){
            cout<<"S";
        }
        while(x++){
            cout<<"W";
        }
    }
    else if (x<=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x++){
            cout<<"W";
        }
    }
    else if (x>=0 and y<=0){
        while(y++){
            cout<<"S";
        }
        while(x--){
            cout<<"E";
        }
    }
}