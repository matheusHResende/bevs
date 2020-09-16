#include "Vertex.h"
#include <map>
#include <vector>
#include <string>

#pragma once

using namespace std;

class Grafo {
private:
    vector<Vertex> vertices;
    map<Vertex, map<Vertex, double>> grafo;
public:
    Grafo();
    Grafo(const string &file);
    Grafo(const Grafo &grafo);
    ~Grafo(); //Buiild a file

    void addVertex(cosnt Vertice &vertice);
    void addEdge(const Vertice &A, const Vertice &B);
};
