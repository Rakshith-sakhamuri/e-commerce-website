//#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

class Graph{
    public:
    map <int,bool> visited;
    map<int,list<int>> adj ;

    void addEdge(int v , int w);
    void DFS(int v);
};

void Graph::addEdge(int v , int w){
    adj[v].push_back(w);
}

void Graph::DFS(int v){
    visited[v]=true;
    cout << v << "->" ;
    list<int>::iterator i;
    for( int  i = adj[v].begin() ; i!=adj[v].end() ; i++ ){
        if(!visited[*i]){
            DFS(*i);
        }
    }
   // for(i = )
}