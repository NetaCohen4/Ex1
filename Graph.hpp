/*
    325195774
    netaco432@gmail.com
*/


#include <iostream>
using namespace std;

class Graph {
    int n; // n is number of vertices in the graph
    bool **arcs; // n*n
    int **e_weight; // in use only if the graph is weighted
    bool isDirected;
    bool isWeighted;


    void loadGraph(){};
    void printGraph(){};
};