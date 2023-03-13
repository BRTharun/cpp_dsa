#include <iostream>
using namespace std;

class Product{
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    void setMrp(int price){
        if(price>0){
        mrp=price;
        }
    }
    void setSellingPrice(int price){
        if(mrp<price){
            selling_price=mrp;
        }
        else{
            selling_price=price;
        }
    }
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
};

int main(){
    Product camera;
    camera.setMrp(100);
    camera.setSellingPrice(200);
    cout<<camera.getMrp()<<endl;
    cout<<camera.getSellingPrice()<<endl;
}