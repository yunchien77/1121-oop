//
// Created by 黃漢軒 on 2023/12/12.
//

#include "Circle.hpp"
#include "ShapeHelper.hpp"

Circle::Circle(Location location, int radius) : radius(radius), location(location){
}

double Circle::GetArea() {
}

Point Circle::GetLeftTopPoint() {
}

bool Circle::IsInShape(Point point) {
}

bool Circle::IsOverlap(std::shared_ptr<IDrawable> drawable) {
}

BoxContainer Circle::GetBoxContainer() {
}

int Circle::GetRadius() {
}