//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_IDRAWABLE_H
#define OOP_IDRAWABLE_H

#include "BoxContainer.hpp"
#include "Point.hpp"
#include <memory>

class IDrawable {
public:
    virtual double GetArea() = 0;
    virtual bool IsInShape(Point point) = 0;
    virtual bool IsOverlap(std::shared_ptr<IDrawable> drawable) = 0;
    virtual Point GetLeftTopPoint() = 0;
    virtual BoxContainer GetBoxContainer() = 0;
};

#endif // OOP_IDRAWABLE_H
