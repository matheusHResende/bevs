#include "Vertex.h"
#include <cstdlib>
#include <cmath>

Vertex::Vertex(const Vertex& vertex){
    this->coordinates = vertex.coordinates;
}

Vertex::Vertex(const string& coordinates){
    string X, Y;
    long unsigned int space = coordinates.find(" ");
    X = coordinates.substr(0, space);
    Y = coordinates.substr(space+1, coordinates.size());

    this->coordinates = pair<double, double>(stod(X), stod(Y));
}

Vertex::Vertex(const pair<double, double>& coordinates) {
    this->coordinates = pair<double, double>(coordinates);
}

Vertex::Vertex(double X, double Y) {
    this->coordinates = pair<double, double>(X, Y);
}

pair<double, double> Vertex::getCoordinates(){
    return this->coordinates;
}

double Vertex::getX(){
    return coordinates.first;
}

double Vertex::getY(){
    return coordinates.second;
}

double Vertex::getDistanceTo(Vertex& vertex){
    return sqrt(pow(this->getX() - vertex.getX(), 2) + pow(this->getY() - vertex.getY(), 2));
}

Vertex::~Vertex(){
}