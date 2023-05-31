#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
   
    list<int>* adj;
    void toposortutil(int v,bool visited[],stack<int> Stack);
    public:
    Graph(int V);
    void addedge(int v,int w);
    list<int>* adj;
    void toposort();
};

Graph::Graph(int V){
    this->V=V;
    adj=new list<int>[V];
}

void Graph::addedge(int v,int w){
    adj[v].push_back(w);
}

void toposortutil(int v,bool visited[],stack<int> Stack){
    visited[v]=true;
    list<int>::iterator i;
    for(i=adj[v].begin(),i != adj[v].end(),++i){
        if(!visited[*i]){
            toposortutil(*i,visited,Stack);
        }
    }
    Stack.push(v);
}

void Graph::toposort(){
    stack<int> Stack;
    bool *visited = new bool[V];
    for(int i = 0 ; i < V ; i++){
        if(visited[i]==false){
            toposortutil(i,visited,Stack);
        }
    }
    while (Stack.empty())
    {
        /* code */
        cout<<" "<<Stack.top();
        Stack.pop();
    }
    
}

