/*
    325195774
    netaco432@gmail.com
*/

#include <iostream>
#include "Graph.hpp"
#include "Algorithms.hpp"

namespace Algorithms {
    
    bool isConnected(Graph g) { // האלגוריתם מקבל גרף ומחזיר 1 אם הגרף קשיר (אחרת מחזיר 0).

    }
    // Function to check if the graph is connected
        bool isConnected(Graph g) {
            if (n <= 1) // A graph with 0 or 1 vertices is considered connected
                return true;

            // Mark all the vertices as not visited
            bool *visited = new bool[n];
            for (int i = 0; i < n; i++)
                visited[i] = false;

            // Find a vertex with non-zero degree (if any)
            int v;
            for (v = 0; v < n; v++) {
                if (arcs[v][0])
                    break;
            }

            // If there are no edges in the graph, it's considered connected
            if (v == n)
                return true;

            // Start DFS traversal from the first non-zero degree vertex
            DFSUtil(v, visited);

            // Check if all non-zero degree vertices are visited
            for (int i = 0; i < n; i++) {
                if (!arcs[i][0]) // Skip vertices with zero degree
                    continue;
                if (visited[i] == false) {
                    delete[] visited;
                    return false; // If any non-zero degree vertex is not visited, graph is not connected
                }
            }
            delete[] visited;
            return true; // If all non-zero degree vertices are visited, graph is connected
        }

    bool shortestPath(Graph g, int start, int end) { // האלגוריתם מקבל גרף, קודקוד התחלה וקודקוד סיום ומחזיר את המסלול הקל ביותר (במקרה שהגרף לא ממושקל - הקצר ביותר) בין שני הקודקודים. במידה ואין מסלול כזה, האלגוריתם יחזיר -1.

    }

    bool isContainsCycle(Graph g) { // האלגוריתם מקבל גרף ומדפיס מעגל כלשהו. אם לא קיים מעגל בגרף, האלגוריתם יחזיר 0.

    }

    bool isBipartite(Graph g) { // האלגוריתם מקבל גרף ומחזיר את החלוקה של הגרף לגרף דו-צדדי. אם אי אפשר לחלק את הגרף, האלגוריתם יחזיר 0.

    }

    bool negativeCycle(Graph g) { // האלגוריתם מקבל גרף ומוצא מעגל שלילי (כלומר מעגל שסכום המשקלים של הצלעות שלילי). אם לא קיים מעגל כזה, האלגוריתם ידפיס שלא קיים מעגל שלילי.

    }

}