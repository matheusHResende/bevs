#include <utility>
#include <string>

#pragma once

using namespace std;

class Vertex {
private:
    pair<double, double> coordinates;
public:
    Vertex(const Vertex& vertice);
    Vertex(const string& coordinates);
    Vertex(const pair<double, double>& coordinates);
    Vertex(double X, double Y);

    ~Vertex();

    pair<double, double> getCoordinates();
    double getX();
    double getY();

    double getDistanceTo(Vertex& vertex);
};

