#include <iostream>
#include <cstdlib>
#include "./src/Graph.h"
#include "./src/Vertex.h"

// Building Data Structures

int main(){
    Vertex* vertex = new Vertex("0 5");
    Vertex* vertex2 = new Vertex(0, 1);
    Vertex* vertex3 = new Vertex("0 5");
    Vertex* vertex4 = new Vertex(0, 1);
    cout << "Dist: " << vertex->getDistanceTo(*vertex2) << endl;
    cout << vertex->getId() << " ";
    cout << vertex2->getId() << " ";
    cout << vertex3->getId() << " ";
    cout << vertex4->getId() << " ";
    cout << endl;
    system("pause");
    return 0;
}
