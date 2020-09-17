#include "Graph.h"
#include <fstream>

// Graph::Graph(){

// }

// Graph::Graph(const string &file){

// }

// Graph::Graph(const Graph &graph){
//     this->vertices = vector<Vertex>(graph.vertices);
//     this->graph = map<Vertex, map<Vertex, double>>(graph.graph);
// }

// void Graph::addVertex(const Vertex &vertex){
//     if (!this->hasVertex(vertex)){
//         this->vertices.push_back(vertex);
//     }
//     else{
//         //Throw exception;
//     }
    
// }

// void Graph::addEdge(Vertex &A, Vertex &B){
//     this->addVertex(A);
//     this->addVertex(B);

//     if(!this->hasEdge(A,B)){
//         double distance = A.getDistanceTo(B);
//         this->graph[A][B] = distance;
//         this->graph[B][A] = distance;
//     }
//     else{
//         //Throw exception;
//     }
// }

// void Graph::removeVertex(const Vertex &vertex){
//     vector<Vertex> neighbors = this->getNeighborhood(vertex);
//     for (auto& x : neighbors){
//         this->removeEdge(vertex, x);
//     }
//     this->graph.erase(vertex);
// }

// void Graph::removeEdge(const Vertex &A, const Vertex &B){
//     if(this->hasEdge(A,B)){
//         this->graph[A].erase(B);
//         this->graph[B].erase(A);
//     }
// }

// vector<Vertex> Graph::getNeighborhood(const Vertex &vertex){
//     vector<Vertex> neighbors;
//     for(auto& x : this->graph[vertex]){
//         neighbors.push_back(x.first);
//     }
//     return neighbors;
// }

// vector<Vertex> Graph::getVertices(){
//     return this->vertices;
// }

// double Graph::getDistance(const Vertex &A, const Vertex &B){
//     return this->graph.at(A).at(B);
// }

// bool Graph::isNeighbor(const Vertex &A, const Vertex &B){
//     return this->hasEdge(A,B);
// }

// bool Graph::hasVertex(const Vertex &vertex){
//     for (unsigned int i = 0; i < this->vertices.size(); i++){
//         if (this->vertices.at(i).equals(vertex)){        
//             return true;
//         }
//     }
//     return false;
// }

// bool Graph::hasEdge(const Vertex &A, const Vertex &B){
//     try{
//         this->graph.at(A).at(B);
//         this->graph.at(B).at(A);
//         return true;
//     }
//     catch(out_of_range &e){
//         return false;
//     }
// }