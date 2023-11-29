#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


#define int_pair pair<int,int>

class Graph {
private:
    vector<pair<int, int_pair>> G; // graph
    vector<pair<int, int_pair>> T; // mst
    int* parent;
    int V; // number of vertices/nodes in graph
public:

    /*Graph(int V);
    void AddWeightedPath(int u, int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal();
    void print();*/



    Graph(int V) {
        parent = new int[V];
        for (int i = 0; i < V; i++)
            parent[i] = i;
        G.clear();
        T.clear();
    }


    void AddWeightedPath(int u, int v, int w) {
        G.push_back(make_pair(w, int_pair(u, v)));
    }


    int find_set(int i) {
        if (i == parent[i])
            return i;
        else
            return find_set(parent[i]);
    }

    void union_set(int u, int v) {
        parent[u] = parent[v];
    }

    void kruskal() {
        int i, uRep, vRep;
        sort(G.begin(), G.end());
        for (i = 0; i < G.size(); i++) {
            uRep = find_set(G[i].second.first);
            vRep = find_set(G[i].second.second);
            if (uRep != vRep) {
                T.push_back(G[i]); // add to tree
                union_set(uRep, vRep);
            }
        }
    }

    void print_graphs() {
        cout << "\n\ngraph_struct:\n";
        for (int i = 0; i < T.size(); i++) {
            cout << "\t" << i;
        }
        for (int i = 0; i < T.size(); i++) {
            pair<int, int_pair> kl = G[i];
            for (int j = 0; j < T.size(); j++) {
                
            }
        }
    }

    void print() {
        cout << "Path :" << " Weight" << endl;
        for (int i = 0; i < T.size(); i++) {
            cout << T[i].second.first << " - " << T[i].second.second << " : "
                << T[i].first;
            cout << endl;
        }
    }
};