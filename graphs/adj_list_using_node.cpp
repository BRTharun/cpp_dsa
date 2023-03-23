#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
using namespace std;

class Node{
public:
    string Name;
    list<string> nbrs;
    Node(string Name){
        Name=Name;
    }
};

class Graph{
    unordered_map<string,Node*> m;
public:
    Graph(vector<string> cities){
        for(auto city:cities){
            m[city]= new Node(city);
        }
    }
    void addEdge(string i ,string j , bool undir=false){
        m[i]->nbrs.push_back(j);
        if(undir){
            m[j]->nbrs.push_back(i);
        }
    }
    void print(){
        for(auto cityPair: m){
            string city=cityPair.first;
            Node * temp=cityPair.second;
            cout<<city<<" -->";
            for(auto nbr:temp->nbrs){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    vector<string> citys={"hyd","delhi","mumbai","chennai"};
    Graph g(citys);
    g.addEdge("delhi","hyd");
    g.addEdge("hyd","mumbai");
    g.addEdge("mumbai","hyd");
    g.addEdge("chennai","delhi");
    g.print();
}