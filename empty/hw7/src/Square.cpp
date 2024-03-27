//
// Created by 黃漢軒 on 2023/12/12.
//

#include "ShapeHelper.hpp"
#include "Square.hpp"

Square::Square(Location location, int edge) : edge(edge), location(location) {
}

double Square::GetArea() {
}

Point Square::GetLeftTopPoint() {
}

bool Square::IsInShape(Point point) {
}

bool Square::IsOverlap(std::shared_ptr<IDrawable> drawable) {
}

BoxContainer Square::GetBoxContainer() {
}

int Square::GetEdge() {
}