#include "graph.h"

int main() {
    Graph G;
    CreateGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');
    InsertNode(G, 'E');
    InsertNode(G, 'F');
    InsertNode(G, 'G');
    InsertNode(G, 'H');

    adrNode A = G.first;
    adrNode B = A->Next;
    adrNode C = B->Next;
    adrNode D = C->Next;
    adrNode E = D->Next;
    adrNode F = E->Next;
    adrNode G_node = F->Next;
    adrNode H = G_node->Next;

    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);
    ConnectNode(C, E);
    ConnectNode(D, F);
    ConnectNode(E, G_node);
    ConnectNode(F, H);

    PrintInfoGraph(G);

    adrNode currentNode = G.first;
    while (currentNode != nullptr) {
        currentNode->visited = 0;
        currentNode = currentNode->Next;
    }

    PrintDFS(G, A);

    currentNode = G.first;
    while (currentNode != nullptr) {
        currentNode->visited = 0;
        currentNode = currentNode->Next;
    }
    PrintBFS(G, A);

    return 0;
}
