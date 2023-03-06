#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    char arr[100]="apple";
    char arr1[100];
    cout<<"size of arr is "<<strlen(arr)<<endl;

    //copy elemnts in one array to another
    strcpy(arr1,arr);
    cout<<"copyed arr1 is"<<arr1<<endl;
    char arr2[100]=" is red";
    
    //concat 2 strings
    strcat(arr,arr2);
    cout<<"concated string is"<<arr<<endl;

    //compare 2 strings return 0 if same else not same

    cout<<"string comprasion"<<strcmp(arr,arr2)<<endl;
}