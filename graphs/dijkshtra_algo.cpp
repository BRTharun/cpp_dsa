#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <climits>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *l;
public:
    Graph(int V){
        this->V=V;
        l = new list<pair<int,int>>[V];
    }
    void insert(int i,int j ,int wt,bool undir=true){
        l[i].push_back({wt,j});
        if(undir){
            l[j].push_back({wt,i});
        }
    }
    int dijikshtra(int src,int dest){
        vector <int> dist(V,INT_MAX);
        set<pair<int,int>> s;
        dist[src]=0;
        s.insert({0,src});
        while(!s.empty()){
            auto it=s.begin();
            int node =it->second;
            int distTillNow =it->first;
            s.erase(it);
            for (auto nbrPair :l[node]){
                int nbr=nbrPair.second;
                int currentEdge=nbrPair.first;
                if((distTillNow+currentEdge )< dist[nbr]){
                    auto f=s.find({dist[nbr],nbr});
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[nbr]=distTillNow+currentEdge;
                    s.insert({dist[nbr],nbr});
                }
            }
        }
        return dist[dest];
    }

};

int main(){
    Graph g(5);
    g.insert(0,1,1);
    g.insert(1,2,1);
    g.insert(0,2,4);
    g.insert(0,3,7);
    g.insert(3,2,2);
    g.insert(3,4,3);
    cout<<g.dijikshtra(0,4)<<endl;

}