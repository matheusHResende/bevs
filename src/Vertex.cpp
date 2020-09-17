#include "Vertex.h"
#include <cstdlib>
#include <cmath>

long unsigned int Vertex::actualId = 0;

Vertex::Vertex(const Vertex& vertex){
    this->coordinates = vertex.coordinates;
    this->actualId++;
    this->id = actualId;
}

Vertex::Vertex(const string& coordinates){
    string X, Y;
    long unsigned int space = coordinates.find(" ");
    X = coordinates.substr(0, space);
    Y = coordinates.substr(space+1, coordinates.size());

    this->coordinates = pair<double, double>(stod(X), stod(Y));
    this->actualId++;
    this->id = actualId;
}

Vertex::Vertex(const pair<double, double>& coordinates) {
    this->coordinates = pair<double, double>(coordinates);
    this->actualId++;
    this->id = actualId;
}

Vertex::Vertex(double X, double Y) {
    this->coordinates = pair<double, double>(X, Y);
    this->actualId++;
    this->id = actualId;
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

bool Vertex::equals(const Vertex &vertex){
    return (this->coordinates.first == vertex.coordinates.first) && (this->coordinates.second == vertex.coordinates.second);
}

long unsigned int Vertex::getId(){
    return this->id;
}