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
    void addEdge(Vertex &A, Vertex &B);
    void removeVertex(const Vertex &vertex);
    void removeEdge(const Vertex &A, const Vertex &B);

    vector<Vertex> getNeighborhood(const Vertex &vertex);
    vector<Vertex> getVertices();

    double getDistance(const Vertex &A, const Vertex &B);
    
    bool isNeighbor(const Vertex &A, const Vertex &B);
    bool hasVertex(const Vertex &vertex);
    bool hasEdge(const Vertex &A, const Vertex &B);

    
};
