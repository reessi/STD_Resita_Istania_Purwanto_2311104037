#include "graph.h"

int main() {
    int vertices, edges;
    cout << "Masukkan jumlah simpul: ";
    cin >> vertices;
    cout << "Masukkan jumlah sisi: ";
    cin >> edges;

    Graph graph(vertices);

    cout << "Masukkan pasangan simpul:\n";
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u - 1, v - 1); // Mengubah input 1-based menjadi 0-based
    }

    graph.displayMatrix();

    return 0;
}
