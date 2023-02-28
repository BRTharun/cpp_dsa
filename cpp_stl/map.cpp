#include <iostream>
#include <map>
using namespace std;

int main(){
    //initalization of map
    map <int,string> m;

    //inserting into map
    m[1]="tarun";
    m[2]="kumar";
    m[3]="br";
    
    //inserting into map (2nd way)
    m.insert({4,"thanks"});

    //printing map before erase
    cout<<"printing map before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    };

    //erase map
    m.erase(4);

    //printing map after erase
    cout<<"printing map after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    };

    
    //findig positio of element
    auto p=m.find(2);

    cout<<"printing values after 2"<<endl;

    for(auto i=p ;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}