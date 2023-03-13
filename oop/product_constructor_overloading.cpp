#include <iostream>
#include <cstring>
using namespace std;

class Product{
    int id;
    char name[100];
    int mrp;
    int selling_price;
public:
    Product(){
        cout<<"inside constructor"<<endl;
    }
    Product(int id,char *a,int mrp ,int s_p){
        this->id=id;
        this->mrp=mrp;
        this->selling_price=s_p;
        strcpy(name,a);
    }
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
    Product camera(101,"canon",28000,26000);
    // camera.setMrp(100);
    // camera.setSellingPrice(200);
    cout<<camera.getMrp()<<endl;
    cout<<camera.getSellingPrice()<<endl;
}