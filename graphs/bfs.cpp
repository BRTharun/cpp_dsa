#include <iostream>
#include <list>
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

    void bfs(int source){
        queue <int > q;
        bool *visited = new bool[V]{0};
        q.push(source);
        visited[source]=true;
        while (!q.empty())
        {
            int f= q.front();
            cout<<f<<endl;
            q.pop();
            for (auto nbr:l[f]){
                if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;}
            }
        }
    }
    void helper(int node,bool *visited){
        visited[node]=true;
        cout<<node<<endl;
        for(auto nbr:l[node]){
            if(!visited[nbr]){
                helper(nbr,visited);
            }
        }
        return;
    }
    void dfs(int source){
        bool *visited= new bool[V]{0};
        helper(source,visited);
    }

    

};

int main(){
    Graph g(7);
    g.insert(0,1);
    g.insert(1,2);
    g.insert(2,3);
    g.insert(3,5);
    g.insert(3,4);
    g.insert(4,5);
    g.insert(5,6);
    g.insert(0,4);
    g.dfs(1);

}