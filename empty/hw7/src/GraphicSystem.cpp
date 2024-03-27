//
// Created by 黃漢軒 on 2023/12/22.
//

#include <vector>

#include "GraphicSystem.hpp"

GraphicSystem::GraphicSystem(std::vector<std::shared_ptr<IDrawable>> drawables){
}

void GraphicSystem::AddShape(std::shared_ptr<IDrawable> drawable){
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int index){
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int x, unsigned int y){
}

double GraphicSystem::CalculateTotalArea(){
}

int GraphicSystem::Size() {
}