#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void insert(int i,int j ,bool undir=false){
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

    void topoligical_sort(){
        vector <int> indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto j :l[i]){
                indegree[j]++;
            }
        }

        queue <int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node=q.front();
            cout<<node<<endl;
            q.pop();
            for(auto i:l[node]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
    }

};

int main(){
    Graph g(6);
    g.insert(0,2);
    g.insert(2,3);
    g.insert(3,5);
    g.insert(4,5);
    g.insert(1,4);
    g.insert(1,2);
    //g.print();
    g.topoligical_sort();
}