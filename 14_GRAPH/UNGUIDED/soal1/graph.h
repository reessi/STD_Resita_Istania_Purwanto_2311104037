#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Graph {
private:
    vector<string> nodes;              
    vector<vector<int>> adjMatrix;     
public:
    Graph(int n);
    void addNode(const string &name);
    void addEdge(int from, int to, int weight);
    string getNodeName(int index) const;
    void displayMatrix() const;
};

#endif
