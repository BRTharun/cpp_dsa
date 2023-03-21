#include "trie.h"
#include<iostream>
using namespace std;

int main(){
    Trie t;
    string words []={"apple","ape","hello","hi"};
    for(string word:words){
        t.insert(word);
    }
    string key;
    cin>>key;
    cout<<t.seach(key)<<endl;

}