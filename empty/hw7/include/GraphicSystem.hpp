//
// Created by 黃漢軒 on 2023/12/12.
//

#ifndef OOP_GRAPHICSYSTEM_H
#define OOP_GRAPHICSYSTEM_H

#include <vector>
#include <memory>
#include <string>
#include <stdexcept>

#include "IDrawable.hpp"

class GraphicSystem {
private:
    std::vector<std::shared_ptr<IDrawable>> drawables;
public:
    GraphicSystem() = default;
    GraphicSystem(std::vector<std::shared_ptr<IDrawable>> drawables);
    void AddShape(std::shared_ptr<IDrawable> drawable);
    std::shared_ptr<IDrawable> GetShape(unsigned int index);
    std::shared_ptr<IDrawable> GetShape(unsigned int x, unsigned int y);
    double CalculateTotalArea();
    int Size();
};

#endif // OOP_GRAPHICSYSTEM_H
