#include <iostream>
#include "stack_vetor.h"
using namespace std;

int main(){
    Stack <char> s;
    s.push('s');
    s.push('e');
    s.push('t');
    s.push('o');
    s.push('p');

    while (!s.empty())
    {
        /* code */
        cout<<s.top();
        s.pop();
    }
    
}