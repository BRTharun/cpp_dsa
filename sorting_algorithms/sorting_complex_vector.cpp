#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int calcTotal(vector<int> m){
    return m[0]+m[1]+m[2];
};

bool compare(pair<string,vector<int>> s1, pair<string,vector<int>> s2){

    vector<int> m1 =s1.second;
    vector<int> m2= s2.second;
    return calcTotal(m1)>calcTotal(m2);
};

int main(){
    vector<pair<string,vector<int>>> student_marks={
        {"karthik",{13,17,19}},
        {"rahul",{12,16,19}},
        {"naresh",{19,17,18}}
    };
    sort(student_marks.begin(),student_marks.end(),compare);
    for(auto i:student_marks){
        cout<<i.first<<" "<<calcTotal(i.second)<<endl;
    };
}