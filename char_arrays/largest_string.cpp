#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin>>n;

    cin.get();
    char sentence[100];
    char largest[100];
    int largest_len=0;
    while(n--){
        cin.getline(sentence,100);
        int len=strlen(sentence);
        if(len>largest_len){
            largest_len-len;
            strcpy(largest,sentence);
        }
    }
    cout<<"largest sentence is "<<largest;
}
