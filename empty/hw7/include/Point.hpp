//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_POINT_H
#define OOP_POINT_H

class Point {
    int x;
    int y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
};

#endif // OOP_POINT_H
