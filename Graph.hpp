/*
    325195774
    netaco432@gmail.com
    System programming Exercise 1
*/


class Graph {
private:
    int n; // n is number of vertices in the graph
    bool **arcs; // n*n
    int **e_weight; // in use only if the graph is weighted
    bool isDirected;
    bool isWeighted;

public:
    // Constructor
    Graph(int numVertices, bool directed = false, bool weighted = false);

    // Destructor
    ~Graph();

    int get_n();

    // Function to load graph data from file
    void loadGraph();

    // Function to print the graph
    void printGraph();
};
