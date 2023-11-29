#include "Graph_class.h"


int main() {
    /*int count_;
    cout << "Enter count of graphs: ";
    cin >> count_;
    Graph graph(count_);
    int w(0);
    cout << endl << "Enter path like: [first_vertex] [second_vertex] [path_weight]\nIf u want to stop enter paths, enter weight <0\n";
    while (w >= 0)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph.AddWeightedPath(u, v, w);
    }*/
    Graph graph(6);
    graph.AddWeightedPath(0, 1, 4);
    graph.AddWeightedPath(0, 2, 4);
    graph.AddWeightedPath(1, 2, 2);
    graph.AddWeightedPath(1, 0, 4);
    graph.AddWeightedPath(2, 0, 4);
    graph.AddWeightedPath(2, 1, 2);
    graph.AddWeightedPath(2, 3, 3);
    graph.AddWeightedPath(2, 5, 2);
    graph.AddWeightedPath(2, 4, 4);
    graph.AddWeightedPath(3, 2, 3);
    graph.AddWeightedPath(3, 4, 3);
    graph.AddWeightedPath(4, 2, 4);
    graph.AddWeightedPath(4, 3, 3);
    graph.AddWeightedPath(5, 2, 2);
    graph.AddWeightedPath(5, 4, 3);
    graph.kruskal();
    graph.print();

}