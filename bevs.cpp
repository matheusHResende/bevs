#include <iostream>
#include <cstdlib>
#include "./src/Graph.h"
#include "./src/Vertex.h"

int main(){
    Vertex* vertex = new Vertex("0 5");
    Vertex* vertex2 = new Vertex(0, 1);
    cout << "Dist: " << vertex->getDistanceTo(*vertex2) << endl;
    system("pause");
}
