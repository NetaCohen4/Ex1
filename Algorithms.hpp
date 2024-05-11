/*
    325195774
    netaco432@gmail.com
*/
// algorithms.h
#ifndef ALGORITHMS_H
#define ALGORITHMS_H


#include <iostream>
#include "Graph.hpp"

namespace Algorithms {


    bool isConnected(Graph g); // האלגוריתם מקבל גרף ומחזיר 1 אם הגרף קשיר (אחרת מחזיר 0).

    bool shortestPath(Graph g, int start, int end); // האלגוריתם מקבל גרף, קודקוד התחלה וקודקוד סיום ומחזיר את המסלול הקל ביותר (במקרה שהגרף לא ממושקל - הקצר ביותר) בין שני הקודקודים. במידה ואין מסלול כזה, האלגוריתם יחזיר -1.

    bool isContainsCycle(Graph g); // האלגוריתם מקבל גרף ומדפיס מעגל כלשהו. אם לא קיים מעגל בגרף, האלגוריתם יחזיר 0.

    bool isBipartite(Graph g); // האלגוריתם מקבל גרף ומחזיר את החלוקה של הגרף לגרף דו-צדדי. אם אי אפשר לחלק את הגרף, האלגוריתם יחזיר 0.

    bool negativeCycle(Graph g); // האלגוריתם מקבל גרף ומוצא מעגל שלילי (כלומר מעגל שסכום המשקלים של הצלעות שלילי). אם לא קיים מעגל כזה, האלגוריתם ידפיס שלא קיים מעגל שלילי.


}

#endif

