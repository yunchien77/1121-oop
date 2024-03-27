//
// Created by 黃漢軒 on 2023/11/14.
//

#include "../include/ElectiveSubject.h"
#include "../include/RequiredSubject.h"
#include "../include/ScoreSystem.h"

int main()
{
    ScoreSystem HarryPotter("Harry Potter");

    // std::vector<int> v1 = {15, 20, 31};
    // std::shared_ptr<Subject> Wingardium_Leviosa = std::make_shared<RequiredSubject>("Wingardium Leviosa", v1, "sun", "CSIE", "327", 3);

    std::shared_ptr<Subject> Wingardium_Leviosa = std::shared_ptr<Subject>(new RequiredSubject("Wingardium Leviosa", {1, 8, 4}, "Albus Dumbledore", "Hogwarts", "Hogwarts_184", 3));
    std::shared_ptr<Subject> Black_Magic = std::shared_ptr<Subject>(new ElectiveSubject("Black Magic", {16, 17, 18}, "Lord Voldemort", "Slytherin", "Slytherin_841", 3));

    // 魔藥學
    std::shared_ptr<Subject> Potions = std::shared_ptr<Subject>(new RequiredSubject("Potions", {21, 22, 23}, "Severus Snape", "Gryffindor Slytherin Ravenclaw Hufflepuff", "Gryffindor_149", 3));
    HarryPotter.AddCourse(Wingardium_Leviosa);
    HarryPotter.AddCourse(Black_Magic);
    HarryPotter.AddCourse(Potions);
    HarryPotter.AddCourse(Potions);
    HarryPotter.listAllCourses();

    std::cout << std::endl;

    ScoreSystem HermioneGranger("Hermione Granger");
    HermioneGranger.AddCourse(Wingardium_Leviosa);
    HermioneGranger.AddCourse(Potions);
    HermioneGranger.listAllCourses();
    HermioneGranger.listGivenClassStudents("Potions");
    HermioneGranger.listGivenClassStudents("Wingardium Leviosa");
    HermioneGranger.listGivenClassStudents("Black Magic");
    HermioneGranger.calculateCredits();

    std::cout << std::endl;

    ScoreSystem RonWeasley("Ron Weasley");
    RonWeasley.AddCourse(Wingardium_Leviosa);
    RonWeasley.listAllCourses();
    RonWeasley.listGivenClassStudents("Wingardium Leviosa");
    HermioneGranger.listGivenClassStudents("Wingardium Leviosa");
    HarryPotter.listGivenClassStudents("Wingardium Leviosa");

    std::cout << std::endl;

    ScoreSystem DracoMalfoy("Draco Malfoy");
    DracoMalfoy.AddCourse(Black_Magic);

    std::cout << "-----------------------------------------" << std::endl;
    HarryPotter.listGivenClassStudents("Black Magic");
    HarryPotter.dropClass("Black Magic");
    HarryPotter.dropClass("Black Magic");
    HarryPotter.listAllCourses();
    std::cout << HarryPotter.calculateCredits() << std::endl;
    HarryPotter.listGivenClassStudents("Black Magic");
    DracoMalfoy.listGivenClassStudents("Black Magic");
    RonWeasley.dropClass("Potions");
    HermioneGranger.Print();
}