#include "graph.h"

Graph::Graph(int vertices) {
    numVertices = vertices;
    adjMatrix.resize(vertices, vector<int>(vertices, 0));
}

void Graph::addEdge(int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

void Graph::displayMatrix() const {
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
