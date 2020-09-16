#include "Vertice.h"
#include <utility>
#include <string>

using namespace std;

class Vertice{
private:
    pair<double, double> coordinates;
public:
    Vertice(const Vertice &vertice);
    Vertice(const string &coordinates);
    Vertice(const pair<double, double> &coordinates);
    Vertice(double X, double Y);

    ~Vertice();

    pair<double, double> getCoordinates();
    double getX();
    double getY();

    double getDistanceTo(const Vertice &vertice);
};