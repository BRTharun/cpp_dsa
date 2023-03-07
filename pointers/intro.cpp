#include <iostream>
#include <vector>
using namespace std;

int tax(int income){
    float tax=0.10;
    income=income-income*tax;
}

int tax1(float &income1){
    float tax=0.10;
    income1=income1-income1*tax;
}

void view(int *views){
    
    //here views gives address of variable to acess value we dereference it by using *

    *views+=1;
}

int main(){
    //creating of pointer

    int a =10;

    //printing address of variable 
    cout<<&a<<endl;

    
    //pointer initilization
    int *a1=&a;
    cout<<a1<<endl;

    //printing address of pointer
    cout<<&a1<<endl;

    //pointer to pointer
    int **a11=&a1;
    cout<<a11<<endl;

    //call by value
    int income =100;
    tax(income);
    cout<<income<<endl;

    //call by reference
    float income1=100;
    tax1(income1);
    cout<<income1<<endl;

    //pass by reference using pointers
    int views=100;
    view(&views);
    cout<<views<<endl;

    //dynamic memory allocation using pointers
    int * arr =new int[100];
    
    //assigning value to arr
    arr[0]=10;
    arr[1]=11;
    arr[2]=9;

    cout<<sizeof(arr)/sizeof(int)<<endl;

    //printing 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    int ar[] = {1, 2, 3, 4, 5};
  int *p = ar;  // pointer to the start of the array

  int len = sizeof(ar) / sizeof(ar[0]);
  std::cout << "Length of arr: " << len << std::endl;

  len = sizeof(p) / sizeof(p[0]);
  std::cout << "Length of p: " << len << std::endl;

  
}