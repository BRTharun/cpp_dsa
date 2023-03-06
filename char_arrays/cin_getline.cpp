#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string line;
    getline(cin,line);
    vector<string> lines(0);
    lines.push_back(line);
    //cout << line;
    for (string l : lines) {
        cout << l << endl;
    }
    return 0;
}