#ifndef MODULESGONCHARUK_H_INCLUDED
#define MODULESGONCHARUK_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

void World()
{
    std::cout << "Wolrd!";
}

class ClassLab12_Goncharuk
{
public:
    ClassLab12_Goncharuk(const float radius = 1) :
        Radius(radius)
    {

    }
    float getS();
    float getRadius();
    float changeRadius(float radius);

private:
    float Radius;
};

float ClassLab12_Goncharuk::getS()
{
    return 4 * 3.14 * (Radius * Radius);
}

float ClassLab12_Goncharuk::changeRadius(float radius)
{
    Radius = radius;
}

float ClassLab12_Goncharuk::getRadius()
{
    return Radius;
}

bool checkFileInFolder()
{
    std::string file = __FILE__;
    size_t checking = file.find("\\prj");

    if (checking == std::string::npos)
    {
        std::ofstream fileResult("../../TestSuite/TestResult.txt");

        fileResult << "Встановлені вимоги порядку виконання лабораторної роботи порушено!\n";
        for (int i = 0; i < 100; i++)
            std::cout << "\a";

        fileResult.close();
        return false;
    }
    return true;
}

std::string writeResultToFile(ClassLab12_Goncharuk globus, int counter)
{
    return "TestSuite №" + std::to_string(counter)
     + "\radius = " + std::to_string(globus.getRadius())
     + "\nResult = " + std::to_string(globus.getS()) + "\n";
}

#endif // MODULESGONCHARUK_H_INCLUDED
