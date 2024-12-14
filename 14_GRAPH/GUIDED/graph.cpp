#include "graph.h"

void CreateGraph(Graph &G) {
    G.first = nullptr;
}

void InsertNode(Graph &G, infoGraph X) {
    adrNode newNode = new ElmNode;
    newNode->info = X;
    newNode->visited = 0;
    newNode->firstEdge = nullptr;
    newNode->Next = G.first;
    G.first = newNode;
}

void ConnectNode(adrNode N1, adrNode N2) {
    // Menambahkan edge dari N1 ke N2
    adrEdge newEdge = new ElmEdge;
    newEdge->Node = N2;
    newEdge->Next = N1->firstEdge;
    N1->firstEdge = newEdge;

    newEdge = new ElmEdge;
    newEdge->Node = N1;
    newEdge->Next = N2->firstEdge;
    N2->firstEdge = newEdge;
}

void PrintInfoGraph(Graph G) {
    adrNode currentNode = G.first;
    while (currentNode != nullptr) {
        cout << "Node: " << currentNode->info << " -> ";
        adrEdge currentEdge = currentNode->firstEdge;
        while (currentEdge != nullptr) {
            cout << currentEdge->Node->info << " ";
            currentEdge = currentEdge->Next;
        }
        cout << endl;
        currentNode = currentNode->Next;
    }
}

void PrintDFS(Graph G, adrNode N) {
    stack<adrNode> s;
    N->visited = 1;
    s.push(N);
    cout << "DFS starting from " << N->info << ": ";
    
    while (!s.empty()) {
        adrNode currentNode = s.top();
        s.pop();
        cout << currentNode->info << " ";
        
        adrEdge currentEdge = currentNode->firstEdge;
        while (currentEdge != nullptr) {
            if (currentEdge->Node->visited == 0) {
                currentEdge->Node->visited = 1;
                s.push(currentEdge->Node);
            }
            currentEdge = currentEdge->Next;
        }
    }
    cout << endl;
}

void PrintBFS(Graph G, adrNode N) {
    queue<adrNode> q;
    N->visited = 1;
    q.push(N);
    cout << "BFS starting from " << N->info << ": ";

    while (!q.empty()) {
        adrNode currentNode = q.front();
        q.pop();
        cout << currentNode->info << " ";
        
        adrEdge currentEdge = currentNode->firstEdge;
        while (currentEdge != nullptr) {
            if (currentEdge->Node->visited == 0) {
                currentEdge->Node->visited = 1;
                q.push(currentEdge->Node);
            }
            currentEdge = currentEdge->Next;
        }
    }
    cout << endl;
}
