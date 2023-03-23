#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void insert(int i,int j ,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void print(){
        for(int i=0;i<V;i++){
            cout<<"-->"<<i<<" ";
            for(auto j :l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Graph g(10);
    g.insert(0,1);
    g.insert(1,2);
    g.insert(3,1);
    g.insert(8,2);
    g.insert(3,5);
    g.insert(3,7);
    g.insert(4,2);
    g.insert(5,9);
    g.insert(6,1);
    g.print();

}