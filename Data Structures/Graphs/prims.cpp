#include<iostream>
using namespace std;
#define V 5

int minkey(int key[],bool mstset[]){
    int min=INT8_MAX;
    int minindex;
    for(int i = 0 ; i < V;i++){
        if(key[i]<min){
            min=key[i];
            minindex=i;
        }

    }
    return minindex;
}


void MST(int graph[V][V]){
    int parent[V];
    int key[V];
    bool memset[V];
    for(int i=0;i<V;i++){
        key[i]=INT8_MAX;
        memset[i]=false;

    }
    key[0]=0;
    parent[0]=0;
    for(int i=0;i<(V-1);i++){
        int u = minkey(key,memset);
        memset[u]=true;
        for(int j = 0 ; j < V ;j++){
            if(graph[u][i] && memset[i]==)
        }
    }

}