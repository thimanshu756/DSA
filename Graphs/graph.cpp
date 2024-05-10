#include <iostream>
#include<unordered_map>
#include<queue>
#include<list>

using namespace std;

class Graph{

    public:
    unordered_map<int, list<pair<int,int> > > adjList;
    void addEdge(int u, int v, int weight, bool direction){
        //direction = 0 -> undirected
        //direction = 1 -> directed
        // create a edge from u to v
        adjList[u].push_back({v,weight});
        if(direction==0){
            // undirected edge 
            // create an edge from v to u
            adjList[v].push_back({u,weight});
        }
    }
    void printAdjecencyList(){
        for (auto nodee: adjList){
            cout<<nodee.first<<"->";
            for(auto neighbour: nodee.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<")";
            }
            cout<<endl;
        }
    }
};

int main(){

    Graph g;
    
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,4,1);
    g.addEdge(2,1,5,1);
cout<<endl;
    g.printAdjecencyList();

    return 0;
}