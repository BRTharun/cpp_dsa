#include <iostream>
#include <vector>
using namespace std;

int main(){
    char c;
    char temp =cin.get();
    int digits =0;
    int spaces =0;
    int alphas=0;
    while(temp!='\n'){
        if((temp>='0') and (temp<='9')){
            digits++;
        }
        else if(((temp>='a')and (temp<='z')) or ((temp>='A') and (temp<='Z'))){
            alphas++;
        }
        else if((temp =='\t' )or (temp ==' ')){
            spaces++;
        }
        temp =cin.get();
    }
    cout<<"no of digits are-> "<<digits<<endl;
    cout<<"no of alphas are-> "<<alphas<<endl;
    cout<<"no of spaces are-> "<<spaces<<endl;

}