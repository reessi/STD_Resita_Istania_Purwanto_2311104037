#include "graph.h"

Graph::Graph(int n) {
    adjMatrix.resize(n, vector<int>(n, 0)); 
}

void Graph::addNode(const string &name) {
    nodes.push_back(name); 
}

void Graph::addEdge(int from, int to, int weight) {
    adjMatrix[from][to] = weight; 
}

string Graph::getNodeName(int index) const {
    return nodes[index]; 
}

void Graph::displayMatrix() const {
    cout << "\nAdjacency Matrix:\n";
    cout << "     ";
    for (const auto &node : nodes) {
        cout << setw(8) << node;
    }
    cout << endl;

    for (size_t i = 0; i < nodes.size(); ++i) {
        cout << setw(8) << nodes[i];
        for (size_t j = 0; j < nodes.size(); ++j) {
            cout << setw(8) << adjMatrix[i][j];
        }
        cout << endl;
    }
}

