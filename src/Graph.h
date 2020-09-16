#include "Vertex.h"
#include <map>
#include <vector>
#include <string>

#pragma once

using namespace std;

class Graph {
private:
    vector<Vertex> vertices;
    map<Vertex, map<Vertex, double>> graph;
public:
    Graph();
    Graph(const string &file);
    Graph(const Graph &graph);
    ~Graph(); //Buiild a file

    void addVertex(const Vertex &vertex);
    void addEdge(const Vertex &A, const Vertex &B);
};
