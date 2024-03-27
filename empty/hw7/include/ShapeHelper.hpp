//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_SHAPEOVERLAPHELPER_H
#define OOP_SHAPEOVERLAPHELPER_H

#include <cmath>

#include "BoxContainer.hpp"

class ShapeHelper {
public:
    bool IsBoxOverlap(BoxContainer boxContainer1, BoxContainer boxContainer2) {
        int x1 = boxContainer1.GetX();
        int x2 = boxContainer2.GetX();
        int y1 = boxContainer1.GetY();
        int y2 = boxContainer2.GetY();

        bool x_overlap = (x1 <= x2 && x2 <= x1 + boxContainer1.GetWidth()) || (x2 <= x1 && x1 <= x2 + boxContainer2.GetWidth());
        bool y_overlap = (y1 - boxContainer1.GetHeight() <= y2 && y2 <= y1) || (y2 - boxContainer2.GetHeight() <= y1 && y1 <= y2);

        return x_overlap && y_overlap;
    }
    bool IsPointInCircle(int cx, int cy, int cr, int tx, int ty){
        return ((tx-cx)*(tx-cx) + (ty-cy)*(ty-cy)) <= cr*cr;
    }
    bool IsPointInSquare(int sx, int sy, int edge, int tx, int ty) {
        // Calculate the coordinates of the bottom-right corner of the square
        int sx_bottom = sx + edge;
        int sy_bottom = sy - edge;

        // Check if the point is inside the square
        bool insideX = (tx >= sx) && (tx <= sx_bottom);
        bool insideY = (ty >= sy_bottom) && (ty <= sy);

        // If the point is inside both X and Y, it is inside the square
        return insideX && insideY;
    }
};

#endif // OOP_SHAPEOVERLAPHELPER_H
