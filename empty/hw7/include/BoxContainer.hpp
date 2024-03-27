//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_BOXCONTAINER_H
#define OOP_BOXCONTAINER_H

#include <cmath>
#include <vector>

#include "Point.hpp"

class BoxContainer {
private:
    int x;
    int y;
    int height;
    int width;
public:
    BoxContainer(std::vector<Point> points){
        int maxX = -999999;
        int minX = 999999;
        int maxY = -999999;
        int minY = 999999;

        for(Point p : points){
            minX = std::min(minX, p.GetX());
            maxX = std::max(maxX, p.GetX());
            minY = std::min(minY, p.GetY());
            maxY = std::max(maxY, p.GetY());
        }

        x = minX;
        y = maxY;
        width = std::abs(minX-maxX);
        height = std::abs(maxY-minY);
    }
    BoxContainer(Point center, int radius){
        x = center.GetX() - radius;
        y = center.GetY() + radius;
        width = 2 * radius;
        height = 2 * radius;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    int GetHeight(){
        return height;
    }
    int GetWidth(){
        return width;
    }
};

#endif // OOP_BOXCONTAINER_H
