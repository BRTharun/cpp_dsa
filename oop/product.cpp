#include <iostream>
using namespace std;

class Product{
    int id;
    char name[100];
public:
    int mrp;
    int selling_price;
};

int main(){
    Product camera;
    camera.mrp=100;
    camera.selling_price=200;
    cout<<camera.mrp<<endl;
    cout<<camera.selling_price<<endl;
}