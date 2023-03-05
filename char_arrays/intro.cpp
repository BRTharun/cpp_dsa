#include <iostream>
#include<cstring>
#include <vector>
using namespace std;

// int main(){
//     char arr[] ={'a','b','\0'};
//     cout<<arr<<endl;
//     cout<<sizeof(arr)<<endl;
//     cout<<strlen(arr)<<endl;
    
//     //vector initilization
//     string myarr ("dfdsajf");
//     vector <char> vec (myarr.begin(),myarr.end());
//     cout<<sizeof(vec)<<endl;
//     cout<<vec.size()<<endl;

//     for(char i:vec){
//         cout<<i<<" ";
//     };

    
// }

//printing input string with spaces
// int main(){
//     string ch;
//     cout<<"enter string"<<endl;
//     cin>>ch;
//     vector<char> vec(ch.begin(),ch.end());
//         for(char i:vec){
//         cout<<i;
//     };

// }


//printing temp as it is without storing to vector
// int main(){



// char sentence [1000];
// char temp = cin.get();
// int len = 1; 
// while(temp!= '#')
// { 
//     len++; 
//     cout << temp;
//     temp = cin.get();
// }
// cout<<"Length "<<len <<endl;
// }

int main(){

vector<char> vch(100);
char temp = cin.get();
int len = 0; 
while(temp!= '#')
{ 
    vch[len++]=temp;
    temp = cin.get();
}

//required if we use array optional for vector 
// vch[len]='\0';
cout<<"Length "<<len <<endl;

//use if you use vector for printing
for(char i:vch){
    cout<<i;
}

//use if you use array for printing
// cout<<vch<<endl;

}