#include<bits/stdc++.h>
using namespace std ;

class Graph{
    int V;
    list<int> *adj ;
    public:
    Graph(int V);
    void addEdge(int v,int w);
    void BFS(int s);

};

Graph::Graph(int V){
    this->V=V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v,int w){
    adj[v].push_back(w);
}

void Graph::BFS(int s){
    
}