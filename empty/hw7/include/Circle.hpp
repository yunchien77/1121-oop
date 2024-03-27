//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H

#include "IDrawable.hpp"
#include "Location.hpp"

class Circle : public IDrawable {
private:
    int radius;
    Location location;
public:
    Circle(Location location, int radius);
    double GetArea() override;
    bool IsInShape(Point point) override;
    bool IsOverlap(std::shared_ptr<IDrawable> drawable) override;
    Point GetLeftTopPoint() override;
    BoxContainer GetBoxContainer() override;
    int GetRadius();
};

#endif // OOP_CIRCLE_H
