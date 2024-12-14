#include "graph.h"

int main() {
    int n;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> n;

    Graph graph(n);

    cout << "\nSilakan masukan nama simpul:\n";
    for (int i = 0; i < n; ++i) {
        string name;
        cout << "Simpul " << i + 1 << ": ";
        cin >> name;
        graph.addNode(name);
    }

    cout << "\nSilakan masukkan bobot antar simpul:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int weight;
            cout << graph.getNodeName(i) << "--> " << graph.getNodeName(j) << " = ";
            cin >> weight;
            graph.addEdge(i, j, weight);
        }
    }

    graph.displayMatrix();

    return 0;
}
