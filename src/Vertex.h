#include <utility>
#include <string>

#pragma once

using namespace std;

class Vertex {
private:
    static long unsigned int actualId;
    pair<double, double> coordinates;
public:
    long unsigned int id;

    Vertex(const Vertex& vertice);
    Vertex(const string& coordinates);
    Vertex(const pair<double, double>& coordinates);
    Vertex(double X, double Y);

    ~Vertex();

    pair<double, double> getCoordinates();
    double getX();
    double getY();

    double getDistanceTo(Vertex& vertex);

    bool equals(const Vertex &vertex);

    bool operator <(const Vertex& vertex) const{
        return this->id < vertex.id;
    }

    long unsigned int getId();
};