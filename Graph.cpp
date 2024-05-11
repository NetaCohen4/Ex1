/*
    325195774
    netaco432@gmail.com
*/

#include <iostream>
#include "Graph.hpp"

// Constructor
Graph::Graph(int numVertices, bool directed, bool weighted) : n(numVertices), isDirected(directed), isWeighted(weighted) {
    // Allocate memory for arcs
    arcs = new bool*[n];
    for (int i = 0; i < n; ++i) {
        arcs[i] = new bool[n];
        for (int j = 0; j < n; ++j) {
            arcs[i][j] = false; // Initialize all arcs to false
        }
    }

    // Allocate memory for edge weights if weighted graph
    if (isWeighted) {
        e_weight = new int*[n];
        for (int i = 0; i < n; ++i) {
            e_weight[i] = new int[n];
            for (int j = 0; j < n; ++j) {
                e_weight[i][j] = 0; // Initialize all edge weights to 0
            }
        }
    }
}

// Destructor
Graph::~Graph() {
    // Deallocate memory for arcs
    for (int i = 0; i < n; ++i) {
        delete[] arcs[i];
    }
    delete[] arcs;

    // Deallocate memory for edge weights if weighted graph
    if (isWeighted) {
        for (int i = 0; i < n; ++i) {
            delete[] e_weight[i];
        }
        delete[] e_weight;
    }
}

// Function to load graph data from file
void Graph::loadGraph() {
    // Implement loading graph data from file here
    std::cout << "Loading graph data...\n";
}

// Function to print the graph
void Graph::printGraph() {
    // Implement printing the graph here
    std::cout << "Printing graph...\n";
}
