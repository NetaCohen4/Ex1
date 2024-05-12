/*
    325195774
    netaco432@gmail.com
    System programming Exercise 1
*/

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:

    vector<vector<int>> graph;


public:
    // Constructor
    Graph(){}

    // Destructor
    ~Graph(){}

    int getSize() {return graph.size();}

    // Function to load graph data from file
    void loadGraph(std::vector<std::vector<int>> data) {graph = data;}

    // Function to print the graph
    void printGraph(){
        for (size_t i = 0; i < graph.size(); ++i) {
            std::cout << "Vertex " << i << " is connected to: ";
            for (int v : graph[i]) {
                std::cout << v << " ";
            }
            std::cout << std::endl;
        }
    }
};

#endif // GRAPH_HPP