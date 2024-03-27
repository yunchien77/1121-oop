//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_SQUARE_H
#define OOP_SQUARE_H

#include "IDrawable.hpp"
#include "Location.hpp"

class Square : public IDrawable {
private:
    int edge;
    Location location;
public:
    Square(Location location, int edge);
    double GetArea() override;
    bool IsInShape(Point point) override;
    bool IsOverlap(std::shared_ptr<IDrawable> drawable) override;
    Point GetLeftTopPoint() override;
    BoxContainer GetBoxContainer() override;
    int GetEdge();
};

#endif // OOP_SQUARE_H
