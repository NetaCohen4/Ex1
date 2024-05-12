/*
    325195774
    netaco432@gmail.com
*/

#include <iostream>
#include "Graph.hpp"
#include "Algorithms.hpp"

namespace Algorithms {
    
    

    // Function to check if the graph is connected
    bool isConnected(Graph g) {
        int numVertices = g.getSize();
        if (numVertices < 2) {
            return true;
        }
        std::vector<bool> visited(numVertices, false);
        g.bfs(visited, 0);
        // If any vertex remains unvisited, graph is not connected
        for (bool v : visited) {
            if (!v) {
                return false;
            }
        }
        // For directed graph, we should make another bfs
        visited.assign(numVertices, false);
        g.bfs(visited, 1);
        for (bool v : visited) {
            if (!v) {
                return false;
            }
        }
        return true;
    }

    bool shortestPath(Graph g, int start, int end) {

    }

    bool shortestPath(const vector<vector<int>>& g, int start, int end) {
        int n = g.size();
        vector<int> dist(n, numeric_limits<int>::max()); // Initialize distances to infinity
        dist[start] = 0; // Distance from start to itself is 0

        // Priority queue to store vertices and their distances
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start}); // Push the start vertex with distance 0

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            // Visit all neighbors of u
            for (int v = 0; v < n; ++v) {
                if (g[u][v] != 0) { // If there's an edge from u to v
                    // Relaxation step
                    if (dist[v] > dist[u] + g[u][v]) {
                        dist[v] = dist[u] + g[u][v];
                        pq.push({dist[v], v}); // Add v to priority queue with updated distance
                    }
                }
            }
        }

        // If the distance to the end vertex is still infinity, there's no path
        if (dist[end] == numeric_limits<int>::max()) {
            cout << "No path from " << start << " to " << end << " exists." << endl;
            return false;
        }

        cout << "Shortest distance from " << start << " to " << end << ": " << dist[end] << endl;
        return true;
    }

    bool isContainsCycle(Graph g) { // האלגוריתם מקבל גרף ומדפיס מעגל כלשהו. אם לא קיים מעגל בגרף, האלגוריתם יחזיר 0.

    }

    bool isCycleUtil(int node, vector<vector<int>>& graph, vector<bool>& visited, int parent) {
        visited[node] = true;

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                if (isCycleUtil(neighbor, graph, visited, node))
                    return true;
            } else if (neighbor != parent) {
                return true;
            }
        }

        return false;
    }

    bool isContainsCycle(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                if (isCycleUtil(i, graph, visited, -1))
                    return true;
            }
        }

        return false;
    }

    bool isBipartite(Graph g) { // האלגוריתם מקבל גרף ומחזיר את החלוקה של הגרף לגרף דו-צדדי. אם אי אפשר לחלק את הגרף, האלגוריתם יחזיר 0.

    }

    bool negativeCycle(Graph g) { // האלגוריתם מקבל גרף ומוצא מעגל שלילי (כלומר מעגל שסכום המשקלים של הצלעות שלילי). אם לא קיים מעגל כזה, האלגוריתם ידפיס שלא קיים מעגל שלילי.

    }

}