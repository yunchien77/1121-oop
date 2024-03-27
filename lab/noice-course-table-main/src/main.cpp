//
// Created by 黃漢軒 on 2023/11/14.
//

#include "../include/ElectiveSubject.h"
#include "../include/RequiredSubject.h"
#include "../include/ScoreSystem.h"
#include <memory>

int main() {
    ScoreSystem scoreSystem;

    scoreSystem.AddCourse(std::shared_ptr<Subject>(new RequiredSubject("Object Oriented Programming", {15, 20, 31})));
    scoreSystem.AddCourse(std::shared_ptr<Subject>(new RequiredSubject("Data Structure", {11, 16, 32})));
    scoreSystem.AddCourse(std::shared_ptr<Subject>(new ElectiveSubject("Network Programming", {23, 28, 33})));

    std::cout << "The total of the credit is " << scoreSystem.CalculateCredit() << std::endl;

    scoreSystem.Print();
}